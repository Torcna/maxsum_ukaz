#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int l = 0,m=0, r = -1, sum = 0, loc = 0;
	const int N = 1000;
	int a[N];



	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 1000 - rand() % 1000;
		cout << a[i]<<" ";
	}



	while (r<N)
	{



		while (loc + a[r+1]>loc)
		{
			loc += a[r + 1];
			r++;
		}
		if (loc > sum)
		{
			sum = loc;
			cout << '\n' << l << " ==> " << r;
		}
		r++;
		while (a[r] < 0)
		{
			r++;
		}


		m = r;
		loc = a[r];
		while (loc + a[r + 1] > loc)
		{
			loc += a[r + 1];
			r++;
		}
		if (loc > sum)
		{
			sum = loc;
			cout << '\n' << m << " ==> " << r;
		}


		loc = 0;
		for (int i = l; i < r + 1; i++)
		{
			loc += a[i];
		}
		if (loc > sum)
		{
			sum = loc;
			cout << '\n' << l << " ==> " << r;
		}
		l = m;
		r = l;
		loc = 0;
	}
	cout << '\n' << sum;
}