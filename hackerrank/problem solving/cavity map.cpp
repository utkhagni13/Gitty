#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    cin >> n;
    string str[n];
    for(i=0;i<n;i++)
    cin >> str[i];

    for(i=1;i<n-1;i++)
    {
        for(j=1;j<(n-1);j++)
        {
            if(str[i][j] > str[i][j-1] && str[i][j] > str[i][j+1] && str[i][j] > str[i-1][j] && str[i][j] > str[i+1][j])
            str[i][j] = 'X';
        }
    }

    for(i=0;i<n;i++)
    cout << str[i] << endl;

    return 0;
}
