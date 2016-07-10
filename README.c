# tower
#include<stdio.h>
#include<conio.h>
void TOH(int n,char x,char y,char z);

void main() {
 int n;
 printf("\nEnter number of plates:");
 scanf("%d",&n);
 TOH(n,'A','B','C');
 getch();
}

void TOH(int n,char x,char y,char z) {
 if(n>0)
 {
  TOH(n-1,x,z,y); // Recursive call 1 
  printf("\n%c -> %c",x,y);
  TOH(n-1,z,y,x); // Recursive call 2
 }
}
