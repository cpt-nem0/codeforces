#include <bits/stdc++.h>
using namespace std;

typedef long long						ll;
typedef vector<int>						vi;
typedef pair<int, int>					ii;
typedef vector<ii>						vii;
typedef set<int>						si;

#define REP(i, a, b) \
for (int i = int(a); i <= int(b); i++)

int main()
{
	int n, k, t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		if(n%2 == 0)
			cout << (n + 2 * k) << endl;
		else
			{
				REP(i, 2, n)
					if(n%i==0)
					{
						cout << (n+i+ 2*(k-1)) << endl;
						break;
					}
			}
		}
	
  return 0;

}
