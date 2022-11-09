#include<stdio.h>
int a[10][10],b[10][10],c[10][10],s1[15][3],s2[15][3],r[15][3];
int r1,r2,c1,c2,re;
void read(int d[10][10],int s,int t);
int convo(int d[10][10],int q[15][3],int s, int t);
void add(int m,int n);
void displayMat(int d[10][10],int s,int t);
void displaySpar(int d[15][3],int s,int t);
void main()
{
int i,j,k=1;
printf("ENTER THE NUMBER OF ROWS AND COLUMNS FOR FIRST MATRIX :- ");
scanf("%d%d",&r1,&c1);
printf("ENTER THE NUMBER OF ROWS AND COLUMNS FOR SECOND MATRIX :- ");
scanf("%d%d",&r2,&c2);
if(r1==r2&&c1==c2)
{
printf("Enter the first matrix\n");
read(a,r1,c1);
printf("Enter the second matrix\n");
read(b,r2,c2);
printf("The first matrix\n");
displayMat(a,r1,c1);
printf("The second matrix\n");
displayMat(b,r2,c2);
int t1=convo(a,s1,r1,c1);
printf("Sparse of First Matrix :-\n");
displaySpar(s1,t1,3);
int t2=convo(b,s2,r2,c2);
printf("Sparse of Second Matrix :-\n");
displaySpar(s2,t2,3);
printf("The Resultant Sparse Matrix is :-\n");
add(t1,t2);
displaySpar(r,re,3);
printf("The Resultant Matrix is :-\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
if(r[k][0]==i&&r[k][1]==j)
{printf("%d\t",r[k][2]);
k++;}
else
printf("0\t");
}
printf("\n");
}
}
else
printf("INVALID INPUT\n");
}
void read(int d[10][10],int s,int t)
{
int i,j;
for(i=0;i<s;i++)
for(j=0;j<t;j++)
scanf("%d",&d[i][j]);
}
void displayMat(int d[10][10],int s, int t)
{
int i,j;
for(i=0;i<s;i++)
{
for(j=0;j<t;j++)
{
printf("%d\t",d[i][j]);
}
printf("\n");
}}
void displaySpar(int d[15][3],int s, int t)
{
int i,j;
for(i=0;i<s;i++)
{
for(j=0;j<t;j++)
{
printf("%d\t",d[i][j]);
}
printf("\n");
}}
int convo(int d[10][10],int q[15][3],int s, int t)
{
int i,j,k=1;
for(i=0;i<s;i++)
{
for(j=0;j<t;j++)
{
if(d[i][j]==0)
continue
;
else {
q[k][0]=i;
q[k][1]=j;
q[k][2]=d[i][j];
}k++; }}
q[0][0]=s;
q[0][1]=t;
q[0][2]=k-1;
return (k); }
void add(int m,int n) {
int i=1,j=1,k=1;
while(i<m&&j<n) {
if(s1[i][0]<s2[j][0])
{
r[k][0]=s1[i][0];
r[k][1]=s1[i][1];
r[k][2]=s1[i][2];
k++;
i++; }
if(s1[i][0]>s2[j][0])
{
r[k][0]=s2[j][0];
r[k][1]=s2[j][1];
r[k][2]=s2[j][2];
k++;
j++; }
if(s1[i][1]<s2[j][1])
{
r[k][0]=s1[i][0];
r[k][1]=s1[i][1];
r[k][2]=s1[i][2];
k++;
}
printf("\n");
}}
void displaySpar(int d[15][3],int s, int t)
{
int i,j;
for(i=0;i<s;i++)
{
for(j=0;j<t;j++)
{
printf("%d\t",d[i][j]);
}
printf("\n");
}}
int convo(int d[10][10],int q[15][3],int s, int t)
{
int i,j,k=1;
for(i=0;i<s;i++)
{
for(j=0;j<t;j++)
{
if(d[i][j]==0)
continue
;
else {
q[k][0]=i;
q[k][1]=j;
q[k][2]=d[i][j];
}
k++; }}
q[0][0]=s;
q[0][1]=t;
q[0][2]=k1;
return (k); }
void add(int m,int n) {
int i=1,j=1,k=1;
while(i<m&&j<n) {
if(s1[i][0]<s2[j][0])
{
r[k][0]=s1[i][0];
r[k][1]=s1[i][1];
r[k][2]=s1[i][2];
k++;
i++; }
if(s1[i][0]>s2[j][0])
{
r[k][0]=s2[j][0];
r[k][1]=s2[j][1];
r[k][2]=s2[j][2];
k++;
j++; }
if(s1[i][1]<s2[j][1])
{
r[k][0]=s1[i][0];
r[k][1]=s1[i][1];
r[k][2]=s1[i][2];
k++;