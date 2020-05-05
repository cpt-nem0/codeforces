#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;

    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int b[n] = {0};
    b[0] = a[0];
    for(int i=1;i<n;i++)
        b[i] = b[i-1] + a[i];

    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==1) cout<<floor(b[r-1]/((r-l)+1))<<endl;

        else  cout<<floor((b[r-1]-b[l-2])/((r-l)+1))<<endl;


    }
    return 0;
}
