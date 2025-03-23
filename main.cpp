#include "util.h"
#include "logic.h"

#define BUF 100

int main() {
	int array[BUF];
	int size;

	cout << "Input size of vector: ";
	cin >> size;

	random_init(array, size, -100, 100);
	//cout << "Input vector elements:\n";
	//user_init(array, size);
	cout << "Vector before: " << convert(array, size) << endl;

	// task01
	/*int result = calculate_product_between_extreme_elements(array, size);
	cout << "Product of elements between extreme values is " << result << endl;*/

	// task02
	bubble_sort_asc(array, size);
	cout << "Vector after: " << convert(array, size) << endl;

	return 0;
}