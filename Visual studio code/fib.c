#include<stdio.h>
int palindrom(int n)
{
    if(n<10)
        return n;
    else
        return palindrom((n%10)*10)+palindrom(n/10);
}
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n);
    i=palindrom(n);
    if(i==n)
        printf("The number is palindrome %d",i);
    else
        printf("The number isn't palindrome %d",i);
    return 0;
}
