#include<stdio.h>

void assign() {
    int a = 5;
    int b = a;
    int *c = &a;
    int *d = &b;
    printf("hello world13 a = %p b = %p", c, d);
}

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("swap hello world13 a = %d b = %d \n", a, b);
}

void swap2(int* c, int* d) {
    int temp = *c;
    *c = *d;
    *d = temp;
    printf("swap2 hello world13 c = %d d = %d \n", *c, *d);
}

int main() {
//    assign();
    int a = 1;
    int b = 2;
    swap(1, 2);
    printf("swap hello world13 a = %d b = %d \n", a, b);
    int c = 1;
    int d = 2;
    int* pc = &c;
    int* pd = &d;
    swap2(pc, pd);
    printf("swap2 hello world13 c = %d d = %d \n", c, d);
}
