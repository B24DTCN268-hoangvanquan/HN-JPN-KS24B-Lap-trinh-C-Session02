#include<stdio.h>
int main(){
	 int length = 6;  
    int width = 3;    
    int perimeter, area;     
    perimeter = 2 * (length + width);  
    area = length * width;                 
    printf("Chieu d�i hinh chu nhat l�: %d\n", length);
    printf("Chieu rong hinh chu nhat l�: %d\n", width);
    printf("Chu vi hinh chu nhat l�: %d\n", perimeter);
    printf("Dien t�ch hinh chu nhat l�: %d\n", area);
	return 0;
}
