#include <stdio.h>
// A function to find the greatest number from the given array of any size. (TSRS)
int greatest(int*);
int main()
{
    int n;
    int a[n];

    printf("Greatest number in the given array is : %d", greatest(a));

    printf("\n");
    return 0;
}

int greatest(int b[])
{
    int i, n;
    printf("Enter array range : ");
    scanf("%d", &n);
    
    printf("Enter %d number of value in the array : \n", n);
    for (i=0; i<=n-1; i++)
        scanf("%d", &b[i]);

    int maxValue = b[0];
    for (i=0; i<=n-1; i++)
    {
        if (maxValue < b[i])
            maxValue = b[i];
    }
    return maxValue;  

}

