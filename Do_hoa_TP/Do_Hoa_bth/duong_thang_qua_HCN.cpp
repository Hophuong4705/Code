#include<GL/glut.h>
#include<math.h>
using namespace std;

 

float xmin=20;    // Bien luu toa do 4 dinh hinh chu nhat
float ymin=20;
float xmax=200;
float ymax=150;
float xdA=10,ydA=10,xdB=250,ydB=200; // Bien luu toa do diem A va B

 


void initGL(void)
{
    glClearColor(1,1,1,0);
    gluOrtho2D(0,320,0,240);
}

 

// Ve hinh chu nhat va doan thang
void display()
{
   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(0.0,1.0,0.0);
   glBegin(GL_LINE_LOOP); //Ve hinh vuong
           glVertex2i(xmin,ymin);
           glVertex2i(xmin,ymax);
           glVertex2i(xmax,ymax);
           glVertex2i(xmax,ymin);
   glEnd();
   
   glColor3f(1.0,0.0,0.0);
   glBegin(GL_LINES);  //Ve duong thang
           glVertex2i(xdA,ydA);
           glVertex2i(xdB,ydB);
   glEnd();

 

   glFlush();
}

 

int Code(float x,float y)  //Tinh Code cua diem
{
    int c=0;
    if(y>ymax)c=c|8;
    if(y<ymin)c=c|4;
    if(x>xmax)c=c|2;
    if(x<xmin)c=c|1;
    return c;
}

 

void Cohen(float xA,float yA,float xB,float yB)
{
    int cA=Code(xA,yA); // Code cua diem A
    int cB=Code(xB,yB); // Code cua diem B
    float m=(yB-yA)/(xB-xA);
    
    while((cA|cB)>0)  
    {
        //Truong Hop 1: Diem A va B nam ngoai hcn
        if((cA & cB)!=0){exit(0);} 

 

        //Truong hop 2: diem A hoac B nam trong cua so
        //Hoan doi A voi B
        float xi=xA;float yi=yA;  // Lay toa do diem A
        int c=cA;  
        if(c==0){c=cB;xi=xB;yi=yB;}  
        // Truong hop 3
        // Tinh toa do cat voi cac canh hinh chu nhat
        float x,y;
        if((c & 8)){y=ymax;x=xi+ 1.0/m*(ymax-yi);}
        else if((c & 4)){y=ymin;x=xi+1.0/m*(ymin-yi);}
               else if((c & 2)){x=xmax;y=yi+m*(xmax-xi);}
                     else if((c & 1)){x=xmin;y=yi+m*(xmin-xi);}
    
        //Cap nhat lai toa do diem A va B de ve lai doan thang
        //T?nh ma diem A va B
        if(c==cA){ xdA=x; ydA=y;  cA=Code(xdA,ydA); }   
        if(c==cB){ xdB=x; ydB=y;  cB=Code(xdB,ydB); }  
    }
    // Ve lai hinh chu nhat v? doan thang da cat xen
    display();
}

 

void mykey(unsigned char key,int x,int y)
{
//    if(key=='c')//Nhan phim c de xen (ve lai doan thang)
//    { 
        Cohen(xdA,ydA,xdB,ydB);
        glFlush();
//    }
}

 

int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(0,0);
    glutCreateWindow("XET DOAN THANG VAO HCN: Cohen - Sutherland");
    glutDisplayFunc(display);
    glutKeyboardFunc(mykey); //goi ham xu ly xu kien nhan phim
    initGL();
    glutMainLoop();
    return 0;
}

