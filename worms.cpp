#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],c[n],sum =0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        c[i]=sum;
    }
    int m;
    cin>>m;
    int q[m];
    for (int i = 0; i < m; i++) cin>>q[i];
    for(int i=0;i<m;i++)
    {
        cout<<lower_bound(c,c+n,q[i])-c+1<<endl;
    }
    return 0;
}