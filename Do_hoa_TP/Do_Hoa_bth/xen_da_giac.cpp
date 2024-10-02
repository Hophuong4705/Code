#include <GL/glut.h>

float triangleX = 0.0f;
float triangleY = 0.0f;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    
    // V? da giác
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.5); // Màu xám
    
    glVertex2f(-0.8, -0.8);
    glVertex2f(0.8, -0.8);
    glVertex2f(0.8, 0.8);
    glVertex2f(-0.8, 0.8);
    
    glEnd();
    
    // Di chuy?n tam giác
    glTranslatef(triangleX, triangleY, 0.0f);
    
    // V? tam giác
    glBegin(GL_TRIANGLES);
    glColor3f(0.7, 0.2, 0.2); // Màu d?
    
    glVertex2f(-0.6, -0.4);
    glVertex2f(0.6, -0.4);
    glVertex2f(0.0, 0.6);
    
    glEnd();
    
    glFlush();
}

void keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 'w':
            triangleY += 0.1f;
            break;
        case 's':
            triangleY -= 0.1f;
            break;
        case 'a':
            triangleX -= 0.1f;
            break;
        case 'd':
            triangleX += 0.1f;
            break;
    }
    
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Moving Triangle");
    glClearColor(1.0, 1.0, 1.0, 1.0); // Màu n?n tr?ng
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0); // Ð?t h? t?a d?
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    
    return 0;
}
