#include <iostream>
using namespace std;

template <typename T> void PowPow(T* pn, T a);

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
	cout << "Число " << *pn << " в степени " << m << " = ";
	PowPow(&n, m);
	cout << endl;

	return 0;
}
// Задача 2. Возведение в степень
template <typename T> void PowPow(T* pn, T a) {
	int b = *pn;
	if (a == 0)
		*pn = 1;
	for (int i = 1; i < a; i++)
		*pn *= b;
	cout << *pn;
}