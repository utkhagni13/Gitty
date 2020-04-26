#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,m,n;
    unsigned long long b,max=0;
    cin >> b >> n >> m;
    long kbd[n] , usb[m];

    for(i=0;i<n;i++)
    cin >> kbd[i];

    for(i=0;i<m;i++)
    cin >> usb[i];

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(kbd[i] + usb[j] <= b && kbd[i] + usb[j] > max)
            max = kbd[i] + usb[j];
        }
    }

    if(max == 0)
    {
        cout << "-1";
        return 0;
    }

    cout << max;
    return 0;    
}