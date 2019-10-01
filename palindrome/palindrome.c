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
 * Vérification de palindrome
 */
 #include <stdio.h>

char mot[20];
char lettre;
int main ()
{
	printf("Entrez le mot a verifier le palindrome : \n");
	gets( mot );
	printf("\nLe mot est : %s", mot);
	int i=0;
	do
	{
		lettre=mot[i];
		//printf("\n%c",lettre);
		i++;
	}while(i<=19 && lettre !='\0');
	i=i-2;
	int palyndrome=1;
	for (int j=0; j<=i && palyndrome==1; j++)
	{
		if(mot[j]!=mot[i-j])
		{
			printf("\nLe mots n'est pas un palyndrome");
			palyndrome=0;
		}
	}
	if (palyndrome==1)
	printf("\nLe mots est un palyndrome");
	return 0;
}
