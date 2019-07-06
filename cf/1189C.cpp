#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;



int main()
{
    int n, q, l ,r;
    
    ll sum = 0;
    
    cin >> n;
    ll presum[n+10];
    ll a[n+10];
    
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    cin >> q;
    a[0] = 0;
    presum[0] = 0;
    presum[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        presum[i] = presum[i-1] + a[i];
    }

  

    for (int i = 0; i < q; i++)
    {
        sum = 0;
        cin >> l >> r;
        sum = presum[r] - presum[l-1];
        cout << sum / 10 << "\n";
        
    }


}
