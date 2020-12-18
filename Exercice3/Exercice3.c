#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

main() {
	char nom[100];
	char prenom[100];
	char c;
	printf("Veuillez saisir votre nom\n");
	scanf_s("%s", &nom, _countof(nom));

	printf("Veuillez saisir votre prenom\n");
	scanf_s("%s", &prenom, _countof(prenom));

	do {
		printf("Veuillez saisir H si vous etes un homme, F si vous etes une femme.\n");
		c = _getch();
	} while (c != 'f' && c != 'h');

	if (c == 'f') {
		printf("\nMadame %s %s", prenom, nom);
	}
	else {
		printf("\nMonsieur %s %s", prenom, nom);
	}
}