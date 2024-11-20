#include<stdio.h>
#define PI 3.14 
int main() {
    float radius = 4;   
    float circumference, area;  
    circumference = 2 * PI * radius; 
    area = PI * radius * radius;     
    printf("Bán kính hinh tron là: %.2f\n", radius);
    printf("Chu vi hinh tron là: %.2f\n", circumference);
    printf("Dien tích hinh tron là: %.2f\n", area);
	return 0;
}
