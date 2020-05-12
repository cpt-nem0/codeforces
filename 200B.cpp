#include <bits/stdc++.h>
using namespace std;

int main()
{
	double n, p;
	cin >> n;
	double total = 0.0;
	for(int i = 0; i < n; i++)
	{
		cin >> p;
		total += p;
	}
	printf("%.12f\n", (total/n));
	return 0;	
}
