#ifndef SelectioSort_H
#define SelectioSort_H
#include <vector>
using namespace std;
class SelectionSort
{
	//complejidad: O(n^2)

public:
	static void  swap(int& x, int& y);
	static void sort(vector<int>& a);
};
#endif // !SelectioSort_H
