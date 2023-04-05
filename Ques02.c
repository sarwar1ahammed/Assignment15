#include <stdio.h>
/* 
    A function to find the smallest number from 
    the given array of any size. (TSRS)
*/
int smallest(int*);
int main()
{
    int n;
    int a[n];

    printf("Smallest number in the given array is %d", smallest(a));

    printf("\n");
    return 0;
}
int smallest(int b[])
{
    int n, i;
    printf("Enter array range : ");
    scanf("%d", &n);
    printf("Now enter %d number of value in the array : \n", n);
    for (i=0; i<=n-1; i++)
        scanf("%d", &b[i]);

    int smallestValue = b[0];
    for (i=0; i<=n-1; i++)
    {
        if (smallestValue > b[i])
            smallestValue = b[i];
    }
    return smallestValue;

}
