#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int ans = (((n*n)-1)*(n) / 3);
        cout << ans << endl;
    }
    return 0;
}
