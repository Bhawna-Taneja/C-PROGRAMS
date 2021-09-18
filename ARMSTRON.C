#include<stdio.h>
#include<conio.h>

void main()
{
 int n,p,q,r,a;
 clrscr();
 printf("enter a 3 digit no:",n);
 scanf("%d",&n);
 p=n%10;
 q=n/10;
 r=q%10;
 q=q/10;
 a=p*p*p+q*q*q+r*r*r;
 if(n==a){
  printf("%d is armstrong no",n);
 }
 else{
 printf("%d is not armstrong no",n);
 }
 getch();
}
