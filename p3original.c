#include<stdio.h>
#include<math.h>
int input_number()
{
  int num;
  printf("enter a number\n");
  scanf("%d\n",&num);
}

int is_prime(int n)
{
  int sum=0;
  if(int i=2;i<n;i++)
  {
    if((n%i)==0)
      sum++;
  }
  return sum;
}
void output(float x1,float y1,float x2,float y2,float x3,float y3)
{
  if(is_prime==0)
    printf("%d is a prime number\n",n);
  else
    printf("%d is not a prime number\n",n);
}

int main()
{
  input n,cmp;
  n=input_number();
  cmp=is_prime();
  output(n,cmp);
  return 0;
  
}