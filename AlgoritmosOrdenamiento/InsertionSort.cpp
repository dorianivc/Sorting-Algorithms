#include "InsertionSort.h"
void InsertionSort::sort(vector<int>& a)
{
	int i, j;
	int aux;
	//i identifica sublista a[0] a a[i]
	int n = a.size();
	for ( i = 1; i < n; i++) {
		//indice , j explora la lista desde a[i] buscando la posicion correcta del elemento destino
		//lo asigna a a[j]
		j = i;
		aux = a[i];
		//se localiza el punto de insercion explorando hacia abajo mientras que aux < a[j-1] 
		//y no se haya encontrando el principio de la lista
		while (j > 0 && aux < a[j - 1]) {
			//desplazar los elementos hacia arriba para hacer espacion para insercion
			a[j] = a[j - 1];
			j--;
		}
		a[j] = aux;
	}

}
