#include<stdio.h>
#include<conio.h>
int main()
{
	float a[2][4] ={ {4.0,7.0,1.0,0.0},{2.0,4.0,0.0,1.0} };
	float i,j,b,f,k;
//	clrscr();
	//printf("enter the matrix");
	/*for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%f",&a[i][j]);
		}
	} */
	printf("entered matrix is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nstep 1->\n\n");
	if(a[0][0]!=1.0)
	{
		b=a[0][0];
		f=a[1][0];
		for(j=0;j<4;j++)
		{
			a[0][j]/=b;
		}
		for(j=0;j<4;j++)
		{
			a[1][j] -= (f*a[0][j]);
		}
	}
	else
	{
		b=a[0][0];
		f=a[1][0];
		for(j=0;j<4;j++)
		{
			a[1][j] -= (f*a[0][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nstep->2\n\n");
	if(a[1][1]!=1.0)
	{
		b=a[1][1];
		for(j=0;j<4;j++)
		{
			a[1][j]/=b;
		}
		f=a[0][1];
		for(j=0;j<4;j++)
		{
			a[0][j] -= (f*a[1][j]);
		}
	}
	else
	{
		b=a[1][1];
		f=a[0][1];
		for(j=0;j<4;j++)
		{
			a[0][j] -= (f*a[1][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}









