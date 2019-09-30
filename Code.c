


#include <stdio.h>
//#include <string.h>
char mot[20];
char lettre;
int main(int argc, char **argv)
{
	printf("Entre le mot voulu\n");
	scanf("%s",&mot[20]);
	printf("\nEntre la lettre recherchee dans le mot\n");
	scanf("%c", &lettre);
	printf("\nMot: %s",&mot[20]);
	printf("\nLettre: %c", lettre);
	return 0;
}

