#include <iostream>
using namespace std;

void PowPow(int* pn, int n) {
	int m = 1;
	for (int i = 0; i < n; i++)
		m *= *pn;
	cout << m;
}

int main() {
	setlocale(LC_ALL, "Russian");

	// Задача 1
	cout << "Задача 1.\nИзначальный массив:\n[";
	int z1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
		cout << *(z1 + i) << ", ";
	cout << "\b\b]\n";
	for (int i = 0; i < 10; i++)
		if (*(z1 + i) % 2 == 0)
			swap(*(z1 + i - 1), *(z1 + i));
	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 10; i++)
		cout << *(z1 + i) << ", ";
	cout << "\b\b]\n\n";

	// Задача 2
	cout << "Задача 2.\nВведите число и степень, в которую нужно возвести данное число: ";
	int n, m;
	cin >> n >> m;
	int* pn = &n;
	cout << "Число " << n << " в степени " << m << " = ";
	PowPow(&n, m);
	cout << endl;

	return 0;
}