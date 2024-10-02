#include<GL/Glut.h> 
#include <math.h>
struct Point
{
    float x,y;
};

 

void initGL()
{
    glClearColor(1.1f, 1.0f, 1.0f, 1.0f); 
    glOrtho(-320,320,-240,240,-1,1);    
}

 

Point A = {100, 100}, B = {0, 100}, C = {0, 0}, D = {100, 0};
float angle = 10;

 

void draw(void)
{
    //Ve truc toa do
    glColor3f(1.0, 0.0, 0.0);  // ==> Red
      glBegin(GL_LINES);
          //Ve truc OX
        glVertex2i(-320,0);
        glVertex2i(320,0);
        //Ve truc OY
        glVertex2i(0,-240);
        glVertex2i(0,240);
    glEnd();

 

    glColor3f(0.0, 0.0, 1.0);  // ==> Blue
    glBegin(GL_POLYGON);
        glVertex2f(A.x, A.y);
        glVertex2f(B.x, B.y);
        glVertex2f(C.x, C.y);
        glVertex2f(D.x, D.y);
    glEnd();
    glFlush();
}

 

void Display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    draw();
}

 

void rotate(Point &p,float angle)
{
    p.x = p.x * cos(angle*(M_1_PI/180)) - p.y * sin(angle*(M_1_PI/180));
    p.y = p.x * sin(angle*(M_1_PI/180)) + p.y * cos(angle*(M_1_PI/180));
}

 

void rotateRectangle(float angle)
{
    rotate(A,angle);
    rotate(B,angle);
    rotate(C,angle);
    rotate(D,angle);
}

 

void keypressSpecial(int key, int x, int y)
{
    if (key == GLUT_KEY_RIGHT) //Phim mui ten sang phai
    {
        rotateRectangle(-angle);
    } 
    if (key == GLUT_KEY_LEFT)  //Phim mui ten sang trai
    {
        rotateRectangle(angle);
    } 
}

 

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);    
    glutInitWindowPosition(100, 50); //vi tri cua so
    
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
    glutCreateWindow("Phep quay quanh goc toa do"); 
    initGL();
    glutDisplayFunc(Display);
    glutIdleFunc(Display);
    glutSpecialFunc(keypressSpecial);
    glutMainLoop(); 
}
 

