#include<stdio.h>
int main()
{
    int a=10;
    float b=145.78;
    char c='&';
    void *vptr;
    vptr=&a;
    printf("\n the adress of a:%p",vptr);
    printf("\n the value of a using vptr:%d",*((int *)vptr));
    vptr=&b;
    printf("\n the adress of b:%p",vptr);
    printf("\n the value of b using vptr:%.2f",*((float *)vptr));
    vptr=&c;
    printf("\n the adress of c:%p",vptr);
    printf("\n the value of c using vptr:%c",*((char *)vptr));
    return 0;
}