#include<stdio.h>

int input_number()
{
  int n;
  printf("enter a number\n");
  scanf("%d\n",&n);
}

int is_prime(int n)
{
  for(int i=1;i<=n;i++)
  {
    if(n%i==0) ;  
  }
  return 0;
}
void output(int n,int is_prime)
{
  if(is_prime==0)
  {
    printf("%d is a prime number\n",n);
  }
  else
  {
    printf("%d is not a prime number\n",n);
  }
}

int main()
{
  int n,c;
  n=input_number();
  c=is_prime(n);
  output(n,c);
  return 0;
  
}