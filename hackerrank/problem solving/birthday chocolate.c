#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,n,sum=0,way=0;
    scanf("%d",&n);
    int m,d,piece[n];
    for(i=0;i<n;i++)
    scanf("%d",&piece[i]);

    scanf("%d",&d);
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        for(j=i;j<m;j++)
        sum = sum + piece[j];

        if(sum == d)
        way++;

        sum=0;
        m++;
    }

    printf("%d",way);
}
