#include<stdio.h>
int main(){
    int a = 10;   
    int b = 5;    
    int sum, diff, product, quotient; 
    sum = a + b;             
    diff = a - b;             
    product = a * b;          
    quotient = a / b;         
    printf("Tong cua %d và %d là: %d\n", a, b, sum);
    printf("Hieu cua %d và %d là: %d\n", a, b, diff);
    printf("Tích cua %d và %d là: %d\n", a, b, product);
    printf("Thuong cua %d và %d là: %d\n", a, b, quotient);

    return 0;
}
