//Numerical solution of equations
//REGULA - FALSI METHOD
#include <bits/stdc++.h>
using namespace std;

//f(x) = x^2 - 4
float f(float x){
	return pow(x,2) - 4;;
}
float calr(float x0, float x1){
	float x2;
	x2 = x0 - ( ( (x1-x0)*f(x0) ) / (f(x1) - f(x0) ) );
	return x2;
}

int main(){
	float x1,x2,x0;
	int c = 2;
		
	/*printf("Enter the value of x0(root is greater than x0) and x1(root is less than x1)\n");
	scanf("%f%f",&x0,&x1);*/
	x0 = 1;
	x1 = 3;
	
	do	{
		x2 = calr(x0, x1);
		printf("x%d = %f\n", c++, x2);
		if(f(x0)*f(x2)<0)
			x1=x2;
		else
			x0=x2;
	}while( fabs( f(x2) )>0.001 && c<20 );
	
	printf("\nsolution of [f(x) = x^2 - 4] is:  %f",x2);
	
	return 0;
}
