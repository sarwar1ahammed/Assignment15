#include <stdio.h>
// A function in C to count a total number of duplicate elements in an array.
int duplicate(int*);
int main()
{
    int n;
    int a[n];
    printf("No. of Duplicate value is : %d", duplicate(a));
    printf("\n");
    return 0;
}
int duplicate(int b[])
{
    int i, j, n;
    printf("Enter array range : ");
    scanf("%d", &n);
    printf("Enter %d number of array value : \n", n);
    for (i=0; i<=n-1; i++)
        scanf("%d", &b[i]);
    int static count=0;
    for (i=0; i<=n-1; i++)
    {
        for (j=i+1; j<=n-1; j++)
        {
            if (b[i] == b[j])
            {
                count++;
            }
        }
    }
    return count;
}
