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

	// ������ 1
	cout << "������ 1.\n����������� ������:\n[";
	int z1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
		cout << *(z1 + i) << ", ";
	cout << "\b\b]\n";
	for (int i = 0; i < 10; i++)
		if (*(z1 + i) % 2 == 0)
			swap(*(z1 + i - 1), *(z1 + i));
	cout << "�������� ������:\n[";
	for (int i = 0; i < 10; i++)
		cout << *(z1 + i) << ", ";
	cout << "\b\b]\n\n";

	// ������ 2
	cout << "������ 2.\n������� ����� � �������, � ������� ����� �������� ������ �����: ";
	int n, m;
	cin >> n >> m;
	int* pn = &n;
	cout << "����� " << n << " � ������� " << m << " = ";
	PowPow(&n, m);
	cout << endl;

	return 0;
}