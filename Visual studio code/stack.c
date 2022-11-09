#include<stdio.h>
 int i=0,j=0,k=1,a[10][10],b[10][10],s[10][10],m,n;

void display(int x[][10],int o,int p){
           for(i=0;i<o;i++)
            {for(j=0;j<p;j++)
                printf("%d\t",x[i][j]);
 printf("\n");
            }
}
void trip(){
            for(i=0;i<m-1;i++)
            {for(j=0;j<n-1;j++)
                {    if(a[i][j]!=0){
            s[k][0]=i;
            s[k][1]=j;
            s[k][2]=a[i][j];    
                }     
            j++;
            k++;   
            }
            i++;        
            }
        s[0][0]=m;
        s[0][1]=n;
        s[0][2]=k-1;
        printf("%d",s[k][3]);
        display(s,k,3);
        }
void read(){
                printf("Enter the first array: \n");
            for(i=0;i<m;i++)
            {for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
            }
            display(a,m,n);
   printf("Enter the second array: \n");
            for(i=0;i<m;i++)
            {for(j=0;j<n;j++)
                scanf("%d",&b[i][j]);
            }
            display(b,m,n);
}
void main(){
                printf("Enter the Array row: ");
                scanf("%d",&m);
                printf("Enter the Array column: ");
                scanf("%d",&n);
            read();
            trip();
}









