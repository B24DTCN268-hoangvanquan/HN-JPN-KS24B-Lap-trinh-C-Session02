#include<stdio.h>
int main(){
	 int length = 6;  
    int width = 3;    
    int perimeter, area;     
    perimeter = 2 * (length + width);  
    area = length * width;                 
    printf("Chieu dài hinh chu nhat là: %d\n", length);
    printf("Chieu rong hinh chu nhat là: %d\n", width);
    printf("Chu vi hinh chu nhat là: %d\n", perimeter);
    printf("Dien tích hinh chu nhat là: %d\n", area);
	return 0;
}
