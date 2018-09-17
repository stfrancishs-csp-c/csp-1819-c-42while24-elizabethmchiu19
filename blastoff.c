#include <stdio.h>
int main(void)
{
    int k=0;
    int sum=0;

    while (k<5)
    {
        sum=sum+k;
        k++;
        printf ("sum %2d - k = %2d\n", sum, k);
    }

    //printf ("%2d\n",sum);

    for (k=10;k>-1;k--)
    {
        printf ("%d\n", k);
    }

    printf ("blastoff!");

}
