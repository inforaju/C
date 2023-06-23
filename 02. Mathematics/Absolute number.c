#include<conio.h>
#include<stdio.h>

int absolute(int n)
{
    if(n < 0)            // if number is negative, say -n
        return -n;   // return -(-n) which is +n.
        
    return n;           // Otherwise, return n.
}
int main()
{
    int n;
    scanf("%d",&n);
    
    printf("Absolute of n = %d",absolute(n));
    
    return 0;
}