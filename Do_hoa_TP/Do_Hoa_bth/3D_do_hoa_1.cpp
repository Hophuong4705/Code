#include<stdio.h>
#include<conio.h>
#include<GL/Glut.h> 
#include<math.h>
#include"dohoa3d.h"
struct Wireframe
{
  int sodinh,socanh;
  ToaDo3D dinh[50];
  int canh[100][2];
};
Wireframe a;
FILE *f;
//-----------------------------------------
void DocFile(Wireframe &a,char *FileName)
{
	FILE *f;
	f=fopen(FileName,"rt");
	fscanf(f,"%d",&a.sodinh);  
	fscanf(f,"%d",&a.socanh);  
	for(int i=1;i<=a.sodinh;i++)
	{
	  fscanf(f,"%f",&a.dinh[i].x); 
	  fscanf(f,"%f",&a.dinh[i].y); 
	  fscanf(f,"%f",&a.dinh[i].z); 
	}
	for(int i=1;i<=a.socanh;i++)
	{
	  fscanf(f,"%d",&a.canh[i][0]); 
	  fscanf(f,"%d",&a.canh[i][1]); 
	}
	fclose(f);
}

void KhoiTaoBien()
{
	D=3000;R=400;
	theta=40;phi=20;
	pc=PhoiCanh;
}

void VeWireframe(Wireframe wf)
{
  ToaDo3D d1,d2;
  for(int i=1;i<=wf.socanh;i++)
  {
    d1=wf.dinh[wf.canh[i][0]];
    d2=wf.dinh[wf.canh[i][1]];
    Line(d1,d2);
  }
}

void initGL()
{
	glClearColor(1.1f, 1.0f, 1.0f, 1.0f); 
	glOrtho(-20,20,-20,20,-1,1);	
}

void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	KhoiTaoPhepChieu();
	glColor3f(0, .0, 1.0);
	VeWireframe(a);
	glFlush();
}

int main(int argc, char** argv)
{
//	DocFile(a,"House.txt");
//	DocFile(a,"Lapphuong.txt")
//	DocFile(a,"Batdien.txt");
//	DocFile(a,"Thapnhi.txt");
//	DocFile(a,"Nhithap.txt");
	glutInit(&argc, argv);
	glutInitWindowSize(640, 640);    
	glutInitWindowPosition(100, 50); 
	
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
	glutCreateWindow("WireFrame Model"); 
    initGL();
	KhoiTaoBien();
	glutDisplayFunc(Display);
	glutIdleFunc(Display);
	glutSpecialFunc(keypressSpecial); 
	glutMainLoop(); 
}


