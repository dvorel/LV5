#include"header.h"
#include<stdio.h>

int m, n, k;
float **Matrica;


int main(void) {
	do {
		printf("\nM: ");
		scanf("%d", &m);
		printf("\nN: ");
		scanf("%d", &n);
		printf("\nK: ");
		scanf("%d", &k);
	} while (m < 1 || m>16 || n < 2 || n>21 || k < 0 || k>101);		//provjera unesenih vrijednosti, ako nisu u intervalu ponavlja se "do"//

	Matrica = alokacija(m, n);
	popunjavanje(Matrica, m, n);
	novaMatrica(Matrica, k, m, n);
	ispis(Matrica, m, n);
	brisanje(Matrica, m);

	getchar();
	return 0;
}
