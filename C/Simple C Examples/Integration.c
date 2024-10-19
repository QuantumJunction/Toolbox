#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define EULER  2.718281828459045235

typedef enum{
	eFUNCTION_X,
	eFUNCTION_X_POWER_2,
	eFUNCTION_X_POWER_4,
	eFUNCTION_DIVISION_X_PLUS_1,
	eFUNCTION_SIN_X,
	eFUNCTION_E_FUNCTION,
	eFUNCTION_X_POWER_X,
	eFUCNTION_LAST_DUMMY
} eFUNCTION_TYPE;

void Output();
void Integration(double Interval);
double Functionvalue(eFUNCTION_TYPE eFunctionType,double x);

double Results[6][eFUCNTION_LAST_DUMMY]={0};
int ns[7]				= { 2, 6, 8, 90, 288, 840 };
int matrix[6][eFUCNTION_LAST_DUMMY]		= {{1,1},{1,4,1},{1, 3, 3, 1},{7,32,12,32,7},{ 19,75,50,50,75,19},{41,216,27,272,27,216,41}};

int main ()
{
	Integration(1);
    Output();
	Integration(100);
	Output();

	return 0;
}

void Output()
{
	int Function;
	int i;
	double hv1,hv2,hv3;

	printf( " 1           2          3         4            5         6 \n" );
	printf( "\n" );
	for( Function = 0; Function < eFUCNTION_LAST_DUMMY; Function++ )
	{
		for( i = 0; i <6; i++ )
		{
		        hv1=(int)Results[i][Function];
		        hv2=(int)(((Results[i][Function])-hv1)*100000);
		        if(hv2!=0)
                {
                    printf("%lg,%lg   ",hv1,hv2);
                }
                else
                {
                   printf("%lg,00000   ",hv1);
                }

				Results[i][Function]  = 0.0;
		}
		printf( "\n" );
	}
	printf( "\n\n\n" );
}

void Integration(double Interval)
{
	int Function, n, i, k;
	double Sum,Intervall,a,b;

    Intervall = 2.0/Interval;

	for(Function=0;Function<8;Function++)
	{
		for(n=0;n<6;n++)
		{
			for(k=0;k<Interval;k++)
			{
				b=(k+1)*Intervall;
				a=k*Intervall;
				for(i=0;i<n+2;i++)
				{
					Sum += Functionvalue(Function,(a+i*(Intervall/(n+1)))) * matrix[n][i];
				}
				Results[n][Function]+=Sum*((b-a)/ns[n]);
				Sum = 0;
			}
		}
	}
}

double Functionvalue(eFUNCTION_TYPE eFunctionType,double x)
{
	switch(eFunctionType){
		case eFUNCTION_X:
			return (1*x);
		case eFUNCTION_X_POWER_2:
			return (x*x);
		case eFUNCTION_X_POWER_4:
			return (x*x*x*x);
		case eFUNCTION_DIVISION_X_PLUS_1:
			return (1/(x+1));
		case eFUNCTION_SIN_X:
			return (sin(x));
		case eFUNCTION_E_FUNCTION:
			return (pow(EULER,x));
		case eFUNCTION_X_POWER_X:
			return (pow(x,x));
		default: 
			return 0.0;
	
	};
	
	return 0.0;
}

