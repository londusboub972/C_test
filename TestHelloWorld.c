#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nbKayak = 0;
	int prixKayak = 8;
	int argentJoueur = 58;
	int calculKayak = 0;
//	getchar ();
    printf("Marchand dit : Bonjour Voyageur,Combien vous faut-il de Kayak ? C'est %d l'unité\n", prixKayak);
	printf("*\n**\n***\n");
	printf("''Argent acutellement Disponible : %d gold''\n",argentJoueur);
	printf("***\n**\n*\n");
	printf("Vous : Bonjour, j'en voudrais : ");
	scanf("%d", &nbKayak);
	calculKayak = argentJoueur - (prixKayak * nbKayak);
	printf("Transaction en cours");
	if (nbKayak >= 2 && calculKayak >=0)
		{
			printf("\n\n\nMarchand dit : Voici %d Kayak l'ami \n", nbKayak);
			printf("**\n*\n");
			printf("''Argent disponible aprés votre achat : %d gold''\n",calculKayak);
			printf("**\n*\n");
		}
	else if (nbKayak == 0)
		{
			printf("\n\n\nMarchand dit : Aurevoir l'ami\n");
			printf("*\n**\n");
			printf("''Argent acutellement Disponible : %d gold''\n",argentJoueur);
			printf("**\n*\n");
			return 0;
		}
	else if (calculKayak <= 0)
		{
			printf("\n\n\nVous n'avez pas assez de gold, prenez en moins !\n");
			printf("*\n**\n");
			printf("''Argent acutellement Disponible : %d gold''\n",argentJoueur);
			printf("**\n*\n");
			printf("Marchand dit : Au revoir !\n");
			return 0;
		}
	else
		{	
			printf ("\n\n\nMarchand dit : Voici un Kayak l'ami \n");
		}
	printf ("Vous : Merci ! \n");
    return 0;
}
