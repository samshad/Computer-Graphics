#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;

void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);

    int x = 0, w = 20, h = 20, y = 0;

    for(int i = 0; i < 8; i++){
        glColor3f(.6,.6,.3);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        if(i == 3) x += 100;
        else x += 20;
    }

    x = 20, y = 20;

    for(int i = 0; i < 6; i++){
        glColor3f(.6,.6,.3);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        if(i == 2) x += 100;
        else x += 20;
    }

    x = 40, y = 40;

    for(int i = 0; i < 6; i++){
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        if(i == 2) x += 60;
        else x += 20;
    }

    x = 40, y = 60;

    for(int i = 0; i < 8; i++){
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        x += 20;
    }

    x = 0, y = 60;

    for(int i = 0; i < 4; i++){
        glColor3f(1,.9,.6);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        if(i == 1) x += 180;
        else x += 20;
    }

    x = 0, y = 80;

    for(int i = 0; i < 6; i++){
        glColor3f(1,.9,.6);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        if(i == 2) x += 140;
        else x += 20;
    }

    x = 60, y = 80;

    for(int i = 0; i < 6; i++){
        if(x == 80 || x == 140){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 20;
    }

    x = 0, y = 100;

    for(int i = 0; i < 4; i++){
        glColor3f(1,.9,.6);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        if(i == 1) x += 180;
        else x += 20;
    }

    x = 40, y = 100;

    for(int i = 0; i < 8; i++){
        if(x >= 80 && x < 160){
            glColor3f(1,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(0,0,1);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 20;
    }

    x = 0, y = 120;

    while(x < 240){
        if(x == 80 || x == 140){
            glColor3f(1,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(0,0,1);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        if(x >= 20 && x < 220){
            if(x == 80 || x == 140){
                glColor3f(1,0,0);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+20);
                    glVertex2i(x+w,y+20);
                    glVertex2i(x+w,y+h+20);
                    glVertex2i(x,y+h+20);
                glEnd();
            }

            else{
                glColor3f(0,0,1);
                glBegin(GL_POLYGON);
                    glVertex2i(x,y+20);
                    glVertex2i(x+w,y+20);
                    glVertex2i(x+w,y+h+20);
                    glVertex2i(x,y+h+20);
                glEnd();
            }
        }

        x += 20;
    }

    x = 40, y = 160;

    while(x < 160){
        glColor3f(0,0,1);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        if(x == 80){
            glColor3f(1,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 20;
    }

    x = 60, y = 180;

    for(int i = 0; i < 7; i++){
        glColor3f(1,.9,.6);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        x += 20;
    }

    x = 20, y = 200;

    while(x < 220){
        if(x >= 60 && x < 140){
            glColor3f(1,.9,.6);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(.64,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 20;
    }

    x = 20, y = 220;

    while(x < 240){
        if(x == 20 || x == 60 || x == 80 || x == 160){
            glColor3f(.64,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,.9,.6);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 20;
    }

    x = 20, y = 240;

    while(x < 220){
        if(x == 20 || x == 60){
            glColor3f(.64,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(x == 140){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,.9,.6);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 20;
    }

    x = 40, y = 260;

    while(x < 180){
        if(x == 40 || x == 60 || x == 80){
            glColor3f(.64,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(x == 140){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,.9,.6);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 20;
    }

    x = 40, y = 280;

    while(x < 220){
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        if(x >= 60 && x <= 140){
            glColor3f(1,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y+20);
                glVertex2i(x+w,y+20);
                glVertex2i(x+w,y+h+20);
                glVertex2i(x,y+h+20);
            glEnd();
        }

        x += 20;
    }

    glFlush();
}

void myInit(void){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 240.0, 0.0, 320.0);
}

int main(int argc, char *argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(240,320);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Mario");
    myInit();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
