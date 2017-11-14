#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;

void draw(){
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
        glVertex2i(10,10);
        glVertex2i(110,10);
        glVertex2i(110,110);
        glVertex2i(10,110);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
        glVertex2i(10+50,10+50);
        glVertex2i(110+50,10+50);
        glVertex2i(110+50,110+50);
        glVertex2i(10+50,110+50);
    glEnd();

    glColor3f(0,0,1);
    glBegin(GL_TRIANGLES);
        glVertex2i(10,110);
        glVertex2i(10+50,110);
        glVertex2i(10+50,110+50);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_TRIANGLES);
        glVertex2i(110,10);
        glVertex2i(110+50,10+50);
        glVertex2i(110,110-50);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
        glVertex2i(10,10);
        glVertex2i(110,10);

        glVertex2i(10,110);
        glVertex2i(110,110);

        glVertex2i(10,10);
        glVertex2i(10,110);

        glVertex2i(110,10);
        glVertex2i(110,110);

        glVertex2i(10,110);
        glVertex2i(10+50,110+50);

        //glVertex2i(10+50,110);
        //glVertex2i(10+50,110+50);

        glVertex2i(110,10);
        glVertex2i(110+50,10+50);

        glVertex2i(110+50,10+50);
        glVertex2i(110,110-50);

        glVertex2i(110,110);
        glVertex2i(110+50,110+50);

        glVertex2i(60,160);
        glVertex2i(110+50,110+50);

        glVertex2i(110+50,110+50);
        glVertex2i(160,60);
    glEnd();

    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(10,10);
        glVertex2i(110,10);
        glVertex2i(110,110);
        glVertex2i(10,110);
    glEnd();

    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
        glVertex2i(110,110);
        glVertex2i(110,10);
        glVertex2i(160,60);
        glVertex2i(160,160);
    glEnd();

    glFlush();
}

void myInit(void){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 600.0, 0.0, 500.0);
}

int main(int argc, char *argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("2D cube");
    myInit();
    glutDisplayFunc(draw);
    glutMainLoop();

    return 0;
}
