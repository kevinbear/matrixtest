//using one thread version
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
#define S 1000
double A[S][S], B[S][S], C[S][S];
int main()
{
	clock_t Sstart, Sfinal;
	int i, j, k, M = 0, acc = 0;
	double duration;
	/*--------initional thr array A,B-------------*/
	for (i = 0; i<1000; i++)  
	{
		for (j = 0; j<1000; j++)
		{
			A[i][j] = i + j;

			if (i == j)
				B[i][j] = 1;
			else
				B[i][j] = 0;
		}
	}
	/*---------------------------------------------*/
	puts("Please wait\nprocessing...");
	/*---------------times matrix------------------*/
	Sstart = clock();
	for (i = 0; i<S; i++)
	{
		for (j = 0; j<S; j++)
		{
			for (k = 0; k<S; k++)
			{
				M = A[i][k] * B[k][j];
				acc += M;
				if (k == S - 1)
				{
					C[i][j] = acc;
					acc = 0;
				}
			}
		}
	}
	Sfinal = clock();
	/*--------------------------------------------*/
	/*--------------count using time--------------*/
	duration = (double)1000 * (Sfinal - Sstart) / CLOCKS_PER_SEC;
	printf("Use time %3.f ms\n", duration); 
	system("pause");
	return 0;
}
