#include <bits/stdc++.h>
#include <GL/gl.h>
#include <GL/glut.h>

using namespace std;

#define FOR(i,j,k) for(int i = j; i < k; i++)
#define rep(l,n) FOR(l,0,n)
#define per(i,j,k) for(int i = j; i > k; i--)

void myDisplay(void){
    glClear(GL_COLOR_BUFFER_BIT);

    int x = 150, w = 10, h = 10, y = 110;

    rep(l,15){
        if(!l || l == 8 || l > 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160;

    rep(l,14){
        if(!l || l == 8 || l > 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 100;

    rep(l,14){
        if((l >= 8 and l <= 10) or l == 12 or l == 13){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 100;

    rep(l,13){
        if((l >= 6 and l <= 8) or l == 12 or l == 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 90;

    rep(l,12){
        if(!l or l == 3 or (l >= 8 and l <= 11 and l != 9)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        if(l == 9){
            glColor3f(1,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 90;

    rep(l,11){
        if(!l or l == 3 or (l >= 6 and l < 11 and l != 7)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        if(l == 7){
            glColor3f(1,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 80;

    rep(l,12){
        if(l == 1 or l == 2 or (l >= 8 and l <= 11 and l != 10)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 80;

    rep(l,11){
        if(l == 1 or l == 2 or (l >= 7 and l < 11 and l != 9)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 70;

    rep(l,11){
        if(l == 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 70;

    rep(l,10){
        if(l == 9){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 60;

    rep(l,11){
        if(l >= 8 and l <= 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 60;

    rep(l,10){
        if(l >= 7 and l < 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 50;

    rep(l,10){
        if(l >= 5 and l <= 9 and l != 8){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 50;

    rep(l,9){
        if(l >= 4 and l <= 8 and l != 7){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 40;

    rep(l,10){
        if(l <= 3 or l == 9){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 40;

    rep(l,9){
        if(l <= 2 or l == 8){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 130, y = 30;

    rep(l,7){
        if(!l or l == 6){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 170, y = 30;

    rep(l,7){
        if(!l or l == 6){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 120, y = 20;

    rep(l,6){
        if(!l or l == 4 or l == 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 180, y = 20;

    rep(l,6){
        if(!l or l == 4 or l == 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 120, y = 10;

    rep(l,5){
        if(!l or l == 2 or l == 4){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 180, y = 10;

    rep(l,5){
        if(!l or l == 2 or l == 4){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 110, y = 0;

    rep(l,3){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        x -= 10;
    }

    x = 190, y = 0;

    rep(l,3){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        x += 10;
    }

    x = 150, y = 120;

    rep(l,15){
        if(l == 5 or l == 6 || l == 14 || l == 12){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 120;

    rep(l,14){
        if(l == 4 or l == 5 || l == 13 || l == 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 130;

    rep(l,16){
        if((l >= 4 and l <= 7) || l == 15 || l == 13 || l == 12 || l == 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 130;

    rep(l,15){
        if((l >= 3 and l <= 6) || l == 14 || l == 12 || l == 11 || l == 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 140;

    rep(l,16){
        if((l >= 4 and l <= 7 and l != 6) || l == 15 || l == 13 || l == 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(l != 6){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 140;

    rep(l,15){
        if((l >= 3 and l <= 6 and l != 5) || l == 14 || l == 12 || l == 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(l != 5){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 150;

    rep(l,15){
        if(l == 5 or l == 6 or l == 14 or l == 13 or l == 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 150;

    rep(l,14){
        if(l == 4 or l == 5 or l == 13 or l == 12 or l == 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 160, y = 160;

    rep(l,13){
        if(l <= 12 and l >= 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 160;

    rep(l,14){
        if(l <= 13 and l >= 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 150, y = 170;

    rep(l,13){
        if(l == 12 or l == 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 170;

    rep(l,12){
        if(l == 11 or l == 9){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 180;

    rep(l,13){
        if(l == 12 or l == 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 180;

    rep(l,12){
        if(l == 11 or l == 9){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 160, y = 190;

    rep(l,11){
        if(l == 10 or l == 8){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 190;

    rep(l,12){
        if(l == 11 or l == 9){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 150, y = 200;

    rep(l,12){
        if(l == 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 200;

    rep(l,11){
        if(l == 10){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 160, y = 210;

    rep(l,12){
        if(l == 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 210;

    rep(l,13){
        if(l == 12){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 150, y = 220;

    rep(l,13){
        if(l == 12 or l == 6 or l == 7){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 220;

    rep(l,12){
        if(l == 11 or l == 6 or l == 7){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 160, y = 230;

    rep(l,13){
        if(l == 3 or l == 4 or l == 12 or l == 5 or l == 6){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 230;

    rep(l,14){
        if(l == 3 or l == 4 or l == 13 or l == 5 or l == 6){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 150, y = 240;

    rep(l,14){
        if(!l or l == 1 or l == 2 or l == 6 or l == 7 or l == 13){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 240;

    rep(l,14){
        if(!l or l == 1 or l == 2 or l == 6 or l == 13){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 160, y = 250;

    rep(l,15){
        if(l == 4 or l == 5 or l == 7 or l == 13 or l == 14){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(l != 6){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 250;

    rep(l,15){
        if(l == 4 or l == 5 or l == 7 or l == 14 or l == 13){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(l != 6){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 150, y = 260;

    rep(l,15){
        if(l < 4 or l == 8 or l == 13 or l == 14){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(l > 8){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 160, y = 260;

    rep(l,15){
        if(l < 4 or l == 8 or l == 13 or l == 14){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(l > 8){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 150, y = 270;

    rep(l,16){
        if(!l or l == 2 or l == 9 or (l <= 15 and l >= 12)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(l > 9 or l == 1){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 310, y = 270;

    rep(l,7){
        if(l < 4 or l == 6){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 150, y = 280;

    rep(l,16){
        if(!l or l == 3 or (l >= 10)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(l < 3){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 310, y = 280;

    rep(l,6){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        x -= 10;
    }

    x = 310, y = 290;

    rep(l,5){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        x -= 10;
    }

    x = 150, y = 290;

    rep(l,16){
        if(!l or l == 3 or (l > 10)){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(l < 3){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    x = 150, y = 300;

    rep(l,16){
        if(l == 2 or l > 11){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else if(!l or l == 1){
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x -= 10;
    }

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(160,300);
        glVertex2i(160+w,300);
        glVertex2i(160+w,300+h);
        glVertex2i(160,300+h);
    glEnd();

    x = 310, y = 300;

    rep(l,4){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        x -= 10;
    }

    x = 310, y = 310;

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
    glEnd();

    x = 300, y = 310;

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
    glEnd();

    x = 0, y = 310;

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
    glEnd();

    x = 10, y = 310;

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2i(x,y);
        glVertex2i(x+w,y);
        glVertex2i(x+w,y+h);
        glVertex2i(x,y+h);
    glEnd();

    x = 120, y = 310;

    rep(l,6){
        if(l == 1 or !l or l == 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 100, y = 320;

    rep(l,9){
        if(l == 1 or !l or l >= 6){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 80, y = 330;

    rep(l,8){
        if(l == 1 or !l or l >= 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 90, y = 340;

    rep(l,6){
        if(l == 1 or !l or l == 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 110, y = 350;

    rep(l,6){
        if(!l or l == 4 or l == 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 120, y = 360;

    rep(l,7){
        if(!l or l == 1 or l == 6 or l == 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 140, y = 370;

    rep(l,6){
        if(!l or l == 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 130, y = 380;

    rep(l,7){
        if(!l or l == 6){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 120, y = 390;

    rep(l,7){
        if(!l or l == 6){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 110, y = 400;

    rep(l,8){
        if(!l or l == 7){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 100, y = 410;

    rep(l,8){
        if(!l or l == 7){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 100, y = 420;

    rep(l,8){
        if(!l or l == 7){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 110, y = 430;

    rep(l,6){
        if(!l or l == 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 110, y = 440;

    rep(l,6){
        if(!l or l == 5){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 120, y = 450;

    rep(l,4){
        if(!l or l == 3){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 120, y = 460;

    rep(l,4){
        if(!l or l == 3){
            glColor3f(0,0,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        else{
            glColor3f(1,1,0);
            glBegin(GL_POLYGON);
                glVertex2i(x,y);
                glVertex2i(x+w,y);
                glVertex2i(x+w,y+h);
                glVertex2i(x,y+h);
            glEnd();
        }

        x += 10;
    }

    x = 130, y = 470;

    rep(l,2){
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
            glVertex2i(x,y);
            glVertex2i(x+w,y);
            glVertex2i(x+w,y+h);
            glVertex2i(x,y+h);
        glEnd();

        x += 10;
    }

    glFlush();
}

void myInit(void){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 320.0, 0.0, 500.0);
}

int main(int argc, char *argv[]){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(320,500);
    glutInitWindowPosition(100,100);
    glutCreateWindow("Mario");
    myInit();
    glutDisplayFunc(myDisplay);
    glutMainLoop();

    return 0;
}
