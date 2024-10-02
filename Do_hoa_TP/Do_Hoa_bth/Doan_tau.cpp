#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // V? ðoàn tàu
    glBegin(GL_QUADS);
    glColor3f(0.5, 0.5, 0.5); // Màu xám
    
    // Thân tàu
    glVertex2f(-0.8, -0.1);
    glVertex2f(0.8, -0.1);
    glVertex2f(0.8, 0.1);
    glVertex2f(-0.8, 0.1);
    
    // Ð?u tàu
    glColor3f(0.7, 0.2, 0.2); // Màu ð?
    glVertex2f(0.8, 0.1);
    glVertex2f(0.8, 0.3);
    glVertex2f(0.6, 0.3);
    glVertex2f(0.6, 0.1);
    
    // Bánh xe 1
    glColor3f(0.0, 0.0, 0.0); // Màu ðen
    glVertex2f(-0.7, -0.1);
    glVertex2f(-0.5, -0.1);
    glVertex2f(-0.5, -0.3);
    glVertex2f(-0.7, -0.3);
    
    // Bánh xe 2
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
    glClearColor(1.0, 1.0, 1.0, 1.0); // Màu n?n tr?ng
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Ð?t h? t?a ð?
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
