#include<stdio.h>
char string[100],substring[50];
int length1,length2;
void main(){
    read();
    int i,count;
    for(int j=0;j<length2;j++)
    {    printf("\n%csubstring\n",substring[j]);
        for(i=0;i<length1;i++)
        if(string[i]==substring[j])
          { printf("\n%csubstring\n",substring[j]);

       count++;
    }
    }
    if(count==length2)
    {printf("\nvalid substring\n");
    puts(substring);
    }
}
int length(int l){
     if(l==0){
    for(int i=0;i<100;i++){
    if(string[i]!='\0')
    l++;
    return l; 
    }
}
    else{
    l=0;
    for(int i=0;i<100;i++)
    if(substring[i]!='\0')
    l++;
    return l;  

    }
}
void read(){
    printf("Enter the string\n");
        gets(string);
        puts(string);
    length1=length(0);
    
    printf("Enter the substring\n");
        gets(substring);
        puts(substring);
    length2=length(1);
   printf("%d",length2);
}