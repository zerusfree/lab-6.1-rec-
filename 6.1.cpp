#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

int Sum(int mas[], const int n, int i);
int K(int mas[], const int n, int i);
int Zam(int mas[], const int n, int i);

void Create(int mas[], const int n, const int Low, const int High, int i)
{
	mas[i] = Low + rand() % (High - Low + 1);
	if (i < n - 1)
		Create(mas, n, Low, High, i + 1);
}

void Print(int mas[], const int n, int i)
{
	cout << mas[i] << " ";
	if (i < n - 1)
		Print(mas, n, i + 1);
}
int Sum(int mas[], const int n, int i)
{
	if (mas[i] < 0 || (mas[i] % 2) != 0)
	{
		if (i < n)
			return mas[i] + Sum(mas, n, i + 1);
		else
			return 0;
	}
	else
		return Sum(mas, n, i + 1);
}

int K(int mas[], const int n, int i)
{
	if (mas[i] < 0 || (mas[i] % 2) != 0)
	{
		if (i < n)
			return 1 + K(mas, n, i + 1);
		else
			return 0;
	}
	else
		return K(mas, n, i + 1);
}

int Zam(int mas[], const int n, int i)
{
	if (i == n)
		return 0;
	if (mas[i] < 0 || (mas[i] % 2) != 0)
		mas[i] = 0;
	return Zam(mas, n, i + 1);
}
int main()
{
	srand((unsigned)time(NULL));

	const int k = 24;
	int a[k];

	int Low = -15;
	int High = 50;

	Create(a, k, Low, High, 0);

	cout << "a[ ";
	Print(a, k, 0);
	cout << "]" << endl;

	cout << "Sum = " << Sum(a, k, 0) << endl;
	cout << "k = " << K(a, k, 0) << endl;

	Zam(a, k, 0);

	cout << "a[ ";
	Print(a, k, 0);
	cout << "]" << endl;

	return 0;
}
