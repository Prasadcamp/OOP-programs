#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>

int form(float a1,float b1,float a2,float b2)
	{
	float step,da,db,a,b;
		da=(a2-a1);
		db=(b2-b1);
		if(da>db)
			{
			step=da;
			}
		else{
			step=db;
			}		
		da=(da/step);
		db=(db/step);
	a=a1;//+0.5*signbit(da);
	b=b1;//+0.5*signbit(db);	
	int i=1;
	while(i<=step)
		{
		putpixel(a,b,5);
		a+=da;
		b+=db;
		i+=1;
		delay(10);
		}
	return 0;	
	}
	
class Pixel   //base class
	{
    protected: int xco,yco,color;
    public:
    Pixel()
        {
        xco=0;yco=0;color=15;
        }
    void setCoordinate(int x,int y)
        {  
        xco=x;
        yco=y;
        }  
    void setColor(int c)  
        {  
        color=c;
        }
    void drawCircle(int xc, int yc, int x, int y)
        {
       	putpixel(xc+x, yc+y, RED);
    	putpixel(xc-x, yc+y, RED);
 	 	putpixel(xc+x, yc-y, RED);
        putpixel(xc-x, yc-y, RED);
		putpixel(xc+y, yc+x, RED);
		putpixel(xc-y, yc+x, RED);
		putpixel(xc+y, yc-x, RED);
		putpixel(xc-y, yc-x, RED);
		delay(100);
        }
};

class DrawBresCircle:public Pixel
    {
    private:int radius;
    public:
    DrawBresCircle()
        {
         radius=0;
        }
    void circleBres(int xc,int yc,int r); //Bresenham's Logic
    };

void DrawBresCircle::circleBres(int xc,int yc,int r)
    {
    int x=0, y=r;
    int d=3-2*r;
   	while(x<y)
		{
		Pixel::drawCircle(xc,yc,x,y);
		x++;
		if(d<0)
			d=d+4*x+6;
		else
			{		
			d=d+4*(x-y)+10;
            y--;
			}
		}
    } 

int main()
    {
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"c:\\tc\\bgi");
	form(100,200,300,200);
	form(300,200,300,350);
	form(100,350,300,350);
	form(100,200,100,350);
	form(200,200,300,275);
	form(300,275,200,350);
	form(100,275,200,350);
	form(200,200,100,275);
	delay(1000);
	
	int xc,yc,r;
    Pixel px;
    DrawBresCircle dsb;
    px.setCoordinate(200,200);
    px.setColor(GREEN);
    xc=200;
    yc=275;
    r=61;
    dsb.circleBres(xc,yc,r);
    delay(10000);
	closegraph();
	return 0;		
	}
