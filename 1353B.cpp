#include <bits/stdc++.h>
using namespace std;

// Input macros
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sl(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define ss(n)                       scanf("%s",n)

//Lengthy data types
#define ull unsigned long long
#define ui unsigned int
#define us unsigned short

typedef long long			ll;
typedef long long int			lli;
typedef vector<int>			vi;
typedef pair<int, int>			ii;
typedef vector<ii>			vii;
typedef set<int>			si;

#define REP(i, a, b) \
for (int i = int(a); i <= int(b); i++)

int main()
{
  //ios_base::sync_with_stdio(0); // for fast IO 
  //cin.tie(NULL);

// WRITE CODE FROM HERE
	int t;
	s(t);
	while(t--)
	{
		int n, k, sum(0);
		cin >> n >> k;
		int a[n], b[n];
		for(int i=0;i<n;i++)	s(a[i]);
		for(int i=0;i<n;i++) 	s(b[i]);
		
		sort(a, a+n);
		sort(b, b+n, greater<int>());
			
		for(int i=0;i<k;i++)
		{
			if(b[i] > a[i])
				a[i] = b[i];
		}

		for(int i=0;i<n;i++)	sum+=a[i];
		
		cout << sum << endl;
	}

  return 0;
}
