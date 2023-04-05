#include <stdio.h>
// A function in C to print all unique elements in an array.
void unique (int*);
int main()
{
    int n;
    int a[n];

    unique(a);

    printf("\n");
    return 0;
}
void unique (int b[])
{
    int n,i,j;
    printf("Enter Array range : ");
    scanf("%d", &n);
    printf("Enter Array Elements : ");
    for (i=0; i<n; i++)
        scanf("%d", &b[i]);

    printf("Uinque elements are : ");
 
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(b[i] == b[j] && i != j)
            break;
        }

        if(j == n )
            printf("%d ", b[i]);

    }
}
