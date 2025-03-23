#include "logic.h"

// type == true --> max
// type == false --> min
int get_extreme_index(int* array, int size, bool type) {
	int index = 0;

	for (int i = 1; i < size; i++)
	{
		bool condition = type ? array[i] > array[index] : array[i] < array[index];
		if (condition) {
			index = i;
		}
	}

	return index;
}

//[0 1 2 3 4 5 6 7 8 9]
// 3 2 1 4 3 2 6 4 3 2
	 	 
int calculate_product_between_extreme_elements(int* array, int size) {
	int i_max = get_extreme_index(array, size, true);
	int i_min = get_extreme_index(array, size, false);

	int product = 1;

	if (i_max > i_min) {
		int t = i_max;
		i_max = i_min;
		i_min = t;
	}

	for (int i = i_max + 1; i < i_min; i++)
	{
		product *= array[i];
	}

	return product;
}