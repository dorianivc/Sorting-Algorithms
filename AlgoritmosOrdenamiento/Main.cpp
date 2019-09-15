#include <iostream>
#include <sstream>
#include <time.h>
#include "InterchangeSort.h"
#include "InsertionSort.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
using namespace std;

int main() {
	//VARIABLES DE MEDICION DE PERFORMANCE
	clock_t start_time;
	clock_t final_time;
	double total_time;
	//VARIABLES DE MEDICION DE PERFORMANCE
	srand(time(NULL));
	vector<int> vectorEntrante;
	for (int i = 0; i < 100; i++) {
		vectorEntrante.push_back(rand());
		cout << "Posicion # " << i+1 << " del vector desordenado: " << vectorEntrante[i] << endl;
	}

	start_time = clock();
	BubbleSort::sort(vectorEntrante);
	for (int i = 0; i < 100; i++) {
		cout << "Posicion # " << i + 1 << " del vector ordenado: " << vectorEntrante[i] << endl;
	}

	final_time = clock();
	total_time = ((double)(final_time - start_time)) / CLOCKS_PER_SEC;

	printf("Tiempo de ejecucion : %lf segundos \n", total_time);
	return 0;
}
