#include <stdlib.h>
#include <stdio.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

main() {
	int MyTab1[TAILLETAB1];
	int i;
	int j;
	for (i = 0; i < TAILLETAB1; i++) {
		MyTab1[i] = i + 1;
		printf("%d %c", MyTab1[i], SEPARATEUR);
	}
	printf("\n");
	int* myPtr;
	for (j = TAILLETAB1 - 1; j >= 0; j--) {
		myPtr = &MyTab1[j];
		printf("%d %c", *myPtr, SEPARATEUR);
	}
}
