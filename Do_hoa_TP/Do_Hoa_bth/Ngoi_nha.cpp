#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // V? ngôi nhà
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5); // Màu xám
    
    // Mái nhà
    glVertex2f(-0.5, 0.0);
    glVertex2f(0.5, 0.0);
    glVertex2f(0.25, 0.5);
    glVertex2f(-0.25, 0.5);
    
    // Thân nhà
    glColor3f(0.7, 0.2, 0.2); // Màu ð?
    glVertex2f(-0.4, 0.0);
    glVertex2f(0.4, 0.0);
    glVertex2f(0.4, -0.6);
    glVertex2f(-0.4, -0.6);
    
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL House");
    glClearColor(1.0, 1.0, 1.0, 1.0); // Màu n?n tr?ng
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Ð?t h? t?a ð?
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
