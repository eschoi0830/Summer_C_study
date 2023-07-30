#include <stdio.h>

int main()
{
    int a[9];
    int sum = 0;
    int over = 0;
    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    over = sum - 100;
    int m = 0;
    int n = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (a[i] + a[j] == over)
            {
                m = i;
                n = j;
                break;
            }
        }
    }
    int b[7];
    int j = 0;
    for (int i = 0; i < 9; i++)
    {
        if (i != m && i != n)
        {
            b[j] = a[i];
            j++;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 6 - i; j++)
        {
            if (b[j] > b[j + 1])
            {
                int temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n", b[i]);
    }

    return 0;
}
