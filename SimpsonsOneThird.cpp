//Numerical Integration
//SIMPSONS ONE THIRD
#include <bits/stdc++.h>
using namespace std;

//f(x) =  1 / (1 + x^2)
float f(float x){
	float r;
	r = ( 1 / ( 1 + (x*x) ) );
	return r;
}

int main(){
	float a,b,h,integr,mo,eo,no,t;
	int n;
	
	/*printf("Enter the limits/n");
	scanf("%f%f", &a, &b);
	printf("enter the n/n");
	scanf("%f", &n);*/
	a = 0;
	b = 1;
	n = 10;
	
	h = (b-a)/n;
	printf("h = %f\n", h);
	
	printf("\n");
	
	float y[n+1];
	for(int i = 0; i < n+1; i++) {
		t = a + (i*h);
		//printf("t = %f\n", t);
		y[i] = f(t);
	}
	
	printf("\n");
	
	for(int i = 0; i < n+1; i++)
		printf("y[%d] = %f \n", i, y[i]);
	
	for(int i = 1; i < n; i++) {
		if ( i%2 == 0 )
			mo += y[i];
		else
			no += y[i];
	}
	eo = y[0] + y[n];
	integr = (  h*( eo+ (2*mo) + (4*no) )  ) /3;
	
	printf("\n");
	
	printf("Integration of [f(x) =  1 / (1 + x^2)] is:  %f", integr);
	
	return 0;
}
