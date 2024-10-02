#include <GL/glut.h>
#include <iostream>
#include <cmath>

GLfloat triangleX = 300.0f;
GLfloat triangleY = 400.0f;
GLfloat triangleSize = 300.0f;
GLfloat circleRadius = 200.0f;
GLfloat circleX = 400.0f;
GLfloat circleY = 300.0f;

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 800, 0, 600);
}

bool isInsideCircle(GLfloat x, GLfloat y) {
    GLfloat distance = sqrt((x - circleX) * (x - circleX) + (y - circleY) * (y - circleY));
    return distance <= circleRadius;
}

void drawTriangle() {
    
    glBegin(GL_TRIANGLES);
    if (isInsideCircle(triangleX, triangleY)) {
        glColor3f(0.0f, 1.0f, 0.0f); 
    } else {
        glColor3f(1.0f, 1.0f, 1.0f); // Màu d? cho ph?n tam giác n?m ngoài du?ng tr?n
    }
    glVertex2f(triangleX, triangleY); // Ð?nh tam giác
    if (isInsideCircle(triangleX - triangleSize / 2, triangleY + triangleSize)) {
        glColor3f(1.0f, 1.0f, 1.0f);
    } else {
        glColor3f(1.0f, 1.0f, 1.0f);
    }
    glVertex2f(triangleX - triangleSize / 2, triangleY + triangleSize); // Ð?nh trên bên trái
    if (isInsideCircle(triangleX + triangleSize / 2, triangleY + triangleSize)) {
        glColor3f(1.0f, 1.0f, 1.0f);
    } else {
        glColor3f(1.0f, 1.0f, 1.0f);
    }
    glVertex2f(triangleX + triangleSize / 2, triangleY + triangleSize); // Ð?nh trên bên ph?i
    glEnd();
}

void drawCircle() {
    // V? du?ng tr?n
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.0f, 1.0f);
    for (int i = 0; i < 360; ++i) {
        GLfloat angle = i * 3.1415926f / 180.0f;
        glVertex2f(circleX + circleRadius * cos(angle), circleY + circleRadius * sin(angle));
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawTriangle();
    drawCircle();

    glFlush();
}

void specialKeys(int key, int x, int y) {
    switch (key) {
        case GLUT_KEY_UP:
            triangleY += 10.0f;
            break;
        case GLUT_KEY_DOWN:
            triangleY -= 10.0f;
            break;
        case GLUT_KEY_LEFT:
            triangleX -= 10.0f;
            break;
        case GLUT_KEY_RIGHT:
            triangleX += 10.0f;
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(" hinh ");

    init();

    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);

    glutMainLoop();

    return 0;
}

