    #include <stdio.h>
    int main(){
        long long int num,n,i,k,temp,exit=0;
        printf("Number of test case:\n");       
        scanf("%lld", &num);              	                  
        do{
        printf("Enter the size of array: ");
        scanf("%lld",&n);
        long long int a[n],b[n];
        printf("Number of steps of rotations: ");
        scanf("%lld",&k);
        printf("Enter the array");
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        for(i=0;i<n-k;i++)
        {
            b[i+k]=a[i];
            printf("b=%lld",b[i+k]);
        }
        temp=i;
        for(i=0;i<k;i++)
        {
        b[i]=a[temp];
        temp++;
        } 
        printf("\n--------------\nThe new array is: ");
        for(i=0;i<n;i++)
        printf("%lld ",b[i]);
        exit++; 
    }while(exit!=num);
    }