#include<stdio.h>

int plot(int n)
{
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("*");
        }
        int sp= 2*n - 2*i ;
        for(int j=1 ; j<=sp ;j++)
        {
            printf(" ");
        }
        for(int j=1; j<= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=n ; i>=1 ; i--)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("*");
        }
        int sp = 2*n-2*i ;
        for(int j=1 ; j<=sp ; j++)
        {
            printf(" ");
        }
        for(int j=1 ; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    plot(5);
    return 0;
}