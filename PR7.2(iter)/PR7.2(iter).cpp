// Lab_7_2_1.cpp
// М'ягких Владислав
// Лабораторна робота № 7.2.1
// Опрацювання багатовимірних масивів ітераційними способами.
// Варіант 11

#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int** a, const int n, const int k, const int Low, const int High);
void Print(int** a, const int n, const int k);
int Sum(int** a, const int n, const int k, int& s);

int main()
{
	srand((unsigned)time(NULL));

	int Low = 7;
	int High = 62;

	int k;
	int n;

	cout << "k = "; cin >> k;
	cout << "n = "; cin >> n;

	int** a = new int* [k];
	for (int i = 0; i < k; i++)
		a[i] = new int[n];

	Create(a, n, k, Low, High);
	Print(a, n, k);
	 
	int s = 0;
	cout << "Sum min = "; Sum(a, n, k, s);

	for (int i = 0; i < k; i++)
		delete[] a[i];

	delete[] a;

	return 0;
}
void Create(int** a, const int n, const int k, const int Low, const int High)
{
	for (int i = 0; i < k; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int** a, const int n, const int k)
{
	cout << endl;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
int Sum(int** a, const int n, const int k, int& s)
{
	int min;
	for (int j = 0; j < n; j++)
	{
		if (j % 2 == 1)
		{
			min = a[0][j];
			for (int i = 0; i < k; i++)
				if (a[i][j] < min)
					min = a[i][j];
			s += min;
		}
	}
	return s;
}







