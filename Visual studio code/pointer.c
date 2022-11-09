#include<stdio.h>
void main()
{
 int a[]={1,2,3,4,5,6,7,8,9,10};
 int *i,*j;
 i=&a[4];
    j=(a+4);
    printf("%d %d",*i,*j);






}