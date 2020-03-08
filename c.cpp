#include<stdio.h>

struct stu{
    int name;  //姓名
} stu1;

void assign() {
    int a = 5;
    int b = a;
    int *c = &a;
    int *d = &b;
    printf("hello world13 a = %p b = %p", c, d);
    stu1.name = 11;
    stu stu2 = stu1;
    printf("hello world13 stu1 = %p stu2 = %p", &stu1, &stu2);
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

void swapWrapper1() {
    int a = 1;
    int b = 2;
    swap(1, 2);
    printf("swap hello world13 a = %d b = %d \n", a, b);
}

void swapWrapper2() {
    int c = 1;
    int d = 2;
    int* pc = &c;
    int* pd = &d;
    swap2(pc, pd);
    printf("swap2 hello world13 c = %d d = %d \n", c, d);
}

void reference1(int &a) {
    int b = 10;
    a = 20;
    printf("swap2 hello world13 a = %d b = %d \n", a, b);
}

void reference() {
    int a = 5;
    int &b = a;
    reference1(b);
    printf("swap2 hello world13  b = %d \n", b);

}


int main() {
//    assign();
    reference();
   return 0;
}
