#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

static int counter = 0;
int r=15;
double pi=22.0/7.0;
static int z1 = 2 , z2 = 2, z3 = 2, z4 = 2, z5 = 2, z6 = 2, z7 = 2, z8 = 2, z9= 2;


void display_o(int x, int y){



    glBegin(GL_LINE_LOOP);
    for(float i=0 ; i < 2*pi ; i+=0.2){
        glVertex2f(x + sin(i)*r , y + cos(i)*r);
    }
    glEnd();
    glFlush();

}



void display_x(int a1 , int b1 , int a2 , int b2 ,int a3 , int b3 , int a4 , int b4){

    glBegin(GL_LINES);
    glColor3f(0,0,0);

    glVertex2f(a1,b1);
    glVertex2f(a2,b2);
    glVertex2f(a3,b3);
    glVertex2f(a4,b4);

    glEnd();
    glFlush();

}




void display(){

    glClearColor(.54, .84, .69,0);
    glClear(GL_COLOR_BUFFER_BIT);



    for(int i = 0 ; i< 150 ; i+=50){
        for(int j =0 ; j< 150 ; j+=50){

            glLineWidth(3);
            glBegin(GL_LINE_LOOP);
            glColor3f(0,0,0 );
            glVertex2f(j+50,i+50);
            glVertex2f(j+100,i+50);
            glVertex2f(j+100,i+100);
            glVertex2f(j+50,i+100);
            glEnd();

        }

    }
    glFlush();


}

void keyboard(unsigned char key , int x , int y){



    switch(key){

    case '1':
        if(z1 == 2){
                if(counter % 2 ==0){
                    display_x(60,60,90,90,90,60,60,90);
                    z1=1;
                }
                else{
                    display_o(75,75);
                    z1=0;
                }
                counter++;
        }
        break;
    case '2':
        if(z2 == 2){
                if(counter % 2 ==0){
                    display_x(110,60,140,90,140,60,110,90);
                    z2=1;
                }
                else{
                    display_o(125,75);
                    z2=0;
                }
                counter++;
        }
        break;
    case '3':
        if(z3 == 2){
                if(counter % 2 ==0){
                    display_x(160,60,190,90,190,60,160,90);
                    z3=1;
                }
                else{
                    display_o(175,75);
                    z3=0;
                }
                counter++;
        }
        break;
    case '4':
        if(z4 == 2){
                if(counter % 2 ==0){
                    display_x(60,110,90,140,90,110,60,140);
                    z4=1;
                }
                else{
                    display_o(75,125);
                    z4=0;
                }
                counter++;
        }
        break;
    case '5':
        if(z5 == 2){
                if(counter % 2 ==0){
                    display_x(110,110,140,140,140,110,110,140);
                    z5=1;
                }
                else{
                    display_o(125,125);
                    z5=0;
                }
                counter++;
        }
        break;
    case '6':
        if(z6 == 2){
                if(counter % 2 ==0){
                    display_x(160,110,190,140,190,110,160,140);
                    z6=1;
                }
                else{
                    display_o(175,125);
                    z6=0;
                }
                counter++;
        }
        break;
    case '7':
        if(z7 == 2){
                if(counter % 2 ==0){
                    display_x(60,160,90,190,90,160,60,190);
                    z7=1;
                }
                else{
                    display_o(75,175);
                    z7=0;
                }
                counter++;
        }
        break;
    case '8':
        if(z8 == 2){
                if(counter % 2 ==0){
                    display_x(110,160,140,190,140,160,110,190);
                    z8=1;
                }
                else{
                    display_o(125,175);
                    z8=0;
                }
                counter++;
        }
        break;
    case '9':
        if(z9 == 2){
                if(counter % 2 ==0){
                    display_x(160,160,190,190,190,160,160,190);
                    z9=1;
                }
                else{
                    display_o(175,175);
                    z9=0;
                }
                counter++;
        }
        break;
    }

    if((z1==0&&z2==0&&z3==0)||(z4==0&&z5==0&&z6==0)||(z7==0&&z8==0&&z9==0)||(z1==0&&z4==0&&z7==0)||(z2==0&&z5==0&&z8==0)||(z3==0&&z6==0&&z9==0)||(z1==0&&z5==0&&z9==0)||(z3==0&&z5==0&&z7==0)){

            MessageBox(NULL,"O-Win","Result",NULL);
            glutPostRedisplay();
            counter = 0;
            z1 = 2 , z2 = 2, z3 = 2, z4 = 2, z5 = 2, z6 = 2, z7 = 2, z8 = 2, z9= 2;

    }
    else if((z1==1&&z2==1&&z3==1)||(z4==1&&z5==1&&z6==1)||(z7==1&&z8==1&&z9==1)||(z1==1&&z4==1&&z7==1)||(z2==1&&z5==1&&z8==1)||(z3==1&&z6==1&&z9==1)||(z1==1&&z5==1&&z9==1)||(z3==1&&z5==1&&z7==1)){

            MessageBox(NULL,"X-Win","Result",NULL);
            glutPostRedisplay();
            counter = 0;
            z1 = 2 , z2 = 2, z3 = 2, z4 = 2, z5 = 2, z6 = 2, z7 = 2, z8 = 2, z9= 2;

    }
    else if(counter == 9){

        MessageBox(NULL,"BALANCE","Result",NULL);
        glutPostRedisplay();
        counter = 0;
        z1 = 2 , z2 = 2, z3 = 2, z4 = 2, z5 = 2, z6 = 2, z7 = 2, z8 = 2, z9= 2;

    }

}



int main(int argc,char** argv){

    glutInit(&argc,argv);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("Tic-Tac-Toe");
    gluOrtho2D(0,250,0,250);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();


}
