#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;

#define inside 0
#define left 1
#define right 2
#define bottom 4
#define top 8

double x_max, y_max, x_min, y_min, fx1, fx2, fy1, fy2;

void draw(){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,0,0);
    glBegin(GL_LINES);
        glVertex2i(fx1,fy1);
        glVertex2i(fx2,fy2);
    glEnd();

    glFlush();
}

int region(double x, double y){
    int reg = inside;

    if(x < x_min){
        reg |= left;
    }
    else if(x > x_max){
        reg |= right;
    }
    if(y < y_min){
        reg |= bottom;
    }
    else if(y > y_max){
        reg |= top;
    }

    return reg;
}

bool clip(double x1, double y1, double x2, double y2){
    int reg1 = region(x1, y1);
    int reg2 = region(x2, y2);

    bool accept = 0;

    while(1){
        if(!reg1 && !reg2){
            accept = 1;
            break;
        }
        else if(reg1 & reg2){
            break;
        }
        else{
            int tmpreg;
            double x, y;

            if(reg1)
                tmpreg = reg1;
            else
                tmpreg = reg2;

            if(tmpreg & top){
                x = x1 + (x2 - x1) * (y_max - y1) / (y2 - y1);
                y = y_max;
            }
            else if(tmpreg & bottom){
                x = x1 + (x2 - x1) * (y_min - y1) / (y2 - y1);
                y = y_min;
            }
            else if(tmpreg & right){
                y = y1 + (y2 - y1) * (x_max - x1) / (x2 - x1);
                x = x_max;
            }
            else if(tmpreg & left){
                y = y1 + (y2 - y1) * (x_min - x1) / (x2 - x1);
                x = x_min;
            }

            if(tmpreg == reg1){
                x1 = x;
                y1 = y;
                reg1 = region(x1, y1);
            }
            else{
                x2 = x;
                y2 = y;
                reg2 = region(x2, y2);
            }
        }
    }
    if(accept){
        fx1 = x1;
        fy1 = y1;
        fx2 = x2;
        fy2 = y2;
        return 1;
    }
    else
        return 0;
}

void baire(){
    glClear(GL_COLOR_BUFFER_BIT);
    glFlush();
}

void myInit(void){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

int main(int argc, char *argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Cohen Sutherland Clipping");
    myInit();

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x_min >> y_min >> x_max >> y_max;

    if(clip(x1, y1, x2, y2)){
        cout << fx1 << " " << fy1 << " " << fx2 << " " << fy2;
        glutDisplayFunc(draw);
    }

    else{
        glutDisplayFunc(baire);
    }

    //glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}

// 50 50 70 70 40 40 100 80
