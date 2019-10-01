#include <stdio.h>
 void recherche_position (char *mot,char lettre);
int main(void)
{
	//char mot[];
	//char lettre;
	//printf("Quel est le mot dans lequel la lettre est recherchee\n");
	//gets( mot );
	//printf("\nQuel est la lettre rechercher dans le mot\n");
	//scanf(" %c", &lettre);
	recherche_position("anticonstitutionnellement",'i');
	recherche_position("bonjour",'e');
	recherche_position("bonjour",'r');
	recherche_position("allocommentcava",'a');
	return 0;
}

void recherche_position (char *mot,char lettre)
{
	char lettre_tampon;
	int i=0;
	printf("\nle mot est : %s", mot);
	printf("\nLa lettre est : %c", lettre);
	do
	{
		lettre_tampon= mot[i];
		printf("\n%c comparee avec la %d ieme lettre soit : %c\n",lettre , i, lettre_tampon);
		i++;
	}
	while(lettre_tampon != '\0' && lettre_tampon != lettre);
	if(lettre_tampon == '\0')
	{
		printf("\nLa lettre n'est pas dans le mots : -1");
	}else 
	{
		printf("\nLa lettre est dans le mots a la position : %d",i-1);
	}
}
