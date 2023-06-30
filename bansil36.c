//Q.3 Write a Program to print the multiplication table of the number N using any type of loop.

#include<stdio.h>
#include<conio.h>

void main (){

int n,a,s;
printf("enter any num:  ");
scanf("%d",&n);

for(a=1;a<=10;a++){
s=a*n;
printf("%d X %d = %d\n",n,a,s);
}

getch();
}
/*
input: enetr any num : 5

output:
5 X 1 = 5
5 X 2 = 10
5 X 3 = 15
5 X 4 = 20
5 X 5 = 25
5 X 6 = 30
5 X 7 = 35
5 X 8 = 40
5 X 9 = 45
5 X 10 = 50

*/