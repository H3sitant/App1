#include <stdio.h>

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
