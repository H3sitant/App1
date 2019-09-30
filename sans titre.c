#include <stdio.h>
int b=7;
int c=0;
int G=2;
int H=1;
int Allo = 0;
int calcul();
int calcul(){
	int x=b+c/(G-H);
	return x;
	}

int main(void)
{
	scanf("%d", &b);
	Allo = calcul();
	printf("Allo = %d\n",Allo);
	return 0;
}



