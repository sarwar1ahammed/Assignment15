#include <stdio.h>
// A function to sort an array of any size. (TSRN)
void sort(int*);
int main()
{
    int n;
    int a[n];
    
    sort(a);
    printf("\n");
    return 0;
}
void sort(int b[])
{
    int i, j, n, swap;
    printf("Enter array range : ");
    scanf("%d", &n);
    printf("Now, Enter %d numbers of value in the array : \n", n);
    for (i=0; i<=n-1; i++)
        scanf("%d", &b[i]);

    for (i=0; i<n-1; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (b[i] > b[j])
            {
                swap = b[i];
                b[i] = b[j];
                b[j] = swap;
            }
        }

    }
    printf("Sorted elements are : \n");
    for (i=0; i<n; i++)
        printf("%d ", b[i]);
    
}
