#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("enter a number\n");
  scanf("%f\n",x1);
  printf("enter a number\n");
  scanf("%f\n",y1);
  printf("enter a number\n");
  scanf("%f\n",x2);
  printf("enter a number\n");
  scanf("%f\n",y2);
}

void find_distance(float x1,float y1,float x2,float y2,float *distance)
{
  *distance= sqrt(pow((x2-x1),2)+pow((y2-y1),2));
}

void output(float x1,float y1,float x2,float y2,float distance)
{
  printf("distance between two points is %f\n",distance);
}

int main()
{
  float x1,y1,x2,y2 ,distance;
  input(&x1,&y1,&x2,&y2);
  find_distance(x1,y1,x2,y2,&distance);
  output(x1,y1,x2,y2,distance);
  return 0;
}