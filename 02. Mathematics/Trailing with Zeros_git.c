#include <stdio.h>
static int trailing_Zeroes(int n)
{
    int number = 0;
    while(n > 0)
    {
        number += n / 5;
        n /= 5;
    }
    return number;
}
int main(void)
{
    int n;
    printf("\nEnter first Integer:");
    scanf("%d",&n);
    printf("\n No of trailing zero's of factorial %d is %d\n", n, trailing_Zeroes(n));
    
    printf("\nEnter next Integer:");
    scanf("%d",&n);
    printf("\n No of trailing zeroe's of factorial %d is %d\n", n, trailing_Zeroes(n));
    return 0;
}