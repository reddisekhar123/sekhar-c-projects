/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>

int main()
{
int a, b,i,gcd;
printf("Enter two numbers");
scanf("%d %d", &a, &b);

for (i=1;i<=a && i<=b;i++)
{
    if (a%i==0 && b%i==0)
    {
        gcd=i;
    }
}
printf("the gcd of %d and %d is %d",a,b,gcd);
}
