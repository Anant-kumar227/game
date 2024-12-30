#include <stdio.h>
swap(int x, int y);
void main()
{
    int num1, num2;
    printf("Enter the first number:");
    scanf("%d", &num1);

    printf("Enter the second number:");
    scanf("%d", &num2);
    swap();
}
int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("num1:", x);
    printf("num2:", y);
}
