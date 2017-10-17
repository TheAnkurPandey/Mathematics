#include<stdio.h>
#include<conio.h>
void main()
{
	float a[2][4] ={ {4.0,7.0,1.0,0.0},{2.0,4.0,0.0,1.0} };
	float i,j,b,f,k;
	clrscr();
	//printf("enter the matrix");
	//for(i=0;i<2;i++)
	/*{
		for(j=0;j<4;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}*/
	printf("entered matrix is\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
//printf("entre the dimensions of matrix");
//scanf("%f",&d);
for(i=0;i<3;i++)
{
	printf("\nstep 1->\n\n");
	b=a[i][i];
	f=a[i+1][i];
	if(a[i][i]!=1.0)
	{
		for(j=0;j<4;j++)
		{
			a[i][j]/=b;
		}
	}
}
for()
{
f=a[][];
		for(j=0;j<4;j++)
		{
			a[1][j] -= (f*a[0][j]);
		}
}
	/*}
	else
	{
		f=a[1][0];
		for(j=0;j<4;j++)
		{
			a[1][j] -= (f*a[0][j]);
		}
	} */
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%f\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nstep->2\n\n");
	b=a[1][1];
	f=a[0][1];
	if(a[1][1]!=1.0)
	{
		for(j=0;j<4;j++)
		{
			a[1][j]/=b;
		}
	}
		for(j=0;j<4;j++)
		{
			a[0][j] -= (f*a[1][j]);
		}
	/*}
	else
	{
		b=a[1][1];
		f=a[0][1];
		for(j=0;j<4;j++)
		{
			a[0][j] -= (f*a[1][j]);
		}
	}*/
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
}









