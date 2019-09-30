#include <stdio.h>

int main ()
{
	int dimention;
	printf("Quel est la dimention des matrices :\n");
	scanf("%d", &dimention);
	
	int m1[dimention][dimention];
	int m2[dimention][dimention];
	int m3[dimention][dimention];
	
	for (int range=0; range<dimention; range++)
	{		
		for (int colonne=0; colonne<dimention;colonne++)
		{
			printf("\nQuel est la valeur de la matrice 1 a la position range %d, colonne %d\n", range+1, colonne+1);
			scanf("%d", &m1[range][colonne]);
		}
	}
	for (int range=0; range<dimention; range++)
	{		
		for (int colonne=0; colonne<dimention;colonne++)
		{
			printf("\nQuel est la valeur de la matrice 2 a la position range %d, colonne %d\n", range+1, colonne+1);
			scanf("%d", &m2[range][colonne]);
		}
	}
	printf("_______________________________________________________\n");
	for (int colonne=0; colonne<dimention; colonne++)
	{
		for (int range=0; range<dimention;range++)
		{
			printf("    %d", m1[colonne][range]);
		}
		printf("\n");
	}
	
	printf("_______________________________________________________\n");
	for (int colonne=0; colonne<dimention; colonne++)
	{
		for (int range=0; range<dimention;range++)
		{
			printf("    %d", m2[colonne][range]);
		}
		printf("\n");
	}
	
	printf("_______________________________________________________\n");
	for (int colonne=0; colonne<dimention; colonne++)
	{
		for (int range=0; range<dimention;range++)
		{
			m3[colonne][range]=0;
			for (int i=0; i<dimention; i++)
			{
				m3[colonne][range]+=m1[i][range]*m2[colonne][i];
			}
			printf("    %d", m3[colonne][range]);
		}
		printf("\n");
	}
	
	return 0;  
}
