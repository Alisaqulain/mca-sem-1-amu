//WEEK 9 PROGRAM 1 B
#include <stdio.h>
#include <stdlib.h>

/* Recursive function */
int gcd_recursive(int a, int b)
{
    if (b == 0)
        return abs(a);

    return gcd_recursive(b, a % b);
}

/* Non-recursive function */
int gcd_nonrecursive(int a, int b)
{
    int temp;

    a = abs(a);
    b = abs(b);

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("GCD using recursion = %d\n",
           gcd_recursive(a, b));

    printf("GCD without recursion = %d\n",
           gcd_nonrecursive(a, b));

    return 0;
}

