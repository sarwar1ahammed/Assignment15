#include <stdio.h>
/* 
    Write a function to rotate an array by n position in d direction. 
    The d is an indicative value for left or right.
*/
void rotate(int*);
int main()
{
    int n;
    int a[n];
    rotate(a);

    printf("\n");
    return 0;

}
void rotate (int b[])
{
    int n, d, i;
    int temp[n];
    printf("Enter array range : ");
    scanf("%d", &n);
    printf("Enter indicative value : ");
    scanf("%d", &d);
    printf("Enter %d number of array value : ", n);
    for (i=0; i<n; i++)
        scanf("%d", &b[i]);

    int j=0;
    for (i=d; i<n; i++)
    {
            temp[j] = b[i];    
            j++;   
    }
    for (i=0; i<d; i++)
    {
            temp[j] = b[i];
            j++;
    }
    
    for (i=0; i<n; i++)
    {
        b[i] = temp[j];
        printf("%d ", b[i]);
    }
    
       
    

}
