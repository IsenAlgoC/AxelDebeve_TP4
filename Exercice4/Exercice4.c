#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char mot[20];
int i = 0;
unsigned j = 0;
int k = 0;

main() {
	printf("Veuillez entrer un mot\n");
	scanf_s("%s", mot, strlen(mot));
	for (j = 0; j < strlen(mot); j++) {
		mot[j] = tolower(mot[j]);
	}
	for (k = 0; k < strlen(mot); k++) {
		if (mot[k] == mot[strlen(mot)] - k - 1) {
			i++;
		}
	}
	if (i == strlen(mot)) {
		printf("Ce mot est un palindrome.");
	}
	else {
		printf("Ce mot n'est pas un palindrome.");
	}
}