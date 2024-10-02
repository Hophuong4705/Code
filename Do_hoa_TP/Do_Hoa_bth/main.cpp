#include <GL/glut.h>
#include <cmath>
//1.0f, 0.0f, 0.0f mau do 
void initGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    gluOrtho2D(-400, 400, -400, 400);
    glMatrixMode(GL_POLYGON);
}

void drawCircle(float cx, float cy, float radius) {
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; ++i) {
        float angle = i * M_PI / 180;
        glVertex2f(cx + radius * cos(angle), cy + radius * sin(angle));
    }
    glEnd();
}

void drawTrapezoid() {
    glBegin(GL_LINE_LOOP);
    glVertex2f(-200, -200); // A
    glVertex2f(-100, 200);  // B
    glVertex2f(100, 200);   // C
    glVertex2f(200, -200);  // D
    glEnd();
    
   //ve hinh tron 
   
    glColor3f(0.0f, 0.0f, 1.0f); // Màu xanh 
    drawCircle(-50, 0, 50); 
    
   
    glColor3f(0.0f, 0.0f, 1.0f); // Màu xanh 
    drawCircle(60, 0, 50); 
}

void display() {
    glClear(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f); 
    drawTrapezoid();
    glFlush(); 
}
struct Point {
    float x, y;
};

Point A = {150, 150}, B = {0, 100}, C = {100, 200}; 
float circleCenterX = 0, circleCenterY = 0; 
float circleRadius = 150; 
float step = 5; 

void keypressSpecial(int key, int cx, int cy) {
    if (key == GLUT_KEY_UP) { (step); }
    if (key == GLUT_KEY_DOWN) { (-step); }
    if (key == GLUT_KEY_RIGHT) { (step); }
    if (key == GLUT_KEY_LEFT) { (-step); }
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);               
    glutInitWindowPosition(100, 100);          
    glutCreateWindow("Trapezoid in OpenGL");    
    initGL();                                   
    glutDisplayFunc(display);                   
    glutMainLoop();                            
}

