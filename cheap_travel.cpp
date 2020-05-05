#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, a, b;
    cin>>n>>m>>a>>b;

    if(m * a > b)
    {
        int remain = (n % m) * a;
        cout<< (remain>b) ? (n / m * b + b) : (n / m * b + remain);
    }
    else
        cout<< n*a<<endl;

    return 0;
}