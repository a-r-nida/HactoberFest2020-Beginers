#include<stdio.h>
#include<string.h>
#include<conio.h>
void main(){
    char str[1000],ch;
    int i,len,cnt[26] = {0};
    clrscr();
    printf("Enter Any String : ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len; i++){
	if(str[i]>= 65 && str[i] <= 90){
	    cnt[str[i] - 65]++; }
	else if(str[i] >= 97 && str[i] <= 122){
	    cnt[str[i] - 97]++; }}
    printf("\nThe Different Types Of Characters Are: \n");
    for(ch = 65,i = 0; ch <= 90; ch++,i++){
	if(cnt[i] != 0)
printf("\n%c Counted %d %s.",ch,cnt[i],(cnt[i] > 1) ? "Times" : "Time");
    }
    getch();
}