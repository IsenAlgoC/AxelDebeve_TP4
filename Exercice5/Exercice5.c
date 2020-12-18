#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	int nbrCaractere;
	float moyenneMot;
	int nbrMot = 1;
	char Buffer[1024];
	printf("Veuillez saisir une phrase\n");
	gets_s(Buffer, (unsigned)_countof(Buffer));
	nbrCaractere = strlen(Buffer);
	printf("La phrase contient %d caracteres.\n", nbrCaractere);
	for (int i = 0; i < strlen(Buffer); i++)
	{
		if (Buffer[i] == ' ')
		{
			nbrMot++;
			nbrCaractere--;
		}

	}
	moyenneMot = nbrCaractere / nbrMot;
	printf("La moyenne de caractere par mot est : %f \n", moyenneMot);
}
