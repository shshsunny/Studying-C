#include<stdio.h>

int main()
{
    int n, co, top, i, space = 0;
    scanf("%d", &n);
    top = 2*n - 1;
    co = n;
    while ( co > 0)
    {
        for (i = 0; i <= space/2; i++) printf("  ");
        for (i = 0; i <= top-1; i++) printf("# ");
        //for (i = 0; i <= space/2; i++) printf(" ");
        printf("\n\n");
        top -= 2;
        co -= 1;
        space += 2;
    }
    return 0;
}
