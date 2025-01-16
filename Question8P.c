#include<stdio.h>

int pattern(int n)
{
    for(int i=0 ; i<2*n-1 ; i++)
    {
        for(int j=0 ; j<2*n-1 ; j++)
        {
            int min= (i<j?i:j);
            min = (min<(2*n-2-i)?min:(2*n-2-i));
            min = (min<(2*n-2-j)?min:(2*n-2-j));

            printf("%d",n-min);
        }
        printf("\n");
    }
}
int main()
{
    pattern(5);
    return 0;
}