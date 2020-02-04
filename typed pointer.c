#include<stdio.h>
int main()
{
    int a=10;
    char b='$';
    float c=145.78;
    int *aptr;
    char *bptr;
    float *cptr;
    aptr=&a;
    bptr=&b;
    cptr=&c;
    printf("\n the value of a using aptr =%d",*aptr);
    printf("\n the address of a using aptr =%p",aptr);
    printf("\n the value of b using bptr =%c",*bptr);
    printf("\n the address of b using bptr =%p",bptr);
    printf("\n the value of c using cptr =%.2f",*cptr);
    printf("\n the address of c using cptr =%p",cptr);
    return 0;
}