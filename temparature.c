Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
  
#include<stdio.h>
int main(){
    float C;
    printf("Enter the value of temperature in celsius:");
    scanf("%f",&C);
    printf("The temperature in fahrenheit:%.4f\n",(9*C)/5+32);

    return 0;
}
