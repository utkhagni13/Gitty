#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;
    cin >> n;
    int arr[n] , freq , max = 0 , ans;

    for(i=0;i<n;i++)
    cin >> arr[i];

    for(i=0;i<n;i++)
    {
        freq = 0;
        for(j=0;j<n;j++)
        {
            if(arr[i] == arr[j])
            freq++;
        }

        if(freq > max)
        max = freq;
    }

    ans = n-max;
    cout << ans;
    return 0;
}
