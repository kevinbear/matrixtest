//matrixtest
//matrixmulitple
//compiler by visual studio
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Square 5
{
	int A[Square][Square]={{1,2,3,4,5},
						             {1,2,3,4,5},
						             {1,2,3,4,5},
						             {1,2,3,4,5},
						             {1,2,3,4,5}};
	int B[Square][Square]={{1,0,0,0,0},
						             {0,1,0,0,0},
						             {0,0,1,0,0},
						             {0,0,0,1,0},
						             {0,0,0,0,1}};
	int C[Square][Square]={{0,0,0,0,0},
						             {0,0,0,0,0},
						             {0,0,0,0,0},
						             {0,0,0,0,0},
						             {0,0,0,0,0}};
	int i, j, k;
	FILE*fp;
	fp = fopen("martix.txt", "w+");
	/*----------times test----------*/
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
