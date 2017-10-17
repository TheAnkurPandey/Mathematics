#include<stdio.h>
#include<conio.h>
float f(float x,float y)
{
	float r;
	r=x+y;
	return r;
}
void main()
{
	float x[30],y[30],h=0.1,i;
	//x[0]=0;h=0.1;x[10]=1;y[0]=1;
	clrscr();

	printf("enter the x[0] ,x[n] and y[0]");
	scanf("%f%f%f",&x[0],&x[10],&y[0]);
	printf("enter the h");
	scanf("%f",&h);
	//printf("");
	//scanf("");
	//n=(xn-x0)/h;
	for(i=0;i<9;i++)
	{
		x[i+1]=x[i]+h;
	}
	for(i=0;i<10;i++)
	{
		y[i+1]=y[i]+h*f(x[i],y[i]);
	}
	for(i=0;i<11;i++)
	{
		printf("x = %f\ty = %f\n",x[i],y[i]);
	}
	/*for(i=0;i<11;i++)
	{
		printf("%f\n",x[i]);
	}*/

	getch();
}