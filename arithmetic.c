Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
  
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);

     printf("The sum of a and b:%d\n",a+b);
     printf("The difference of a and b:%d\n",a-b);
     printf("The product of a and b:%d\n",a*b);
     
    (b==0)? printf("The quotient of a and b:undefined\n") : printf("The quotient of a and b:%d\n",a/b);

    return 0;
}
