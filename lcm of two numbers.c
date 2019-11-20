/******************************************************************************


#include <stdio.h>
#include <conio.h>

int main()
{
int a, b,lcm,low;
printf("Enter two numbers");
scanf("%d %d", &a, &b);

low =(a<b)? a:b;
 while(1)
 {
     if(low%a==0 && low%b==0)
     {
         lcm =low;
         break;
     }
     low++;
}
printf("the lcm of %d and %d is %d",a,b,lcm);
}
