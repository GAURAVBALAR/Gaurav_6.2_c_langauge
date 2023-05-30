#include<stdio.h>
#include<conio.h>
void main()
{
int number;
int i;
int first=-1;
int second=1;
int next;
clrscr();
printf("Enter the value of A:");
scanf("%d",&number);
for(i=1;i<=number;i++){
 next=first+second;
first=second;
second=next;
printf("%d\n",next);

}
getch();
}