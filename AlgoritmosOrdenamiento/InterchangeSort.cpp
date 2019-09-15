#include "InterchangeSort.h"

void InterchangeSort::swap(int& x, int& y)
{
	int aux = x;
	x = y;
	y = aux;
}

void InterchangeSort::sort(vector<int>& a)
{
	int i, j;
	//se realizan n-1 pasadas
	int n = a.size();
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
}
