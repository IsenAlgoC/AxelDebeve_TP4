#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define TailleTableau 100 

int main()
{
	int ValeurAlea;
	const int MAX = 20, MIN = 1;
	srand(time(NULL));

	int Tableau[TailleTableau];
	for (int i = 0; i < TailleTableau; i++)
	{
		ValeurAlea = (rand() % (MAX - MIN + 1)) + MIN;
		Tableau[i] = ValeurAlea;
	}
	int* Curseur = &Tableau[0];
	int ValeurChoisie;
	int Compteur = 0;
	int TableauPosition[100];
	printf("Saisissez une valeur entiere entre 1 et 20\n");
	scanf_s("%d", &ValeurChoisie);
	printf("%d a ete trouve aux positions suivantes : \n", ValeurChoisie);
	for (int j = 0; j < TailleTableau; j++)
	{

		if (*(Curseur + j) == ValeurChoisie)
		{
			Compteur++;
			printf("%d\n", j);

		}

	}
	printf("\nAu total, %d a ete trouve %d fois.", ValeurChoisie, Compteur);
}