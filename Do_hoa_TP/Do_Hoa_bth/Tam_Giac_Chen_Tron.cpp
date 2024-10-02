#include <GL/glut.h>
#include <cmath>

struct Point {
    float x, y;
};

Point A = {350, 550}, B = {0, 100}, C = {250, 200}; 
float circleCenterX = 0, circleCenterY = 0; 
float circleRadius = 150; 
float step = 5; 

void initGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); 
    glOrtho(-320, 320, -240, 240, -1, 1); 
}

void drawTriangle() {
    glBegin(GL_LINE_LOOP);
    glVertex2f(A.x, A.y);
    glVertex2f(B.x, B.y);
    glVertex2f(C.x, C.y);
    glEnd();
}

void drawCircle() {
    glBegin(GL_LINE_LOOP);

    for (int i = 0; i <= 360; i++) {
        float angle = i * M_PI / 180;
        float circleX = circleCenterX + circleRadius * cos(angle);
        float circleY = circleCenterY + circleRadius * sin(angle);
        glVertex2f(circleX, circleY);
    }
    glEnd();
}

void draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0); 
    drawTriangle();

    glColor3f(0.5, 0.5, 0.5); 
    drawCircle();

    Point A2 = {A.x + circleCenterX, A.y + circleCenterY};
    Point B2 = {B.x + circleCenterX, B.y + circleCenterY};
    Point C2 = {C.x + circleCenterX, C.y + circleCenterY};

    glBegin(GL_POINTS);
    glColor3f(1, 0, 0); 
    for (float i = -circleRadius; i <= circleRadius; i += 0.1) {
        for (float j = -circleRadius; j <= circleRadius; j += 0.1) {
            if ((i * i) + (j * j) <= (circleRadius * circleRadius)) {
                float det = (A2.x - C2.x) * (B2.y - C2.y) - (B2.x - C2.x) * (A2.y - C2.y);
                float alpha = ((i - C2.x) * (B2.y - C2.y) - (B2.x - C2.x) * (j - C2.y)) / det;
                float beta = ((A2.x - C2.x) * (j - C2.y) - (i - C2.x) * (A2.y - C2.y)) / det;
                float gamma = 1.0 - alpha - beta;
                if (alpha >= 0 && beta >= 0 && gamma >= 0) {
                    glVertex2f(i, j);
                }
            }
        }
    }
    glEnd();

    glFlush();
}

void changeX(float step) {
    A.x += step;
    B.x += step;
    C.x += step;
}

void changeY(float step) {
    A.y += step;
    B.y += step;
    C.y += step;
}

void keypressSpecial(int key, int x, int y) {
    if (key == GLUT_KEY_UP) { changeY(step); }
    if (key == GLUT_KEY_DOWN) { changeY(-step); }
    if (key == GLUT_KEY_RIGHT) { changeX(step); }
    if (key == GLUT_KEY_LEFT) { changeX(-step); }
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 50);
    glutCreateWindow("Triangle in Circle with Intersection Color");
    initGL();
    glutDisplayFunc(draw);
    glutIdleFunc(draw);
    glutSpecialFunc(keypressSpecial);
    glutMainLoop();
    return 0;
}

