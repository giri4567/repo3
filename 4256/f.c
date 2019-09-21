#include<at89c51xd2.h>
#include<stdio.h>
void main()
{
	int a=0x100,b=0x200;
	P0=a+b;
	P1=a-b;
	P2=a*b;
	P3=a/b;
}