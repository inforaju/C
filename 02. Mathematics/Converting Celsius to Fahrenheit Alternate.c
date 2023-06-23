//#include<stdio.h>
//#include<conio.h>
//
//void main()
//{
//    float celsius,fahrenheit;
//    clrscr();
//
//    printf("\n Enter the Temparature in Celsius : ");
//    scanf("%f",&celsius);
//
//    fahrenheit = (1.8 * celsius) + 32;
//    printf("\n Temperature in Fahrenheit : %f ",fahrenheit);
//
//    getch();
//}

#include<stdio.h>
int main()
{
    float fahrenheit, celsius;
    //celsius = 24;
    printf("\n Enter the Temparature in Celsius : ");
    scanf("%f",&celsius);
    fahrenheit =((celsius*9)/5)+32;
    printf("\n\n Temperature in fahrenheit is:  %f",fahrenheit);
    return (0);
}