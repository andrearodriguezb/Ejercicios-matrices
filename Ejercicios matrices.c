#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n, i, j, k, suma;
	srand(time(NULL));
	
	printf(" 1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Diagonal\n 5. Suma triangular superior\n 6. Terminar el programa\n");
	printf("\n");
	printf("Que operacion quieres realizar?\n");
	scanf("%d", &n);
	printf("\n");
	
	if (n==1)
	{
		printf("Ingrese la longitud de la matriz:\n");
		scanf("%d", &n);
		
		printf("\n");
		
		int A[n][n], B[n][n], C[n][n];
	
	
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				A[i][j]=rand() % (9 + 1 - 1) + 1;
				B[i][j]=rand() % (9 + 1 - 1) + 1;
				printf("%d ", A[i][j]);
				printf("%d ", B[i][j]);
				printf("\n");
			}
			printf("\n");
		}
		
		for (i=0; i<n; i++)
		{
			for (j=0; j<n; j++)
			{
				C[i][j]=A[i][j]+B[i][j];
			}
		}
		
			printf("\n");
			
			printf("Suma de las matrices:\n");
			for (i=0; i<n; i++)
			{
				for (j=0; j<n; j++)
				{
					printf("%d ", C[i][j]);
				}
				printf("\n");
			}
	}

	else if (n==2)
	{
		printf("Ingrese la longitud de la matriz:\n");
		scanf("%d", &n);
		
		printf("\n");
		
		int A[n][n], B[n][n], C[n][n];
	
	
		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				A[i][j]=rand() % (9 + 1 - 1) + 1;
				B[i][j]=rand() % (9 + 1 - 1) + 1;
				printf("%d %d", A[i][j], B[i][j]);
				printf("\n");
			}
			printf("\n");
		}
		
		for (i=0; i<n; i++)
		{
			for (j=0; j<n; j++)
			{
				C[i][j]=A[i][j]-B[i][j];
			}
		}
		
			printf("\n");
			
			printf("Resta de las matrices:\n");
			for (i=0; i<n; i++)
			{
				for (j=0; j<n; j++)
				{
					printf("%d ", C[i][j]);
				}
				printf("\n");
			}
	}
	
	else if(n==3)
	{
		srand(time(NULL));
	printf("Ingrese la longitud de la matriz:\n");
	scanf("%d", &n);
	
	int A[n][n], B[n][n], C[n][n];
	
	printf("Matriz A:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			A[i][j]=rand() % (9 + 1 - 1) +1;
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz B:\n");

	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			B[i][j]=rand() % (9 + 1 - 1) +1;	
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
	printf("Matriz C:\n");

	int temporal;
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
			temporal=0;
			for (k=0; k<n; k++);
			{
				temporal += A[i][k] * B[k][j];
			}
			C[i][j] = temporal;
			printf("%d", C[i][j]);
		}
		printf("\n");
	}

	}
	
	else if(n==4)
	{
		printf("Ingrese la longitud de la matriz:\n");
		scanf("%d", &n);
		
		int A[n][n];
		printf("Matriz\n");

		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				A[i][j]=rand() % (9 + 1 - 1) + 1;
				printf("%d ", A[i][j]);
				if(i==j)
				{
					suma+=A[i][j];
				}
			}
			printf("\n");	
		}printf("\nLa suma de la diagonal principal es: %d", suma);
	}
	
	else if(n==5)
	{
		printf("Ingrese la longitud de la matriz:\n");
		scanf("%d", &n);
		
		int A[n][n];
		printf("Matriz\n");

		for(i=0; i<n; i++)
		{
			for(j=0; j<n; j++)
			{
				A[i][j]=rand() % (9 + 1 - 1) + 1;
				printf("%d ", A[i][j]);
				if(j==i+1)
				{
					suma+=A[i][j];
				}
			}
			printf("\n");	
		}printf("\nLa suma triangular superior es: %d", suma);	
	}
	
	else if(n==6)
	{
		printf("Fin :)");
	}
	
	

	return 0;
}
