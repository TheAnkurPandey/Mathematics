#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	float r;
	r = x*x - 3;
	return r;
}
float d(float x)
{
	float r;
	r = 2*x;
	return r;
}

/*float regula(float x0)
{
	float x1,f1,d1;
	f1=f(x0);
	d1=d(x0);
	x1 = x0 - ( f1 / d1 ) ;
	return x1;
} */
void main()
{
	float x1,x0,f1,d1;
	int c=0;
	clrscr();
	printf("enter the value of x0");
	scanf("%f",&x0);
	do
	{
		f1=f(x0);
		d1=d(x0);
		x1 = x0 - ( f1 / d1 ) ;

		printf("x1 = %f\n",x1);
		x0=x1;
		c++;
	}while( (fabs( f(x1) )>0.001) && (c<10) );
	printf("\nsolution is %f",x1);
	getch();
}
