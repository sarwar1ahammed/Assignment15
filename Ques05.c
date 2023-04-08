#include <stdio.h>
/*
    Find the first occurrence of adjacent duplicate values in the array.
    Function has to return the value of the element.
*/
int adj(int*);
int main()
{
    int result;
    int a[100];
    result = adj(a);
    printf("First occurrence of adjacent duplicate values in the array is : %d", result);

    printf("\n");
    return 0;
}
int adj(int b[])
{
    int n, i;
    printf("Enter array range : ");
    scanf("%d", &n);
    printf("Enter %d number of elements of array : ", n);
    for (i=0; i<n; i++)
        scanf("%d", &b[i]);

    for (i=0; i<n; i++)
    {
        if (b[i] == b[i+1])
            return b[i];
    }

}
