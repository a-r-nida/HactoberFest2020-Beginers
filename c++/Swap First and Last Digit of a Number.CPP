#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char num[15],temp[2];
int i=0,len;
clrscr();

cout<<"ENTER THE NUMBER: ";
cin>>num;
len=strlen(num);
temp[i]=num[len-1];
temp[i+1]=num[i];
num[i]=temp[i];
num[len-1]=temp[i+1];

cout<<"After Swaping First And Last Digit: "<<num;
		getch();
	}
