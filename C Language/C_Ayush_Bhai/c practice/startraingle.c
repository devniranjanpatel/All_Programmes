#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for ( j =1; j<=n-i; j++)
        {
          printf(" ");
        }
        for ( k = 1; k <=i; k++)
        {

          printf("%d ",k);  
        }
        printf("\n");
    }
    for ( i = n-1; i >=1; i--)
    {
        for ( j =n; j>i; j--)
        {
          printf(" ");
        }
        for ( k = 1; k <=i; k++)
        {
          printf("* ");  
        }
        printf("\n");
    } 
}