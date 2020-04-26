#include <bits/stdc++.h>
using namespace std;

// Complete the extraLongFactorials function below.
void extraLongFactorials(int n)
{
    int i;
    unsigned long long fac=2432902008176640000;
    if(n<21)
    {
        unsigned long long fac=1;
        for(i=1;i<=n;i++)
            fac = fac * i;
        cout << fac;
        return;
    }
    int carry,prod,p,dig=19,arr[200];
    for(p=21;p<=n;p++)
    {
        carry=0;
        if(p==21)
        {
            for(i=0;i<dig;i++)
            {
                arr[i] = fac%10;
                fac = fac/10;
            }
        }
        for(i=0;i<dig;i++)
        {
            prod = arr[i]*p + carry;
            arr[i] = prod%10;
            carry = prod/10;
        }
        while(carry!=0)
        {
            arr[i] = carry%10;
            carry=carry/10;
            dig++;
            i++;
        }
    }
    for(i=dig-1;i>=0;i--)
        cout << arr[i];
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}