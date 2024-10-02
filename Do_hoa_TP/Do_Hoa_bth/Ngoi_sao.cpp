#include <GL/glut.h>
#include <math.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // V? ng�i sao
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 0.0); // M�u v�ng
    
    float angle = 0.0;
    float x, y;
    float radius = 0.4;
    
    for (int i = 0; i < 5; i++) {
        x = radius * sin(angle);
        y = radius * cos(angle);
        glVertex2f(x, y);
        angle += 2.0 * M_PI * 2.0 / 5.0;
    }
    
    glEnd();
    
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Star");
    glClearColor(0.0, 0.0, 0.0, 1.0); // M�u n?n �en
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // �?t h? t?a �?
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
