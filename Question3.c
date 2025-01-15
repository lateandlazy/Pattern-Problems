#include<stdio.h>

int main()
{
int rows=5;
for (int i=0; i<2*rows-1; i++)
{
    int com;
    if (i<rows)
    {
        com= 2*i+1;
    }
    else{
        comp = 2*(2*rows-1)-3;
    }
    for (int j=0 ;j<com ;j++)
    {
        printf(" ");
    }
    for (int k=0 ; k<2*rows-com ;k++)
    {
        printf("%c",k+'A');
    }
printf("\n");
}
return 0;
}