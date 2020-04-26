#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,i;
    scanf("%d",&T);
    int pair[T],draw[T];

    for(i=0;i<T;i++)
    {
        scanf("%d",&pair[i]);
        draw[i] = pair[i] + 1;
    }

    for(i=0;i<T;i++)
    {
        printf("%d\n",draw[i]);
    }
    return 0;
}