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
		printf("\n%c",lettre);
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
