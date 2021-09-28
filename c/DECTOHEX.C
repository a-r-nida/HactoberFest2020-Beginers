#include<stdio.h>    
#include<conio.h>
void main(){
int a[10],n,i;
clrscr();
printf("Enter the number to convert: ");
scanf("%d",&n);
for(i=0;n>0;i++)
{
a[i]=n%16;
n=n/16;
}
printf("\nHex of Given Number is=");
for(i=i-1;i>=0;i--)
{
printf("%d",a[i]);
}
getch();
}