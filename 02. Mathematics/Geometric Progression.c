/* C Program to find Sum of Geometric Progression Series without using formula */
#include <stdio.h>
#include<math.h>
int main()
{
    int a, n, r, temp, i;		//Variable Declaration
    float sum = 0;		//Sum declaration and initialization
    printf("\nEnter First Number of an G.P Series:  ");
    scanf("%d", &a);		//First term initialization
    printf("\nEnter the Total Numbers in this G.P Series:  ");
    scanf("%d", &n);		//Total Numbers of terms initialization
    printf("\nEnter the Common Ratio:  ");
    scanf("%d", &r);		//Common term initialization
    temp = a;
    //Print the series
    printf("The G.P Series is  :  ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", temp);
        sum = sum + temp;		//Update the sum in each iteration
        temp = temp * r;		//Update the term in each iteration
    }
    //Print the sum
    printf("\nThe Sum of Geometric Progression Series =  %f\n", sum);
    return 0;
}
