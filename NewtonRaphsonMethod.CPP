//Numerical solution of  Equations
//NEWTON - RAPHSON METHOD
#include <bits/stdc++.h>
using namespace std;

//f(x) = x^2 -3
float f(float x){
	return x*x - 3;
}

//f'(x) = 2*x
float d(float x){
	return 2*x;
}

int main(){
	float x1, x0, f1, d1;
	int c = 0;
	/*printf("Enter the value of x0 (Starting value of root) ");
	scanf("%f", &x0);*/
	x0 = 17;
	
	do {
		f1 = f(x0);
		d1 = d(x0);
		x1 = x0 - ( f1 / d1 ) ;

		printf("x%d = %f\n", c, x1);
		x0 = x1;
		c++;
	} while( (fabs( f(x1) )>0.001) && (c<10) );
	
	printf("\nRoot of equation f(x) = x^2 - 3 is:  %f",x1);
	
	return 0;
}
