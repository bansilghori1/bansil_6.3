//Q.2 Write a Program to print the factorial of number N using for loop.

#include<stdio.h>
#include<conio.h>

void main (){

int n,a,s,b=1;
printf("enter any num  :  ");
scanf("%d",&n);

for(a=1;a<=n;a++){
s=a*b;
b=s;
}

printf("the factorial is %d",b);


getch();
}
/*
input: enter any num : 5

output: 120
*/