// Lab_6.1.2.cpp
// < Онишків Остап >
// Лабораторна робота No 6.1.2
// Пошук елементів одновимірного масиву рекурсивним способом
// Варіант 5

#include<iostream>
#include<iomanip>
#include<time.h>
using namespace std;

void Create(int* arr, const int SIZE,int i)
{
	arr[i]= 50. * rand() / RAND_MAX - 20;
	
	if (i < SIZE - 1)
	{
		Create(arr, SIZE, i + 1);
	}
}

void Show(int* arr, const int SIZE, int i)
{
	cout << setw(4) << arr[i];
	
	if (i < SIZE - 1)
	{
		Show(arr, SIZE, i+1);
	}
	else
	{
		cout << endl;
	}
}


int Sum(int* arr, const int SIZE, int i, int S)
{	
	if (arr[i] > 0 && arr[i] % 2 == 0)
	{
		S += arr[i];
	}

	if (i<SIZE-1)
	{
		return Sum(arr, SIZE, i + 1,S);
	}
	else
	{
		return S;
	}
}

int count(int* arr, const int SIZE, int i, int n)
{
	if (arr[i] > 0 && arr[i] % 2 == 0)
	{
		n++;
	}
	
	if (i < SIZE - 1)
	{
		return count(arr, SIZE, i + 1, n);
	}
	else
	{
		return n;
	}
}

void change(int* arr, const int SIZE,int i)
{
	if (arr[i] > 0 && arr[i] % 2 == 0)
	{
		arr[i] = 0;
	}
	
	if (i < SIZE - 1)
	{
		return change(arr, SIZE, i+1);
	}
}

int main()
{
	srand((unsigned)time(NULL));

	const int SIZE = 25;
	int arr[SIZE];

	Create(arr, SIZE,0);
	Show(arr, SIZE,0);
	cout << "S = " << Sum(arr, SIZE, 0, 0) << endl;
	cout << "n = " << count(arr, SIZE, 0, 0) << endl;
	change(arr, SIZE,0);
	Show(arr, SIZE,0);

	return 0;
}
