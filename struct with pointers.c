//structures with pointers
#include<stdio.h>
struct book
{
    char name[100];
    int pages;
    float price;
}b;
int main()
{
    struct book *bptr;
    bptr=&b;
    printf("enter the name,pages,price of the book");
    scanf("%s%d%f",&bptr->name,&bptr->pages,&bptr->price);
    printf("\nbook details");
    printf("\n name:%s",bptr->name);
    printf("\n pages:%d",bptr->pages);
    printf("\n price:%.2f",bptr->price);
    return 0;
}