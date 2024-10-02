#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // V? �o�n t�u
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5); // M�u x�m
    
    // Th�n t�u
    glVertex2f(-0.8, -0.1);
    glVertex2f(0.8, -0.1);
    glVertex2f(0.8, 0.1);
    glVertex2f(-0.8, 0.1);
    
    // �?u t�u
    glColor3f(0.7, 0.2, 0.2); // M�u �?
    glVertex2f(0.8, 0.1);
    glVertex2f(0.8, 0.3);
    glVertex2f(0.6, 0.3);
    glVertex2f(0.6, 0.1);
    
    // B�nh xe 1
    glColor3f(0.0, 0.0, 0.0); // M�u �en
    glVertex2f(-0.7, -0.1);
    glVertex2f(-0.5, -0.1);
    glVertex2f(-0.5, -0.3);
    glVertex2f(-0.7, -0.3);
    
    // B�nh xe 2
    glVertex2f(-0.3, -0.1);
    glVertex2f(-0.1, -0.1);
    glVertex2f(-0.1, -0.3);
    glVertex2f(-0.3, -0.3);
    
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Train");
    glClearColor(1.0, 1.0, 1.0, 1.0); // M�u n?n tr?ng
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // �?t h? t?a �?
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
