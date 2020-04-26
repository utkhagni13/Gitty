#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i,n,d,k,p=0,j,trip=0;
    cin >> n >> d;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i] == arr[i+1])
        {
            p++;
            continue;
        }
        for(j=i+1;j<n;j++)
            if(arr[j]-arr[i] == d)
                for(k=j+1;k<n;k++)
                    if(arr[k]-arr[j] == d)
                    {
                        trip++;
                        break;
                    }
    }
    cout << (trip+p);
}