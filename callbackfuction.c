#include<stdio.h>
int add(int a,int b)
{
int sum =a+b;
return sum;
}
int callback(int(*func)(int,int) ,int n)
{
int result=func(5,3)+n;
return result;
}
int main()
{
printf("%d",callback(add,7));

}
