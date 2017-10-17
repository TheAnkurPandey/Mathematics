#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	float r;
	r=pow(x,2)-4;
	return r;
}
float calr(float x0,float x1)
{
	float x2;
	x2=x0 - ( ((x1-x0)*f(x0)) / (f(x1)-f(x0)) );
	return x2;
}
void main()
{
	float x1,x2,x0;
	clrscr();
	printf("enter the value of x0 and x1");
	scanf("%f%f",&x0,&x1);
	do
	{
		x2=calr(x0,x1);
		printf("x2 = %f\n",x2);
		if(f(x0)*f(x2)<0)
		x1=x2;
		else
		x0=x2;
	}while( fabs( f(x2) )>0.001 );
	printf("\nsolution is %f",x2);
	getch();
}







