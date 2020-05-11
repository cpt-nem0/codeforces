#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		
		vector<int> op;
		
		int x = 1;
		int ctr = 0;		
		
		while(n!=0){
			int temp = n%10;
			
			if(temp != 0){
				op.push_back(temp*x);
				ctr++;
			}
			
			x *= 10;
			n/=10;
		}
		cout << ctr << endl;
		for(auto i = op.begin(); i != op.end(); i++)
			cout << *i << " ";
		cout << endl;
	}
	return 0;
}
