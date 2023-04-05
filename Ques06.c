#include <stdio.h>
/* 
    A function in C to read n number of values 
    in an array and display it in reverse order.
*/
void reverse(int*);
int main()
{
    int n;
    int a[n];
    
    reverse(a);

    printf("\n");
    return 0;
}
void reverse(int b[])
{
    int i, n;
    printf("Enter array range : ");
    scanf("%d", &n);
    printf("Enter %d number of value : \n", n);
    for (i=0; i<=n-1; i++)
        scanf("%d", &b[i]);
    printf("Elements in reverse order : ");
    for (i=n-1; i>=0; i--)
        printf("%d ", b[i]);

}
