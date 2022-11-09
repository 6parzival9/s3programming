#include<stdio.h>
    int n;

//linear search
        
        void linear(int a[n],int key){  
        int flag==0;
                for(int i=0; i<n;i++)
                { if(a[i]==key)
            {    flag==i;
                break;
                }
                 }
    if(flag!=0)
            printf("Element found at %d",flag);
    else
            printf("Element not found");
            
}
//sort 
void sort(int a[n])
{
   int temp;
   for(int i=0;i<n;i++)
   for(int j=0;j<n-1;j++)
    if(a[j]>a[j+1])
    {
        temp=a
    }
}