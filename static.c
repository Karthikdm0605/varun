#include<stdio.h>
int func();
int main()
{
func();
func();
}
int func()
{
	static int a=10;
a++;
printf("%d\n",a);
}
