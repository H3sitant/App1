#include <stdio.h>

void afficherM(int dimention, int matrice[dimention][dimention]);
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
			printf("\nValeur de la matrice 1 a la position: %d,%d\n", range+1, colonne+1);
			scanf("%d", &m1[range][colonne]);
		}
	}
	for (int range=0; range<dimention; range++)
	{		
		for (int colonne=0; colonne<dimention;colonne++)
		{
			printf("\nValeur de la matrice 2 a la position: %d,%d\n", range+1, colonne+1);
			scanf("%d", &m2[range][colonne]);
		}
	}
	afficherM(dimention,m1);
	afficherM(dimention,m2);
	for (int ranger=0; ranger<dimention; ranger++)
	{
		for (int colonne=0; colonne<dimention;colonne++)
		{
			m3[ranger][colonne]=0;
			for (int i=0; i<dimention; i++)
			{
				m3[ranger][colonne]+=m1[ranger][i]*m2[i][colonne];
			}
		}
	}
	afficherM(dimention,m3);
	
	return 0;  
}
void afficherM(int dimention,int matrice[dimention][dimention])
{
	printf("_______________________________________________________\n");
	for (int ranger=0; ranger<dimention; ranger++)
	{
		for (int colonne=0; colonne<dimention;colonne++)
		{
			printf("    %d", matrice[ranger][colonne]);
		}
		printf("\n");
	}
}
