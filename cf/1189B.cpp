#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a+n);
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
            v.push_back(a[i]);
        else
        {
            v.insert(v.begin(), a[i]);
        }
    }

    v.push_back(v[0]);
    v.push_back(v[1]);

    bool poss = true;
    for (int i = 0; i < n; i++)
    {
        if (v[i] + v[i+2] <= v[i+1])
        {
            poss = false;
            break;
        }
    }

    if (poss)
    {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
    }
    

}