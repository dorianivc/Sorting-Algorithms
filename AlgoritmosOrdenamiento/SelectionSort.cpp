#include "SelectionSort.h"

void SelectionSort::swap(int& x, int& y)
{
	int aux = x;
	x = y;
	y = aux;
}

void SelectionSort::sort(vector<int>& a)
{
//indice del menor elemento en cada pasada;
	int indiceMenor;
	int i, j;
	int n = a.size();
	for (int i = 0; i < n - 1; i++) {
		//comienza la exploracion en indice i
		indiceMenor = i;
		//explora la sub lista(lista sin el indice menor)
		for (int j = i + 1; j < n; j++) {
			//actualiza menor si encuentra un elemento aun mas pequeño
			if (a[j] < a[indiceMenor]) {
				indiceMenor = j;
			}
			//cuando termina, situa el elemento mas pequeño en A[i]
			swap(a[i], a[indiceMenor]);
		}
	}
}
