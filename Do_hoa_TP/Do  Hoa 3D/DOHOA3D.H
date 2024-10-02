#ifndef DoHoa3D_h
#define DoHoa3D_h
#define khoang 5
#include<math.h>
struct ToaDo3D
{
	float x,y,z;
};

enum PhepChieu{PhoiCanh,SongSong};
float R,theta,phi,D;
float aux1,aux2,aux3,aux4 ;
float aux5,aux6,aux7,aux8 ;

ToaDo3D Obs;
PhepChieu pc;
float Xproj,Yproj;

void KhoiTaoPhepChieu()
{
   float th,ph;
   th = M_PI*theta/180;
   ph = M_PI*phi/180;
   aux1 = sin(th);
   aux2 = sin(ph);
   aux3 = cos(th);
   aux4 = cos(ph);
   aux5 = aux3*aux2;
   aux6 = aux1*aux2;
   aux7 = aux3*aux4;
   aux8 = aux1*aux4;
}

void  Chieu(ToaDo3D P)
{
   Obs.x = -P.x*aux1 + P.y*aux3 ;
   Obs.y = -P.x*aux5 - P.y*aux6 + P.z*aux4  ;
   if( pc== PhoiCanh)
   {
       Obs.z =-P.x*aux7 - P.y*aux8 - P.z*aux2 + R ;
       Xproj = D*Obs.x/Obs.z;
       Yproj = D*Obs.y/Obs.z;
   }
   else
   {
	  Xproj = D*Obs.x;
	  Yproj = D*Obs.y;
   }
}

void Line(ToaDo3D A,ToaDo3D B)
{
   Chieu(A);
   float x1 = Xproj;
   float y1 = Yproj;
   Chieu(B);
   float x2 = Xproj;
   float y2 = Yproj;
   glBegin(GL_LINES) ; 
	glVertex2f (x1,y1) ;
	glVertex2f (x2,y2) ; 
   glEnd();	
}

void TrucToaDo()
{
   ToaDo3D OO,XX,YY,ZZ;
   OO.x=0;     OO.y=0;     OO.z=0;
   XX.x=2;    XX.y=0;     XX.z=0;
   YY.x=0;     YY.y=2;    YY.z=0;
   ZZ.x=0;     ZZ.y=0;     ZZ.z=2;
   Line(OO,XX); 
   Line(OO,YY); 
   Line(OO,ZZ); 
}

void keypressSpecial(int key, int x, int y)
{
    if (key == GLUT_KEY_UP) phi = phi + khoang;     //Phim mui ten di len
    if (key == GLUT_KEY_DOWN) phi = phi - khoang; //Phim mui ten di xuong
    if (key == GLUT_KEY_RIGHT) theta = theta + khoang; //Phim mui ten sang phai
    if (key == GLUT_KEY_LEFT) theta = theta - khoang; //Phim mui ten sang trai
}
#endif
