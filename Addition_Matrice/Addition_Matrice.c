#include <stdio.h>

void afficherM(int dimentionx,int dimentiony, int matrice[dimentionx][dimentiony]);

int main ()
{
	int m1[3][2]={{1,2},{3,4},{5,6}};
	int m2[3][2]={{6,5},{4,3},{2,1}};
	int m3[3][2];
	/*int dimentionx;
	int dimentiony;
	printf("Quel est le nombre de ranger des matrices :\n");
	scanf("%d", &dimentionx);
	printf("Quel est le nombre de colonne des matrices :\n");
	scanf("%d", &dimentiony);
	
	int m1[dimentionx][dimentiony];
	int m2[dimentionx][dimentiony];
	int m3[dimentionx][dimentiony];
	
	for (int range=0; range<dimentionx; range++)
	{		
		for (int colonne=0; colonne<dimentiony;colonne++)
		{
			printf("\nQuel est la valeur de la matrice 1 a la position range %d, colonne %d\n", range+1, colonne+1);
			scanf("%d", &m1[range][colonne]);
		}
	}
	for (int range=0; range<dimentionx; range++)
	{		
		for (int colonne=0; colonne<dimentiony;colonne++)
		{
			printf("\nQuel est la valeur de la matrice 2 a la position range %d, colonne %d\n", range+1, colonne+1);
			scanf("%d", &m2[range][colonne]);
		}
	}
	for (int range=0; range<dimentionx; range++)
	{
		for (int colonne=0; colonne<dimentiony;colonne++)
		{
			m3[range][colonne]=m1[range][colonne]+m2[range][colonne];
		}
	}*/
	for (int range=0; range<3; range++)
	{
		for (int colonne=0; colonne<2;colonne++)
		{
			m3[range][colonne]=m1[range][colonne]+m2[range][colonne];
		}
	}
	afficherM(3,2,m1);
	afficherM(3,2,m2);
	afficherM(3,2,m3);
	//afficherM(dimentionx,dimentiony,m1);
	//afficherM(dimentionx,dimentiony,m2);
	//afficherM(dimentionx,dimentiony,m3);
	return 0;  
}
void afficherM(int dimentionx,int dimentiony,int matrice[dimentionx][dimentiony])
{
	printf("_______________________________________________________\n");
	for (int ranger=0; ranger<dimentionx; ranger++)
	{
		for (int colonne=0; colonne<dimentiony;colonne++)
		{
			printf("    %d", matrice[ranger][colonne]);
		}
		printf("\n");
	}
}
