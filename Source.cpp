#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int l = 0, m = 0, r = -1, sum = 0, loc = 0;
	const int N = 10;
	int a[N];
	int b[N]


	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 1000 - rand() % 1000;
		cout << a[i] << " ";
	}

	b[0] = 0;
	for (int i = 1; i < N; i++)
	{
		b[i] = a[i] + b[i - 1];
	}
	for (int i = 0; i <N ; i++)
	{
		cout << b[i] << ' ';
	}
}
