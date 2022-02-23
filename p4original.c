#include<stdio.h>
#include<math.h>
int inout()
{
  int num;
  printf("enter a number\n");
  scanf("%d\n",&num);
  return num;
}
int find_fibo(int n)
{
  int i,j,k,f;
  if(int i=0,j=1,k;k<n-2,k++)
  {
    if(n==1)  
    {
      f=0;
    }
    else if(n==2)
    {
      f=1;
    }
    else
    {
      f=i+j;
      i=j;
      j=f;
    }
  }
  return f;
}
void output(int n,int is_prime)
{
  printf("the %dth term of fibonacci series is %d",n,f)
}
int main()
{
  int n;
  n=input();
  int f;
  f=find_fibo(n);
  output(n,f);
  return 0;
}