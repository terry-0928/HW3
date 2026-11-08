#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int from, int to, int temp);

void hanoi(int n, int from, int to, int temp)
{
    if (n == 1)
    {
        printf("%d -> %d\n", from, to);
    }
    else
    {
        hanoi(n - 1, from, temp, to);

        printf("%d -> %d\n", from, to);

        hanoi(n - 1, temp, to, from);
    }
}

int main()
{
    int n;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    if (n >= 1)
    {
        hanoi(n, 1, 3, 2);
    }
    else
    {
        printf("Invalid number!\n");
    }

    system("pause");
    return 0;
}