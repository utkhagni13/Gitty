#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j;
    cin >> t;
    int tn[t] , tk[t] , counter[t] = {0} , ta[t][1000] = {0};

    for(i=0;i<t;i++)
    {
        cin >> tn[i] >> tk[i];
        for(j=0;j<tn[i];j++)
        {
            cin >> ta[i][j];
        }
    }

    for(i=0;i<t;i++)
    {
        for(j=0;j<tn[i];j++)
        {
            if(ta[i][j] <= 0)
            counter[i]++;
        }

        if(counter[i] < tk[i])
        cout << "YES" << endl;

        else
        cout << "NO" << endl;
    }
    return 0;
}
