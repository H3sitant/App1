#include <stdio.h>

int main(void)
{
	char mot[20];
	char lettre;
	char lettre_tampon;
	printf("Quel est le mot dans lequel la lettre est recherchee\n");
	gets( mot );
	printf("\nle mot est : %s", mot);
	
	printf("\nQuel est la lettre rechercher dans le mot\n");
	scanf(" %c", &lettre);
	printf("\nLa lettre est : %c", lettre);
	
	for (int i=0;i<=19;i++)
	{
		lettre_tampon = mot[i];
		if (lettre_tampon==lettre)
		{
			printf("\nLa lettre se trouve a la position %d",i+1);
		}
	}
	return 0;
}
