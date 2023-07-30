#include <stdio.h>

int main()
{
    int N;
    int count = 0;
    scanf("%d", &N);
    if (N == 0)
    {
        printf("%d", count+1);
    }
    else
    {
        int f = 0;
        int b = 0;
        int s = N;
        while (f * 10 + b % 10 != N)
        {
            f = s % 10;
            b = s / 10 + s % 10;
            s = f * 10 + b % 10;
            count++;
        }
        printf("%d", count);
    }
    return 0;
}