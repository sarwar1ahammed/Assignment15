
#include <stdio.h>
// Count the frequency of each element of an array.
void frequency(int b[])
{
    int n, i;
    printf("Enter array range : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    for (i=0; i<n; i++)
        scanf("%d", &b[i]);
    int freq[100] = {0};
    for (i=0; i<n; i++)
        freq[b[i]]++;
   
    for (i=0; i<100; i++)
    {
        if (freq[i] != 0)
            printf("\n%d occured %d times.", i, freq[i]);
    }   
}

int main()
{
    int n;
    int a[n];
    frequency(a);

    printf("\n");
    return 0;
}
