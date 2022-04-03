#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter the numbers\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *area)
{
  *area=sqrt(pow((x2-x1),2)+(pow((y2-y1),2));
}
void output(float x1,float y1,float x2,float y2,float area)
{
  printf("the distance between %f,%f and %f,%f is %f",x1,y1,x2,y2,area);
}
int main()
{
  float a,b,c,d,ar;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&ar);
  output(a,b,c,d,ar);
  return 0;
}