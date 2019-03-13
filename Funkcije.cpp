#include<stdio.h>
#include<stdlib.h>
#include<time.h>

float** alokacija(int x, int y) {
	float **M = NULL;

	M = (float **)malloc(x * sizeof(float*));
	for (int i = 0; i < x; i++) {
		M[i] = (float *)malloc(y * sizeof(float));
	}

	return M;
}

void popunjavanje(float **M, int x, int y) {
	const float min = -60;
	const float num = 90;
	srand(time(NULL));

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			M[i][j] = min + ((float)rand() / RAND_MAX * num);
		}
	}
	return;
}

void novaMatrica(float **M, int koef, int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			M[i][j] *= koef;
		}
	}
	return;
}

void ispis(float **M, int x, int y) {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			printf("%.2f ", M[i][j]);
		}
		printf("\n");
	}
	return;
}

void brisanje(float **M, int x) {
	for (int i = 0; i < x; i++) {
		free(M[i]);
	}
	free(M);
	return;
}
