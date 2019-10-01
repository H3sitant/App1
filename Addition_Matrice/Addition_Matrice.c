#include <stdio.h>

void afficherM(int dimensionx,int dimensiony, int matrice[dimensionx][dimensiony]);

int main ()
{
	/*int m1[3][2]={{1,2},{3,4},{5,6}};
	int m2[3][2]={{6,5},{4,3},{2,1}};
	int m3[3][2];*/
	int dimensionx;
	int dimensiony;
	printf("Quel est le nombre de ranger des matrices :\n");
	scanf("%d", &dimensionx);
	printf("Quel est le nombre de colonne des matrices :\n");
	scanf("%d", &dimensiony);
	
	int m1[dimensionx][dimensiony];
	int m2[dimensionx][dimensiony];
	int m3[dimensionx][dimensiony];
	
	for (int range=0; range<dimensionx; range++)
	{		
		for (int colonne=0; colonne<dimensiony;colonne++)
		{
			printf("\nQuel est la valeur de la matrice 1 a la position range %d, colonne %d\n", range+1, colonne+1);
			scanf("%d", &m1[range][colonne]);
		}
	}
	for (int range=0; range<dimensionx; range++)
	{		
		for (int colonne=0; colonne<dimensiony;colonne++)
		{
			printf("\nQuel est la valeur de la matrice 2 a la position range %d, colonne %d\n", range+1, colonne+1);
			scanf("%d", &m2[range][colonne]);
		}
	}
	for (int range=0; range<dimensionx; range++)
	{
		for (int colonne=0; colonne<dimensiony;colonne++)
		{
			m3[range][colonne]=m1[range][colonne]+m2[range][colonne];
		}
	}
	/*for (int range=0; range<3; range++)
	{
		for (int colonne=0; colonne<2;colonne++)
		{
			m3[range][colonne]=m1[range][colonne]+m2[range][colonne];
			printf("matrice 3(%d,%d)=matrice 1(%d,%d)+matrice 2(%d,%d)\n",range,colonne,range,colonne,range,colonne);
		}
	}
	afficherM(3,2,m1);
	afficherM(3,2,m2);
	afficherM(3,2,m3);*/
	afficherM(dimensionx,dimensiony,m1);
	afficherM(dimensionx,dimensiony,m2);
	afficherM(dimensionx,dimensiony,m3);
	return 0;  
}
void afficherM(int dimensionx,int dimensiony,int matrice[dimensionx][dimensiony])
{
	printf("_______________________________________________________\n");
	for (int ranger=0; ranger<dimensionx; ranger++)
	{
		for (int colonne=0; colonne<dimensiony;colonne++)
		{
			printf("    %d", matrice[ranger][colonne]);
		}
		printf("\n");
	}
}
