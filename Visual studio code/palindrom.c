#include<stdio.h>
#include<conio.h>
int main(){
  system("color 2A");
    printf("To print palindrome of a number \n Enter the number:  ");
     int a;
     scanf("%d",&a);
     int sum=0, dup=a;
    for(int i=a;i >0;i/=10)
    {
        sum=sum*10+i%10;
            }
  printf("Please wait until we check whether the number is palindrom or not");
    for(int i=1;i<4;i++){
      sleep(1);
      printf(".");
        sleep(1);
        }
                   printf("\r");
            if(sum == dup)
        printf("The number is palindrome %d                                                                                                                 ",sum);
        else
    printf("The number isn't palindrome %d                                                                                                                ",sum);
        
          return 0;
    } 