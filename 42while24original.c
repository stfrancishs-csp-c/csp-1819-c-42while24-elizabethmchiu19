#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;

    for (k=0;k<5;k++)
    {
        sum+=k;
    }

     printf ("%d\n",sum);

    k=5;

    while (k>0)
    {
        k=k-1; //for while loop, the increment goes inside
        printf ("%d\n", k);
    }
}
