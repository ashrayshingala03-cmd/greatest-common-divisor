#include<stdio.h>
int main() {
  it a,b, temp;
printf("enter 2 no.s:");
scanf("%d %d, &a, &b");
while(b!=0){
temp=b;
b=a%b;
a=temp;
}
printf("GCD is: %d\n", a);
return 0;
}
