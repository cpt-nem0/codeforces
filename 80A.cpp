#include <bits/stdc++.h>
using namespace std;

bool check_prime(int n)
{
	for(int i = 2; i*i <= n; i++)
		if(n%i == 0)
			return false;
	return true;
}

int main()
{
	int n, m;
	cin >> n >> m;

	int i = n+1;
	while(!check_prime(i))
		i++;

	if(i==m)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}
