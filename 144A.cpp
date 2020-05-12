#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a;
	cin >> n >> a;
	int max_val(a), min_val(a), min_ind(0), max_ind(0); 
	
	for (int i = 1; i < n; i++)
	{
		cin >> a;
		if(a > max_val)
		{
			max_val = a;
			max_ind = i;
		}
		
		if(a <= min_val)
		{
			min_val = a;
			min_ind = i;
		}	
	}
	cout << max_ind + (n-1-min_ind) - (max_ind > min_ind ? 1 : 0) << endl; 
	
	return 0;
}
