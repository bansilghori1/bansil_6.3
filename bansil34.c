//Q.1 Write a Program to print the sum of all numbers from 1 to N using for loop.

#include<stdio.h>
#include<conio.h>

void main (){

int n,a,s,b=0;
printf("enter any num  :  ");
scanf("%d",&n);

for(a=1;a<=n;a++){
s=a+b;
b=s;
}

printf("the sum is  %d",b);


getch();
}
/*
inpute: enter any num : 8

output: 36

*/











