#include "util.h"

void random_init(int* array, int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (b - a + 1) + a;
	}
}

void user_init(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "array[" << i + 1 << "] = ";
		cin >> array[i];
	}
}

string convert(int* array, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s = s + to_string(array[i]) + " ";
	}

	return s;
}