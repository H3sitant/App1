/* Isack Breton 
 * CIP: brei0501
 * S1 GI Université de Sherbrooke
 * 
 * Hugo Binet 
 * CIP: binh2801
 * S1 GE Université de Sherbrooke
 * 
 * APP 2: Librairie de fonctionnalités
 * Introduction à la programmation et aux algorithmes
 * 
 * Présenté à Charles-Antoine Brunet, Roch Lefebvre, Domingo Palao Munoz et Jonathan Vincent
 * 
 * Sherbrooke – 02 octobre 20
 * 
 * Multiplication de matrice
 */
 #include <stdio.h>

void afficherM(int dimension, int matrice[dimension][dimension]);
int main ()
{
	int dimension;
	printf("Quel est la dimension des matrices :\n");
	scanf("%d", &dimension);
	
	int m1[dimension][dimension];
	int m2[dimension][dimension];
	int m3[dimension][dimension];
	
	for (int range=0; range<dimension; range++)
	{		
		for (int colonne=0; colonne<dimension;colonne++)
		{
			printf("\nValeur de la matrice 1 a la position: %d,%d\n", range+1, colonne+1);
			scanf("%d", &m1[range][colonne]);
		}
	}
	for (int range=0; range<dimension; range++)
	{		
		for (int colonne=0; colonne<dimension;colonne++)
		{
			printf("\nValeur de la matrice 2 a la position: %d,%d\n", range+1, colonne+1);
			scanf("%d", &m2[range][colonne]);
		}
	}
	afficherM(dimension,m1);
	afficherM(dimension,m2);
	for (int ranger=0; ranger<dimension; ranger++)
	{
		for (int colonne=0; colonne<dimension;colonne++)
		{
			m3[ranger][colonne]=0;
			for (int i=0; i<dimension; i++)
			{
				m3[ranger][colonne]+=m1[ranger][i]*m2[i][colonne];
			}
		}
	}
	afficherM(dimension,m3);
	
	return 0;  
}
void afficherM(int dimension,int matrice[dimension][dimension])
{
	printf("_______________________________________________________\n");
	for (int ranger=0; ranger<dimension; ranger++)
	{
		for (int colonne=0; colonne<dimension;colonne++)
		{
			printf("    %d", matrice[ranger][colonne]);
		}
		printf("\n");
	}
}
