#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<dos.h>
using namespace std;
class polygon
    {
	public:
		int x[10],y[10];
		int min_y,max_y,y_val;
		int n,i;
		int cnt;
		float m[20],xint[200];
		void draw_poly();
		void scanline();
    };

void polygon::draw_poly()
    {
	cout<<"\nEnter no of vertices : ";
	cin>>n;
	if(n<3)
	    {
		cout<<"\nError";
		exit(0);
	    }
	else
	    {
		for(i=0;i<n;i++)
		    {
		    cout<<"Enter coordinates (x,y) :-";
		    cout<<"\nLINE "<<i+1<<endl;
			cin>>x[i];
			cin>>y[i];
		    }
		    x[n]=x[0];
		    y[n]=y[0];
		for(i=0;i<n;i++)
		    {
			line(x[i],y[i],x[i+1],y[i+1]);
		    }
		cleardevice();
	    }
    }

void polygon::scanline()
    {
	draw_poly();
	setcolor(BLUE);
	min_y=480;
	max_y=0;
	for(i=0;i<n;i++)
	    {
		if(min_y >= y[i])
			min_y=y[i];
		if(y[i]>= max_y)
			max_y=y[i];
		int dx=x[i+1]-x[i];
		int dy=y[i+1]-y[i];
		if(dx==0)
		    {
			m[i]=0;
		    }
		else if(dy==0)
		       {
			m[i]=1;
		    }
		else
		    {
			m[i]=(dy/dx);
		    }
	    }
	
	for(y_val=max_y;y_val>=min_y;y_val--)
	    {
		cnt=0;
		for(i=0;i<n;i++)
		    {
			if((y[i]>y_val && y[i+1]<=y_val) || (y[i]<=y_val && y[i+1]>y_val))
			    {
				xint[cnt]=x[i]+((y_val-y[i])*m[i]);
				cnt++;
			    }
		    }
		for(int k=0;k<cnt-1;k=k+2)
		    {
			line(xint[k],y_val,xint[k+1],y_val);
			delay(50);
		    }
	    }
	    delay(2500);
    }

int main()
{
	int gd,gm;
	int new_color,x,y,ch;
	gd=DETECT;
	initgraph(&gd,&gm,NULL);
	polygon p;
	p.scanline();
	closegraph();
	return 0;
}
