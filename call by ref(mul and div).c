//swapping of two no's by using call by reference(mul and div)
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a=10,b=20;
    printf("\n values before swapping \n");
    printf("a=%d and b=%d",a,b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\n values after swapping \n");
    printf("a=%d and b=%d",a,b);
    return 0;
}
