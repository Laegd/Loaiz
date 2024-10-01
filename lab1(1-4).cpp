#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <limits.h> 
#include <iostream>

using namespace std;
struct student
{
	string famil, name;
	int number;
}stud[3];

int main()
{
	srand(time(NULL));
	int mass[10] = { -10, 1, 5, 6, 9, -1, -2, 7, 11, 22 }, min = INT_MAX, max = INT_MIN;
	for (int i = 0; i < 10; i++)
	{
		if (mass[i] < min)
			min = mass[i];
		if (mass[i] > max)
			max = mass[i];
	}
	cout << max - min << endl;

	int mass2[10];
	for (int i = 0; i < 10; i++)
	{
		mass2[i] = rand() % 200 + (-100);
		cout << mass2[i] << " ";
	}

	int n;
	cout << "\nVVedite n: ";
	cin >> n;
	int* mass3;
	mass3 = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		mass3[i] = rand() % 200 + (-100);
		cout << mass3[i] << " ";
	}

	int** a, q, * p, min1 = INT_MAX, max1 = INT_MIN;
	cout << "\nrazmer matriz : ";
	cin >> q;
	a = new int* [q];
	for (int i = 0; i < q; i++) {
		a[i] = new int[q];
	}
	p = new int[q];
	for (int i = 0; i < q; i++) {
		int sum = 0;
		for (int j = 0; j < q; j++) {
			a[i][j] = rand() % 200 - 100;
			cout << a[i][j] << " ";
			sum += a[i][j];
		}
		p[i] = sum;
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < q; i++) {
		cout << p[i] << " ";
		if (p[i] < min1) min1 = p[i];
		if (p[i] > max1) max1 = p[i];
	}
	cout << "\nmin sum: " << min1 << "\nmax sum: " << max1;
	delete[] p;
	for (int i = 0; i < q; i++) {
		delete[] a[i];
	}
	delete[] a;
}