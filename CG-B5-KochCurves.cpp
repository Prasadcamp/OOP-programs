#include<iostream>
#include<graphics.h>
#include<math.h>
#include<dos.h>
using namespace std;
class kochcurve
    {
    public:
        void koch(int i,int x1,int y1,int x5,int y5)
            {
            int x4,y4,x2,y2,x3,y3;
            int dx,dy;
            if(i==0)
                {
                line(x1,y1,x5,y5);
                }
            else
                {
                delay(10);
                dx=(x5-x1)/3;
                dy=(y5-y1)/3;
                x2=x1+dx;
                y2=y1+dy;
                x3=(int)(0.5*(x1+x5)+sqrt(3)*(y1-y5)/6);
                y3=(int)(0.5*(y1+y5)+sqrt(3)*(x5-x1)/6);
                x4=2*dx+x1;
                y4=2*dy+y1;
                koch(i-1,x1,y1,x2,y2);
		        koch(i-1,x2,y2,x3,y3);
		        koch(i-1,x3,y3,x4,y4);
		        koch(i-1,x4,y4,x5,y5);
                }
            }
    };

int main()
	{
	kochcurve k;
	int i;
	cout<<"Enter the number of iterations : ";
	cin>>i;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);
	k.koch(i,200,125,100,300);
	k.koch(i,300,300,200,125);
	k.koch(i,100,300,300,300);
	delay(2500);
	getch();
	closegraph();
	return 0;
	}  
