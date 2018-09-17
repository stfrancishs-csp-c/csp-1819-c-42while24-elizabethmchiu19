#include <stdio.h>
int main(void)
{
    int k=0;
    int sum=0;

    while (k<5)
    {
        sum=sum+k;
        k++;
    }

    printf ("%d\n",sum);

    for (k=4;k>-1;k--)
    {
        printf ("%d\n", k);
    }


}

