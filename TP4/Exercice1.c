#include <stdlib.h>
#include <stdio.h>
#include "tp4.h"

main() {
	HEURE HeureDebut = { 12,30 };
	HEURE HeureFin;
	HEURE Duree = { 0,45 };
	int i = 0;

	HeureFin.heure = HeureDebut.heure + Duree.heure;
	HeureFin.minute = HeureDebut.minute + Duree.minute;

	if (HeureFin.minute > 59) {
		HeureFin.minute %= 60;
		HeureFin.heure++;
	}

	printf("\nHeureFin = %d:%d \n", HeureFin.heure, HeureFin.minute);
}