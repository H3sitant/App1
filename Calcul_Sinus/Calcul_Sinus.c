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
 * Calcul de sinus à l'aide de série
 */
 #include <stdio.h>

float sinus(float x);
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
	printf("\nLe sinus est de : %f\n", sinus(x)); 
	/*printf("\nLe sinus de 1 est de : %f\n", somation(1)); 
	printf("\nLe sinus de 0 est de : %f\n", somation(0)); 
	printf("\nLe sinus de PI/4 est de : %f\n", somation(PI/4)); 
	printf("\nLe sinus est PI/2 de : %f\n", somation(PI/2)); */
	return 0;
}

float sinus (float x)
{
	float resultat=0;
	int j = 0;

	for (int i=1 ; i<=20 ; i+=2)
	{
		resultat += (exposant(x,i)/factoriel(i))*exposant(-1,j);
		//("Calcul sommation : %f", resultat);
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
	//printf("\nCalcul  expodentiel pour x = %f et exposant = %d : %f\n", x,i, resultat); 
	return resultat;
}

float factoriel(int i)
{
	float resultat =1;
	for(int n=1; n<= i; n++)
	{
		resultat *=n;
	}
	//printf("\nCalcul  de la factoriel de %d : %f",i,resultat);
	return resultat;
}
