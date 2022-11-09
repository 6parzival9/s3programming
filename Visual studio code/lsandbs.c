#include<stdio.h>
 int n;
 //linear search
void linear(int a[n]){
    printf("\nEnter the number: ");
  int l;
  scanf("%d",&l);
  int flag=0;
  for (int i = 0; i < n; i++)
  {
    if(l==a[i])
    flag=i;
  }
  if (flag!=0)
  
    printf("number found at position %d",flag++);
    else 
    printf("not found");
  
  
}


void main()
{
 printf("Enter the size of the array: ");

 scanf("%d",&n);
 int a[n];
 for(int i;i<n;i++)
  scanf("%d",&a[i]);
     printf("1)To do a linear search on array\n2)To perform a bubble sort \n Enter the value:\t");
     int x;
     scanf("%d",&x);
  switch (x)
  {
  case 1:
    linear(a);
    break;
//   case 2:
    //  bubble(a,n);
    //  break;
  default:
  printf("404 not found");
    break;
  } 
}






