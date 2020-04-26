#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,m ;
    cin >> n >> m;
    int a[n],b[m];
    for(i=0;i<n;i++)
    cin >> a[i];
    for(i=0;i<m;i++)
    cin >> b[i];

    int small = b[0] , big = a[0];

    for(i=0;i<n;i++)
    if(a[i] > big)
    big = a[i];

    for(i=0;i<m;i++)
    if(b[i] < small)
    small = b[i];

    int x=0,y=0,z=0,j=0;

    for(i=big;i<=small;i++)
    {
        for(j=0;j<n;j++)
        if(i%a[j] == 0)
        x++;

        if(x!=n)
        {
            x=0;
            y=0;
            continue;
        }

        for(j=0;j<m;j++)
        if(b[j]%i == 0)
        y++;

        if(y!=m)
        {
            x=0;
            y=0;
            continue;
        }

        z++;
        x=0;
        y=0;
    }

    cout << z;
    return 0;
}