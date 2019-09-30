#include <stdio.h>

float somation(float x);
float exposant(float x, int i);
float factoriel(int i); 
#define PI 3.1415926535

int main ()
{
	
	float x ;// valeur a calculer
	printf("Quel est le nombre en radian a calculer le sinus : \n");
	scanf ("%f",&x);
	while (x<0 || x>2*PI)
	{
		if (x<0)
		{
			x=x+2*PI;
		}else
		{
			x=x-2*PI;
		}
	}
	printf("\nLa valeur de x simplifier est : %f", x);
	printf("\nLe sinus est de : %f\n", somation(x)); 
	return 0;
}

float somation (float x)
{
	float resultat=0;
	int j = 0;
	for (int i=1 ; i<=20 ; i+=2)
	{
		resultat += (exposant(x,i)/factoriel(i))*exposant(-1,j);
		j++;
	}
	return resultat;
}

float exposant ( float x, int i)
{
	float resultat;
	
	for (int j=0; j<=i; j++)
	{
		if (j==0)
		{
			resultat = 1;
		}else{
			resultat*=x;
		}
	}
	return resultat;
}

float factoriel(int i)
{
	float resultat =1;
	for(int n=1; n<= i; n++)
	{
		resultat *=n;
	}
	return resultat;
}
