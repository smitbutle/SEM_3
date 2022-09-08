#include <iostream>
void TOH(int n, char x, char y, char z, int &con)
{
    if (n > 0)
    {
        TOH(n - 1, x, z, y, con);
        printf("\n%c to %c", x, y);
        con++;
        TOH(n - 1, z, y, x, con);
    }
}
int main()
{
    int n;
    int c = 0;

    printf("Enter number: ");
    scanf("%d", &n);
    TOH(n, 'A', 'B', 'C', c);
    printf("\n----------------\nSteps : %d", c);
}