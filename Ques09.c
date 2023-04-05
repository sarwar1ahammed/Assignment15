#include <stdio.h>
// Merge two arrays of the same size sorted in descending order.
void merge(int*, int*);
int main()
{
    int n;
    int a[n], b[n];

    merge (a, b);

    printf("\n");
    return 0;
}
void merge(int c[], int d[])
{
    int n, i, j, k, swap;
    printf("Enter Array range : ");
    scanf("%d", &n);
    int mer[2*n];
    printf("Enter 1st Array Elements : ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &c[i]);
        mer[i] = c[i];
    }
    
    printf("Enter 2nd Array Elements : ");
    for (i=0; i<n; i++)
    {
        scanf("%d", &d[i]);
        mer[i+n] = d[i];
    }

    k = 2*n;
    printf("Merged Array is : ");
    for (i=0; i<k; i++)
        printf("%d ", mer[i]);

    for (i=0; i<k-1; i++)
    {
        for (j=i+1; j<k; j++)
        {
            if (mer[i] < mer[j])
            {
                swap = mer[i];
                mer[i] = mer[j];
                mer[j] = swap;
            }
        }
    }
    printf("\nMerged Array in Descending order : ");
    for (i=0; i<k; i++)
        printf("%d ", mer[i]);

}
