#include <bits/stdc++.h>
#define MAXN 10000
using namespace std;

//Condition is that the array A should be sorted
bool findsum(int *lp, int *rp, int target, int A[], int n)
{
    *lp = 0;
    *rp = n - 1;

    while (*lp < *rp)
    {
        if (A[*lp] + A[*rp] == target)
            return true;
        else if (A[*lp] + A[*rp] < target)
        {
            (*lp)++;
        }else
        {
            (*rp)--;
        }
    }

    return false;

}

int main()
{
    int x, lp, rp, n, A[MAXN];

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    
    cin >> x;
    sort(A, A+n);

    if (findsum(&lp, &rp, x, A, n))
        cout << "found elements: " << A[lp] << " + " << A[rp] << endl;
    else
    {
        cout << "sum " << x << " not possible\n";
    }

}