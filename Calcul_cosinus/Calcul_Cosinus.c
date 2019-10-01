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
 * Calcul de cosinus à l'aide de série
 */
 #include <stdio.h>

float cosinus(float x);
float exposant(float x, int i);
float factoriel(int i); 
#define PI 3.1415926535

int main ()
{
	
	float x ;// valeur a calculer
	printf("Quel est le nombre en radian a calculer le cosinus : \n");
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
	printf("\nLe cosinus est de : %f\n", cosinus(x)); 
	return 0;
}

float cosinus (float x)
{
	float resultat=0;
	int j = 0;
	for (int i=0 ; i<=40 ; i+=2)
	{
		if(i==0)
		{
			resultat=1;
		}else
		{
			resultat += (exposant(x,i)/factoriel(i))*exposant(-1,j);
		}
		j++;
		//printf("\ntest1 : %f ",resultat);
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
	//printf("\ntest2 : %f ",resultat);
	return resultat;
}

float factoriel(int i)
{
	float resultat =1;
	if (i!=0)
	{
		for(int n=1; n<= i; n++)
		{
			resultat *=n;
		}
	}
	
	return resultat;
}

