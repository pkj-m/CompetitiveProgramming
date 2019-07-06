#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    int k;
    string s;
    cin >> k;
    cin >> s;
    int x = 0, y= 0;
    int x1, y1, x2, y2;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='0')
            x++;
        else
        {
            y++;
        }
    }    

    if (x != y)
    {
      cout << "1\n";
      cout << s << "\n";
    }
    else
    {
        int p = 0;
        x1 = 0;
        x2 = x;
        y1 = 0;
        y2 = y;
        while (x1 == y1 || x2 == y2)
        {
            if (s[p]=='1')
            {
                y1++;
                y2--;
            }
            else
            {
                x1++;
                x2--;
            }
            p++;
        }

        cout << "2\n";
        for (int i = 0; i < p; i++)
        {
            cout << s[i];
        }
        cout << " ";
        for (int i = p; i < s.length(); i++)
            cout << s[i];
        cout << "\n";
    }
    

}