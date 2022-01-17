#include <iostream>

int main()
{
	FILE * soubor = fopen("pokus.txt", "w");
	if (soubor == NULL) {
		printf("Chyba: Soubor nelze otevøít pro zápis.\n");
		return 1;
	}

	fprintf(soubor, "Ahoj svete\n");

	if (fclose(soubor) == EOF) {
		printf("Chyba: Soubor se nepodaøilo otevøít.\n");
		return 1;
	}

	return (0);
}

