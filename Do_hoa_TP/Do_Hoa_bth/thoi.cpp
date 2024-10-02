#include <GL/glut.h>
#include <cmath>

struct Point {
    float x, y;
};

Point A = {200, 150}, B = {150, 200}, C = {100, 150}, D = {150, 100}; // H?nh thoi
float ellipseCenterX = 0, ellipseCenterY = 0;
float ellipseRadiusX = 150; // B?n k?nh theo tr?c x c?a h?nh elip
float ellipseRadiusY = 100; // B?n k?nh theo tr?c y c?a h?nh elip
float step = 5;

void initGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glOrtho(-320, 320, -240, 240, -1, 1);
}

void drawDiamond() {
    glBegin(GL_LINE_LOOP);
    glVertex2f(A.x, A.y);
    glVertex2f(B.x, B.y);
    glVertex2f(C.x, C.y);
    glVertex2f(D.x, D.y);
    glEnd();
}

void drawEllipse() {
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i <= 360; i++) {
        float angle = i * M_PI / 180;
        float ellipseX = ellipseCenterX + ellipseRadiusX * cos(angle);
        float ellipseY = ellipseCenterY + ellipseRadiusY * sin(angle);
        glVertex2f(ellipseX, ellipseY);
    }
    glEnd();
}

void draw() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0);
    drawDiamond();

    glColor3f(0.5, 0.5, 0.5);
    drawEllipse();

    Point A2 = {A.x + ellipseCenterX, A.y + ellipseCenterY};
    Point B2 = {B.x + ellipseCenterX, B.y + ellipseCenterY};
    Point C2 = {C.x + ellipseCenterX, C.y + ellipseCenterY};
    Point D2 = {D.x + ellipseCenterX, D.y + ellipseCenterY};

    glBegin(GL_POINTS);
    glColor3f(1, 0, 0);
    for (float i = -ellipseRadiusX; i <= ellipseRadiusX; i += 0.1) {
        for (float j = -ellipseRadiusY; j <= ellipseRadiusY; j += 0.1) {
            if (((i * i) / (ellipseRadiusX * ellipseRadiusX)) + ((j * j) / (ellipseRadiusY * ellipseRadiusY)) <= 1) {
                float det1 = (A2.x - B2.x) * (C2.y - B2.y) - (C2.x - B2.x) * (A2.y - B2.y);
                float alpha1 = ((i - B2.x) * (C2.y - B2.y) - (C2.x - B2.x) * (j - B2.y)) / det1;
                float beta1 = ((A2.x - B2.x) * (j - B2.y) - (i - B2.x) * (A2.y - B2.y)) / det1;
                float det2 = (B2.x - C2.x) * (D2.y - C2.y) - (D2.x - C2.x) * (B2.y - C2.y);
                float alpha2 = ((i - C2.x) * (D2.y - C2.y) - (D2.x - C2.x) * (j - C2.y)) / det2;
                float beta2 = ((B2.x - C2.x) * (j - C2.y) - (i - C2.x) * (B2.y - C2.y)) / det2;
                float det3 = (C2.x - D2.x) * (A2.y - D2.y) - (A2.x - D2.x) * (C2.y - D2.y);
                float alpha3 = ((i - D2.x) * (A2.y - D2.y) - (A2.x - D2.x) * (j - D2.y)) / det3;
                float beta3 = ((C2.x - D2.x) * (j - D2.y) - (i - D2.x) * (C2.y - D2.y)) / det3;
                float det4 = (D2.x - A2.x) * (B2.y - A2.y) - (B2.x - A2.x) * (D2.y - A2.y);
                float alpha4 = ((i - A2.x) * (B2.y - A2.y) - (B2.x - A2.x) * (j - A2.y)) / det4;
                float beta4 = ((D2.x - A2.x) * (j - A2.y) - (i - A2.x) * (D2.y - A2.y)) / det4;
                if (alpha1 >= 0 && beta1 >= 0 && alpha2 >= 0 && beta2 >= 0 && alpha3 >= 0 && beta3 >= 0 && alpha4 >= 0 && beta4 >= 0) {
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
    D.x += step;
}

void changeY(float step) {
    A.y += step;
    B.y += step;
    C.y += step;
    D.y += step;
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
    glutCreateWindow("Diamond in Ellipse with Intersection Color");
    initGL();
    glutDisplayFunc(draw);
    glutIdleFunc(draw);
    glutSpecialFunc(keypressSpecial);
    glutMainLoop();
    return 0;
}

