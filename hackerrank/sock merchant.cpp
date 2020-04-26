#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,p,max=0;
    cin >> n;
    int arr[n],count[n] = {0};

    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        if(arr[j] == arr[i])
        count[i]++;

        if(arr[i] > max)
        {
            max = arr[i];
            p=i;
        }
    }

    int pair=0;

    for(i=1;i<=max;i++)
    {
        for(j=0;j<n;j++)
        {
        if(arr[j] == i && count[j]!=0)
            {
                pair = pair + count[j]/2;
                break;
            }
        }
    }
    cout << pair;
}