#include<stdio.h>
#include<conio.h>
void main(){
int a=1;
int n;
clrscr();
printf("Enter the value of A:");
scanf("%d",&n);
do{
if(a%2==0)
printf("Even numbers : %d\n",a);
a++;
}while(a<=n);
getch();
}
