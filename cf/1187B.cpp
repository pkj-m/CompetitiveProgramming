#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int n, m, mx, f[26];
    string s, t;
    vector<int> a[26];
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        a[s[i]-'a'].push_back(i);

    cin >> m;


    for (int i = 0; i < m; i++)
    {
        mx = 0;
        fill(f, f+26, 0);
        cin >> t;
        for (int j = 0; j < t.length(); j++)
        {
            mx = max(a[t[j]-'a'][f[t[j]-'a']], mx);
            f[t[j]-'a']++;
        }
        cout << mx + 1 << "\n";     
    }

}
