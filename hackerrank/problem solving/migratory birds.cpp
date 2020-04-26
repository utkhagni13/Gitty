#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j,i,n;
    cin >> n;
    int birds[n] , count[5] = {0,0,0,0,0};

    for(i=0;i<n;i++)
    cin >> birds[i];

    for(j=1;j<=5;j++)
    {
        for(i=0;i<n;i++)
        {
            if(j == birds[i])
            count[j-1]++;
        }
    }

    int max=0;
    for(i=0;i<5;i++)
    {
        if(count[i] > max)
        max = count[i];
    }

    for(i=0;i<5;i++)
    {
        if(max == count[i])
        {
            cout << i+1;
            return 0;
        }
    }
    return 0;
}
