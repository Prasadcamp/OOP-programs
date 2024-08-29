                            /* C++ program to fill polygon with scan line algorithm*/
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main(void)
{

   int gd = DETECT, gm, errorcode;
   initgraph(&gd, &gm,NULL);

   float edge[3][4]={{100,10,200,300},
			         {200,300,100,250},
			         {100,250,100,10}
			        };

   int i,m,n,k;
   float intr[4];
   int c;

                    // Code to draw polygon
   for(i=0;i<4;i++)
	line(edge[i][0],edge[i][1],edge[i][2],edge[i][3]);

                   // To find Maxy and Min Y
   int ymax=edge[0][1]; 
   int ymin=edge[0][1];
   for(i=0;i<3;i++)
   {
	if(ymax<edge[i][1])
		ymax=edge[i][1];
	if(ymax<edge[i][3])
		ymax=edge[i][3];
	if(ymin>edge[i][1])
		ymin=edge[i][1];
	if(ymin>edge[i][3])
		ymin=edge[i][3];

    }


                   //Sorting of edges ie, y1<y2.
   for(i=0;i<3;i++)
    {
	if(edge[i][1]>edge[i][3])
	{
		float ty=edge[i][1];
		edge[i][1]=edge[i][3];
		edge[i][3]=ty;
		float tx=edge[i][0];
		edge[i][0]=edge[i][2];
		edge[i][2]=tx;
	}
    }

    int y;
   for(y=ymax-1;y>ymin;y--)
    {
	c=0;
	for(i=0;i<3;i++)
	{
		if(y>edge[i][1]&& y<edge[i][3])
		{
			float x= ((y-edge[i][3])*(edge[i][0]-edge[i][2]))/(edge[i][1]-edge[i][3]) + edge[i][2];
			intr[c]=x;
			c++;
		}
	}








                      //Sorting intersection points
     for(i=0;i<c;i++)
     for(int j=0;j<c;j++)
     {
	if(intr[i]>intr[j])
	{ float t=intr[i];
		intr[i]=intr[j];
		intr[j]=t;
	}
     }
     for(i=0;i<c;i=i+2)
     {
      
      setcolor(76);
      line(intr[i],y,intr[i+1],y);
     }
     delay(100);
  }

   delay(10000000);
   closegraph();
   return 0;
}

