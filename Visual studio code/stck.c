#include<stdio.h>
int max= 5;
int s[10],top=-1;
int full(){
    if(top==max-1)
        return 1;
    else 
        return 0;
}
int empty()
{
        if  (top==-1)
            return 1;
        else
            return 0;
}
int push (int n){
        if(full()){
            printf("Stack overflow");
            return 0;
        }
        else 
            {
            top++;
            s[top]=n;
            }
                }
int pop(){
        if (empty())
            {
                printf("Underflow");
                return 0;
            }
        else
            {
                int item=s[top];
                printf("%d is the element to be deleted ",item);
                top--;
                printf("pop successfull ");
            }
}
void display(){
            for(int i=0;i<=top;i++)
            printf("%d  ",s[i]);
    }
void main(){
            int c,n;
                do{
                        printf("\n1)Push\n2)pop\n3)traverse\n0.exit\n");
                        scanf("%d",&c);
                        switch (c)
                        {
                        case 1:
                            printf("Element ");
                            scanf("%d",&n);
                            push(n);
                            break;
                        
                        case 2:
                            pop();
                            break;

                        case 3:
                            display();
                            break;

                        default:
                            break;
                        }
                    }
                while(c!=0);
}


