#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>


int x=75,y=75,r=15;
double pi=22.0/7.0;

void display_o(){



    glBegin(GL_LINE_STRIP);
    for(float i=0 ; i < 2*pi ; i+=0.2){
        glVertex2f(x + sin(i)*r , y + cos(i)*r);
    }
    glEnd();
    glFlush();

}



void display_x(){

    glBegin(GL_LINES);
    glColor3f(0,0,0);

    glVertex2f(60,60);
    glVertex2f(90,90);
    glVertex2f(90,60);
    glVertex2f(60,90);

    glEnd();

}





void display(){

    glClearColor(0,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);

    bool c =0;


    for(int i = 0 ; i< 150 ; i+=50){
        for(int j =0 ; j< 150 ; j+=50){
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

    if(key == 'w'){
        display_o();
    }
    glutPostRedisplay();
}


int main(int argc,char** argv){

    glutInit(&argc,argv);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("frame1");
    gluOrtho2D(0,250,0,250);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
}
