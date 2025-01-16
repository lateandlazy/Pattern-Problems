#include<stdio.h>

int pattern(int n)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-i-1 ; j++)
        {
            printf(" ");
        }
        int value = 1;
        for(int k=0 ; k<=i ; k++)
        {
            printf("%d ",value);
            value = value*(i-k)/(k+1);
        }
        printf("\n");


    }
}
int main()
{
    pattern(5);
    return 0;
}