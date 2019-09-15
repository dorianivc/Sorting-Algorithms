#include "BubbleSort.h"

void BubbleSort::sort(vector<int>& a)
{
	int i, j;
	int indiceIntercambio;
	int n = a.size();
	//i es el indice del ultimo elemento de la sublista
	i = n - 1;
	// el proceso continua hasta que no haya intercambios
	while (i > 0) {
		//se inicializa IndiceIntercambio a 0;
		indiceIntercambio = 0;

		//explorar la sublista a[0] a a[i]
		for (j = 0; j < i; j++) {
			//intercambiar pareja y actualizar IndiceIntercambio
			if (a[j + 1] < a[j]) {
				swap(a[j], a[j + 1]);
				indiceIntercambio = j;
			}
			//i se pone al valor indice del ultimo intercambio
			//continua ordenacion de la sublista a[0] a a[i]
			
		}
		i = indiceIntercambio;
	}
}

void BubbleSort::swap(int& x, int& y)
{
	int aux = x;
	x = y;
	y = aux;
}
