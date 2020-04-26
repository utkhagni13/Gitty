#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int point[n][4],refl[n][2];

    for(i=0;i<n;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&point[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        refl[i][0] = 2*point[i][2] - point[i][0];
        refl[i][1] = 2*point[i][3] - point[i][1];
    }

    for(i=0;i<n;i++)
    {
        printf("%d %d",refl[i][0],refl[i][1]);
        printf("\n");
    }
    return 0;
}