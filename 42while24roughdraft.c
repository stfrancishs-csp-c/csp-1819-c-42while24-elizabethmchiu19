#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;

    for (k=0;k<5;k++) //set initial above, then change to while (end condition), curly braces signify a loop inside
    {
        sum+=k; //forloops do inc last; they go from init to end to loop to inc, so when changing to a while loop, inc goes below
    }

    printf ("%d\n",sum);

    k=5;

    while (k>0) {
        k=k-1; //for while loop, the increment goes inside, see above
        printf ("%d\n", k);
    }
}



#include <stdio.h>
int main(void)
{
    //int sum=0;
    //int k;
    k=0;

    while (k<5) //used to be for (k=0;k<5;k++)
    {
        sum+=k; //use something different in "while" version
        printf ("%d\n",sum);
    }

    //printf ("%d\n",sum);

    //k=5;

    for (k=0;k<5;k--) { //used to be while (k>0) {
        //k=k-1;
        //printf ("%d\n", k);
    }

    printf ("%d\n", k);

}

