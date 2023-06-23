//		Write a program in C to convert a decimal number to binary using recursion.


#include<stdio.h>

long convertBinary(int);

int main()
{
    long biNo;
    int decNo;
    
    printf("\n\n Recursion : Convert decimal number to binary :\n");
    printf("---------------------------------------------------\n");
    
    printf(" Input any decimal number : ");
    scanf("%d",&decNo);
    
    biNo = convertBinary(decNo);//call the function convertBinary
    printf(" The Binary value of decimal no. %d is : %ld\n\n",decNo,biNo);
    return 0;
}
long convertBinary(int decNo)
{
    static long biNo,r,fctor = 1;
    
    if(decNo != 0)
    {
        r = decNo % 2;
        biNo = biNo + r * fctor;
        fctor = fctor * 10;
        convertBinary(decNo / 2);//calling the function convertBinary itself recursively
    }
    return biNo;
}
