#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);    // M�u �?
    glVertex2f(-0.5, -0.5);
    glColor3f(0.0, 1.0, 0.0);    // M�u xanh l�
    glVertex2f(0.5, -0.5);
    glColor3f(0.0, 0.0, 1.0);    // M�u xanh d��ng
    glVertex2f(0.5, 0.5);
    glColor3f(1.0, 1.0, 0.0);    // M�u v�ng
    glVertex2f(-0.5, 0.5);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

