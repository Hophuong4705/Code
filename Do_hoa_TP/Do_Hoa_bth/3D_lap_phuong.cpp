#include <GL/glut.h>
#include <math.h>
#include "DOHOA3D.H"
ToaDo3D P1, P20, P2, P3, P4, P5, P6, P7, P8, P9, P10, P11, P12, P13, P14, P15,
            Q20, Q9, Q10, Q11, Q12, Q13, Q14, Q15,

            N1, N2, N3, N4, N5, N6, N7, N8, N9, N10, N11, N12, N13, N14, N15, N16;
void KhoiTaoBien() {
    D=2000; R=400;
    theta=40;phi=20;
    pc=PhoiCanh;
    P1.x=0; P1.y=0; P1.z=0;
    P20.x=0; P20.y=0.7; P20.z=0.2;
    Q20.x=0; Q20.y=-0.7; Q20.z=0.2;

    P2.x=0; P2.y=0; P2.z=2;
    P3.x=0.5; P3.y=0; P3.z=2.5;
    P4.x=1; P4.y=0; P4.z=2.5;
    P5.x=1.5; P5.y=0; P5.z=1.6;
    P6.x=-0.5; P6.y=0; P6.z=2.5;
    P7.x=-1; P7.y=0; P7.z=2.5;
    P8.x=-1.5; P8.y=0; P8.z=1.6;


    P9.x=0; P9.y=0.7; P9.z=2 - 0.2;
    P10.x=0.6 ; P10.y=0.7; P10.z=2.5 - 0.2;
    P11.x=0.9; P11.y=0.7; P11.z=2.5 - 0.2;
    P12.x=1.5 - 0.2; P12.y=0.7; P12.z=1.6;
    P13.x=-0.6; P13.y=0.7; P13.z=2.5 - 0.2;
    P14.x=-0.9; P14.y=0.7; P14.z=2.5 - 0.2;
    P15.x=-1.5 + 0.2; P15.y=0.7; P15.z=1.6;


    Q9.x=0;          Q9.y=-0.7;      Q9.z=2 - 0.2;
    Q10.x=0.6;       Q10.y=-0.7;     Q10.z=2.5 - 0.2;
    Q11.x=0.9;       Q11.y=-0.7;     Q11.z=2.5 - 0.2;
    Q12.x=1.5 - 0.2; Q12.y=-0.7;      Q12.z=1.6;
    Q13.x=-0.6;      Q13.y=-0.7;     Q13.z=2.5 - 0.2;
    Q14.x=-0.9;      Q14.y=-0.7;     Q14.z=2.5 - 0.2;
    Q15.x=-1.5 + 0.2;Q15.y=-0.7;     Q15.z=1.6;



    N1.x=0; N1.y=0; N1.z=2;
    N2.x=0.5; N2.y=0; N2.z=2.5;
    N3.x=1; N3.y=0; N3.z=2.5;
    N4.x=1.5;N4.y=0;N4.z=1.6;
    N5.x=-0.5;N5.y=0;N5.z=2.5;
    N6.x=-1; N6.y=0; N6.z=2.5;
    N7.x=-1.5;N7.y=0;N7.z=1.6;

    N8.x=0;N8.y=0.7;N8.z=2 - 0.2;
    N9.x=0.6 ; N9.y=0.7; N9.z=2.5 - 0.2;
    N10.x=0.9; N10.y=0.7; N10.z=2.5 - 0.2;
    N11.x=1.5 - 0.2; N11.y=0.7; N11.z=1.6;
    N12.x=-0.6; N12.y=0.7; N12.z=2.5 - 0.2;
    N13.x=-0.9; N13.y=0.7; N13.z=2.5 - 0.2;
    N14.x=-1.5 + 0.2; N14.y=0.7; N14.z=1.6;




}

void VeLapPhuong() {
//    Line(P1, P2);
    Line(P2, P3);
    Line(P3, P4); Line(P4, P5);
    Line(P5, P1);
    Line(P2, P6); Line(P6, P7);
    Line(P7, P8); Line(P8, P1);

//    Line(P20, P9);
    Line(P9, P10);
    Line(P10, P11); Line(P11, P12);
    Line(P12, P20);
    Line(P9, P13); Line(P13, P14);
    Line(P14, P15); Line(P15, P20);

    Line(Q9,  Q10);
    Line(Q10, Q11);
    Line(Q11, Q12);
    Line(Q12, Q20);
    Line(Q9,  Q13);
    Line(Q13, Q14);
    Line(Q14, Q15);
    Line(Q15, Q20);
}


void initGL() {
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glOrtho(-20, 20, -20, 20, -1, 1);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    KhoiTaoPhepChieu();
    glColor3f(1, 0, 0);
    // TrucToaDo();
    glColor3f(0, 1, 4);
    VeLapPhuong();
    glColor3f(0, 1, 4);
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(640, 640);
    glutInitWindowPosition(100, 50);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutCreateWindow("Vinh");
    initGL();
    KhoiTaoBien();
    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutSpecialFunc(keypressSpecial);
    glutMainLoop();
}
