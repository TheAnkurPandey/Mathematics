//Numerical Integration
//SIMPSONS THREE EIGHT
#include <bits/stdc++.h>
using namespace std;

//f(x) =  1 / (1 + x^2)
float f(float x){
	float r;
	r = ( 1 / ( 1 + (x*x) ) );
	return r;
}

int main(){
	float a, b, h, integr, mo, eo, no, t;
	int n;
	/*printf("Enter the limits/n");
	scanf("%f%f",&a,&b);
	printf("enter the n/n");
	scanf("%f",&n);*/
	a = 0;
	b = 1;
	n = 6; //n has to be multiple of 3
	
	h = (b-a)/n;
	printf("Numerical Integration \n\nh = %f \n\n",h);
	
	float y[n+1];
	for(int i = 0; i < n+1; i++)	{
		t = a + (i*h);
		//printf("\nt = %f\n", t);
		y[i] = f(t);
	}
	for(int i = 0; i < n+1; i++)
		printf("y[%d] = %f \n", i, y[i]);
	
	for(int i = 1; i < n; i++) {
		if( i%3 == 0 )
			mo += y[i];
		else
			no += y[i];
	}
	eo = y[0] + y[n];
	integr = (  3*h*( eo+ (2*mo) + (3*no) )  ) /8;
	printf("\nIntegration of [f(x) =  1 / (1 + x^2)] is:  %f", integr);
	
	return 0;
}
