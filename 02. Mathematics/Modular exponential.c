#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int max_power(int base,int exp,int mod);
int main(void)
{
    int num_computers= 1000;
    int keys_per_second= 500000;
    int seconds_in_day= 86400;
    printf("Number of keys: 2 ^ 48 \n");
    printf("\nNumber of computers: %d \n",num_computers);
    printf("\nNumber of keys/persecond: %d \n",keys_per_second);
    printf("\nNumber of days: %d \n",max_power(2,48,seconds_in_day)*num_computers*keys_per_second);
    
    return 0;
}

int max_power(int base,int exp,int mod)
{
    if(exp == 0)
        return 1;
    else if(exp%2 == 0)
    {
        int mysqrt = max_power(base, exp/2, mod);
        return (mysqrt*mysqrt)%mod;
    }
    else
        return (base*max_power(base, exp-1, mod))%mod;
}