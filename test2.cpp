//matrixtest
//matrixmulitple
//compiler by visual studio
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Square 5
#pragma warning (disable:4996)
int main()
{
	int A[Square][Square], B[Square][Square],C[Square][Square];
	int i, j, k,M=0,acc=0;
	FILE*fp;
	fp = fopen("martix.txt", "w+");
	/*----------initization----------*/
	for (i = 0; i<Square; i++)
	{
		for (j = 0; j<Square; j++)
		{
			A[i][j] = i + j;
			if (i == j)
				B[i][j] = 1;
			else
				B[i][j] = 0;
		}
	}
	/*-------------------------------*/
	/*----------outputfile-----A-----*/
	fprintf(fp, "Array A=\n");
	for (i = 0; i<Square; i++)
	{
		for (j = 0; j<Square; j++)
		{
			fprintf(fp, "%d\t", A[i][j]);
			if (j == Square-1)
				fprintf(fp,"\n");
		}
	}
	fprintf(fp, "\n");
	/*-------------------------------*/
	/*----------outputfile-----B-----*/
	fprintf(fp, "Array B\n");
	for (i = 0; i<Square; i++)
	{
		for (j = 0; j<Square; j++)
		{
			fprintf(fp, "%d\t", B[i][j]);
			if (j ==Square-1)
				fprintf(fp, "\n");
		}
	}
	fprintf(fp, "\n");
	/*-------------------------------*/
	/*----------matrix times---------*/
	for (i = 0; i<Square; i++)
	{
		for (j = 0; j<Square; j++)
		{
			for (k = 0; k<Square; k++)
			{
				M= A[i][k] * B[k][j];
				acc += M;
				if (k == Square - 1)
				{
					C[i][j] = acc;
					acc = 0;
				}
			}
		}
	}
	/*-------------------------------*/
	/*----------outputfile-----C-----*/
	fprintf(fp, "Array C\n");
	for (i = 0; i<Square; i++)
	{
		for (j = 0; j<Square; j++)
		{
			fprintf(fp, "%d\t", C[i][j]);
			if (j ==Square-1)
				fprintf(fp, "\n");
		}
	}
	fprintf(fp, "\n");
	/*-------------------------------*/
	fclose(fp);
	printf("output alreadly done...\n");
	system("pause");
	return 0;
}
