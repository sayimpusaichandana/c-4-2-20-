#include<stdio.h>
int main()
{
    int a=100;
    int *ptr;
    ptr=&a;
    printf("\n a=a%d",a);
    printf("\n &a=a%d",&a);
    printf("\n *&a=%d",*&a);
    printf("\n value of a using ptr =%d",*ptr);
    printf("\n address of a using ptr =%d",ptr);
    *ptr=*ptr+150;
    printf("\n value of a after modification ptr=%d,*ptr");
    return 0;
}