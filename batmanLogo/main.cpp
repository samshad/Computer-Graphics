#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;

void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);

    int x = 80, w = 10, h = 10, y = 220;

    for(int i = 0; i < 17; i++){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(x,20);
            glVertex2i(x+w,20);
            glVertex2i(x+w,20+h);
            glVertex2i(x,20+h);
        glEnd();

        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,30);
            glVertex2i(x+w,30);
            glVertex2i(x+w,30+h);
            glVertex2i(x,30+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(x,210);
            glVertex2i(x+w,210);
            glVertex2i(x+w,210+h);
            glVertex2i(x,210+h);
        glEnd();

        x += 10;
    }

    y = 90, x = 10;

    for(int i = 0; i < 7; i++){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(310,y);
            glVertex2i(310+w,y);
            glVertex2i(310+w,y+h);
            glVertex2i(310,y+h);
        glEnd();

        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
            glVertex2i(20,y);
            glVertex2i(20+w,y);
            glVertex2i(20+w,y+h);
            glVertex2i(20,y+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(300,y);
            glVertex2i(300+w,y);
            glVertex2i(300+w,y+h);
            glVertex2i(300,y+h);
        glEnd();

        y += 10;
    }

    x = 20, y = 160;

    for(int i = 0; i < 6; i++){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(x+230,y-130);
            glVertex2i(x+230+w,y-130);
            glVertex2i(x+230+w,y-130+h);
            glVertex2i(x+230,y-130+h);
        glEnd();

        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
            glVertex2i(x+10,y);
            glVertex2i(x+10+w,y);
            glVertex2i(x+10+w,y+h);
            glVertex2i(x+10,y+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(x+220,y-130);
            glVertex2i(x+220+w,y-130);
            glVertex2i(x+220+w,y-130+h);
            glVertex2i(x+220,y-130+h);
        glEnd();

        x += 10, y += 10;
    }

    x = 20, y = 80;

    for(int i = 0; i < 6; i++){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(x+230,y+130);
            glVertex2i(x+230+w,y+130);
            glVertex2i(x+230+w,y+130+h);
            glVertex2i(x+230,y+130+h);
        glEnd();

        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
            glVertex2i(x+10,y);
            glVertex2i(x+10+w,y);
            glVertex2i(x+10+w,y+h);
            glVertex2i(x+10,y+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(x+230,y+120);
            glVertex2i(x+230+w,y+120);
            glVertex2i(x+230+w,y+120+h);
            glVertex2i(x+230,y+120+h);
        glEnd();

        x += 10, y -= 10;
    }

    x = 30, y = 140;

    for(int i = 0; i < 5; i++){
        x = 30;
        for(int j = 0; j < 27; j++){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
            x += 10;
        }
        y -= 10;
    }

    x = 140, y = 190;

    for(int i = 0; i < 13; i++){
        x = 140;
        for(int j = 0; j < 5; j++){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
            x += 10;
        }
        y -= 10;
    }

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(140,200);
        glVertex2i(140+w,200);
        glVertex2i(140+w,200+h);
        glVertex2i(140,200+h);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2i(180,200);
        glVertex2i(180+w,200);
        glVertex2i(180+w,200+h);
        glVertex2i(180,200+h);
    glEnd();

    x = 150, y = 200;

    for(int i = 0; i < 3; i++){
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();
        x += 10;
    }

    x = 150, y = 60;

    for(int i = 0; i < 3; i++){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();
        x += 10;
    }

    x = 150, y = 50;

    for(int i = 0; i < 3; i++){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();
        x += 10;
    }

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(160,40);
        glVertex2i(160+w,40);
        glVertex2i(160+w,40+h);
        glVertex2i(160,40+h);
    glEnd();

    x = 30, y = 90;

    for(int i = 0; i < 6; i++){
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(x+210,y+110);
            glVertex2i(x+210+w,y+110);
            glVertex2i(x+210+w,y+110+h);
            glVertex2i(x+210,y+110+h);
        glEnd();

        x += 10, y -= 10;
    }

    x = 30, y = 150;

    for(int i = 0; i < 6; i++){
        glColor3f(1,1,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        glBegin(GL_POLYGON);
            glVertex2i(x+210,y-110);
            glVertex2i(x+210+w,y-110);
            glVertex2i(x+210+w,y-110+h);
            glVertex2i(x+210,y-110+h);
        glEnd();

        x += 10, y += 10;
    }

    x = 40, y = 90;

    while(x < 290){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        if(x > 40 && x < 280){
            glBegin(GL_POLYGON);
                glVertex2i(x,y-10);
                glVertex2i(x+w,y-10);
                glVertex2i(x+w,y+h-10);
                glVertex2i(x,y+h-10);
            glEnd();
        }

        x += 10;
    }

    x = 60, y = 70;

    while(x < 270){
        if(y == 70 && (x != 130 && x != 190)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        if((x >= 70 && x <= 110) || (x >= 210 && x <= 250)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y-10);
                glVertex2i(x+w,y-10);
                glVertex2i(x+w,y+h-10);
                glVertex2i(x,y+h-10);
            glEnd();
        }

        if((x >= 80 && x <= 100) || (x >= 220 && x <= 240)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y-20);
                glVertex2i(x+w,y-20);
                glVertex2i(x+w,y+h-20);
                glVertex2i(x,y+h-20);
            glEnd();
        }

        if(x == 100 || x == 160 || x == 220){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y-30);
                glVertex2i(x+w,y-30);
                glVertex2i(x+w,y+h-30);
                glVertex2i(x,y+h-30);
            glEnd();
        }

        if(x == 130 || x == 190){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        if((x >= 120 && x <= 140) || (x >= 180 && x <= 200)){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y-10);
                glVertex2i(x+w,y-10);
                glVertex2i(x+w,y+h-10);
                glVertex2i(x,y+h-10);
            glEnd();
        }

        if((x >= 110 && x <= 140) || (x >= 180 && x <= 210)){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y-20);
                glVertex2i(x+w,y-20);
                glVertex2i(x+w,y+h-20);
                glVertex2i(x,y+h-20);
            glEnd();
        }

        if((x >= 90 && x <= 230) && (x != 100 && x != 160 && x != 220)){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y-30);
                glVertex2i(x+w,y-30);
                glVertex2i(x+w,y+h-30);
                glVertex2i(x,y+h-30);
            glEnd();
        }

        x += 10;
    }

    x = 40, y = 150;

    while(x < 290){
        if((x >= 40 && x <= 100) || x == 130 || x == 190 || (x >= 220 && x <= 280)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        if(x == 110 || x == 120 || x == 200 || x == 210){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        if(x > 40 && x < 280){
            if((x >= 50 && x <= 90) || (x >= 230 && x <= 270)){
                glColor3f(0,0,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+10);
                    glVertex2i(x+w,y+10);
                    glVertex2i(x+w,y+h+10);
                    glVertex2i(x,y+h+10);
                glEnd();
            }

            if((x > 90 && x <= 130) || (x >= 190 && x <= 230)){
                glColor3f(1,1,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+10);
                    glVertex2i(x+w,y+10);
                    glVertex2i(x+w,y+h+10);
                    glVertex2i(x,y+h+10);
                glEnd();
            }
        }

        if(x > 50 && x < 270){
            if((x >= 60 && x <= 90) || (x >= 230 && x <= 260)){
                glColor3f(0,0,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+20);
                    glVertex2i(x+w,y+20);
                    glVertex2i(x+w,y+h+20);
                    glVertex2i(x,y+h+20);
                glEnd();
            }

            if((x > 90 && x <= 130) || (x >= 190 && x <= 230)){
                glColor3f(1,1,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+20);
                    glVertex2i(x+w,y+20);
                    glVertex2i(x+w,y+h+20);
                    glVertex2i(x,y+h+20);
                glEnd();
            }
        }

        if(x > 60 && x < 260){
            if((x >= 70 && x <= 90) || (x >= 230 && x <= 250)){
                glColor3f(0,0,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+30);
                    glVertex2i(x+w,y+30);
                    glVertex2i(x+w,y+h+30);
                    glVertex2i(x,y+h+30);
                glEnd();
            }

            if((x > 90 && x <= 130) || (x >= 190 && x <= 230)){
                glColor3f(1,1,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+30);
                    glVertex2i(x+w,y+30);
                    glVertex2i(x+w,y+h+30);
                    glVertex2i(x,y+h+30);
                glEnd();
            }
        }

        if(x > 70 && x < 250){
            if((x >= 80 && x <= 100) || (x >= 220 && x <= 240)){
                glColor3f(0,0,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+40);
                    glVertex2i(x+w,y+40);
                    glVertex2i(x+w,y+h+40);
                    glVertex2i(x,y+h+40);
                glEnd();
            }

            if((x > 100 && x <= 130) || (x >= 190 && x <= 220)){
                glColor3f(1,1,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+40);
                    glVertex2i(x+w,y+40);
                    glVertex2i(x+w,y+h+40);
                    glVertex2i(x,y+h+40);
                glEnd();
            }
        }

        if(x > 70 && x < 250){
            if(x != 140 && x != 180){
                glColor3f(1,1,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+50);
                    glVertex2i(x+w,y+50);
                    glVertex2i(x+w,y+h+50);
                    glVertex2i(x,y+h+50);
                glEnd();
            }
        }

        x += 10;
    }

    glFlush();
}

void myInit(void){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 330.0, 0.0, 240.0);
}

int main(int argc, char *argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(330,240);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Chess");
    myInit();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
