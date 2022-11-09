#include<stdio.h>
#include<string.h>

int main()
{
    char s[100],k[15];
    int w,i;                                 //w is for counting spaces: no. of words=no. of space+1 
    printf("Enter the main sentence:");
    gets(s);
    int l=strlen(s);
    for(i=0; i<l; i++){
        if(s[i]==' ')
            w++;
        }

    printf("Enter a word for searching:");
    gets(k);
    int lk=strlen(k);

    int m,j=-1,f=0, p[lk];        //Array p is for storing index of concerned word as a number array. Using array p we can replace a word

    for(i=0;i<=w && f==0 ;i++){   //Repeatation of this outer for loop = no. of word , each iteration checks for word to be searched.
                                  //if f==1, it means that we already found the word, so no need for next iteration 
        
        j++;
        for(m=0 ; s[j]!=' ' && s[j]!='\0' ;j++,m++){   //If white space reached, it means end of the word. if \0 reached it means end of main sentence.
            if(s[j]==k[m]){
                f=1;
                p[m]=j;
            }
            else{
                f=0;
                while(s[j]!=' ' && s[j]!='\0'){        //At any point if no matching occured we have completely skip the word
                    j++;
                }
                break;
            }
        }
    }
    int u=p[0]+1 , v= l-(p[lk-1]);                    //IF required word is found, we have to split the array for replacing new word.
    char r[15],t1[u],t2[v],F[100];

    if(f==1){
        printf("Found the word\n");
        printf("Enter a word for replacement:");
        gets(r);
        printf("\n");
        
        for(i=0 ; i<=(p[0]-1) ; i++){
            t1[i]=s[i];
            }
         
         t1[u-1] = '\0';  
        strcpy(F,t1);
        strcat(F,r);
        
        int a=0;
        for(j=((p[lk-1])+1) ; j<l ; j++){
            t2[a]=s[j];
            a++;
        }
         t2[v-1]='\0';
        strcat(F,t2);
        puts(F);
        }
    else
        printf("Can't find the word");

return 0;
}