#include <iostream>

int main()
{
	FILE * soubor = fopen("pokus.txt", "w");
	if (soubor == NULL) {
		printf("Chyba: Soubor nelze otev��t pro z�pis.\n");
		return 1;
	}

	fprintf(soubor, "Ahoj svete\n");

	if (fclose(soubor) == EOF) {
		printf("Chyba: Soubor se nepoda�ilo otev��t.\n");
		return 1;
	}

	return (0);
}

