//adding of two no's without using arithmetic operators
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int a=10,b=20;
    while(b!=0)
    {
        a++;
        b--;
    }
    printf("%d",a);
    return 0;
}