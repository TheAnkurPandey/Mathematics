#include<stdio.h>
#include<conio.h>

float f(float x)
{
	float r;
	r = ( 1 / ( 1 + (x*x) ) );
	return r;
}
/*void main()
{
float r,x,a=0,
clrscr();
getch();
}*/
void main()
{
	float a,b,h,integr,mo,eo,no,t,n,i,y[30];
	//int j;
	clrscr();
	printf("enter the limit/n");
	scanf("%f%f",&a,&b);
	printf("enter the n/n");
	scanf("%f",&n);
	h = (b-a)/n;
	printf("%f",h);
	for(i=0;i<n+1;i++)
	{
		t = a + (i*h);
		printf("\nt = %f\n",t);
		y[i]=f(t);
	}
	for(i=0;i<n+1;i++)
	{
	printf("\ny[%f] = %f \n",i,y[i]);
	}
	for(i=1;i<n;i++)
	{
		if(i%3==0)
		mo+=y[i];
		else
		no+=y[i];
	}
	eo= y[0]+y[n];
	integr = (  3*h*( eo+ (2*mo) + (3*no) )  ) /8;
	printf("integration is %f",integr);
	getch();
}