#include<stdio.h>

int main()
{
    int i=0;
    int j=0;
    while(i>=j)
    {
        i=j;
        j--;
    }
    printf("%d\n", i);

    i=0;
    j=0;
    while(i<=j)
    {
        i=j;
        j++;
    }
    printf("%d\n", i);
}


