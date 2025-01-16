#include <stdio.h>

void pattern(int n)
{
    for(int t=0 ; t<n ; t++)
    {
        for(int i=0 ; i<n ; i++)
        {
            for(int sp=0 ; sp<n*t ; sp++)
            {
                printf(" ");
            }
            for(int j=0 ; j<=i ; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}
int main()
{
    pattern(3);
    return 0;
}