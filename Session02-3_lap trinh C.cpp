#include<stdio.h>
int main(){
    int a = 10;   
    int b = 5;    
    int sum, diff, product, quotient; 
    sum = a + b;             
    diff = a - b;             
    product = a * b;          
    quotient = a / b;         
    printf("Tong cua %d v� %d l�: %d\n", a, b, sum);
    printf("Hieu cua %d v� %d l�: %d\n", a, b, diff);
    printf("T�ch cua %d v� %d l�: %d\n", a, b, product);
    printf("Thuong cua %d v� %d l�: %d\n", a, b, quotient);

    return 0;
}
