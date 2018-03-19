//Numerical solution of ordinary differntial equation 
//Using EULER'S METHOD
#include<iostream>
#include <math.h> 
using namespace std;
//   dy/dx = f(x,y) = x + y
float f(float x,float y){
	return x+y;
}

int main()
{
	
	int n;
	float h, x0, xn, y0;
	
	//x[0]=0;h=0.1;x[10]=1;y[0]=1;
	/*printf("Enter the h");
	scanf("%f",&h);
	printf("Enter the x[0] ,x[n] and y[0]");
	scanf("%f%f%f",&x0, &xn, &y0);*/
	
	h = 0.1;
	x0 = 0;
	xn = 0.8;
	y0 = 1;
	
	n = ceil( (xn-x0)/h );
	float x[n], y[n];
	x[0] = x0;
	x[n] = xn;
	y[0] = y0;
	
	for(int i = 0; i <= n-1; i++)
		x[i+1] = x[i] + h;
	
	for(int i = 0; i <= n; i++)
		y[i+1] = y[i] +  h * f( x[i], y[i]);
	
	printf("Numerical solution of ordinary differntial equation using EULER'S METHOD\n\n");
	printf("Exact Solution: 2e^x - x -1\n");
	printf("X\t\tY\t\tExact solution\n");
	for(int i = 0; i <= n; i++)
		printf("%f\t%f\t%f\n", x[i], y[i], 2*exp(x[i]) - x[i] - 1 );
	
	return 0;
}
