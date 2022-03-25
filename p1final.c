#include <stdio.h>
#include<math.h>
float input_radius()
{
  float radius;
  printf("enter the radius of tummy\n");
  scanf("%f",&radius);
  return radius;
}
float input_height()
{
  float height;
  printf("enter the height of camel\n");
  scanf("%f",&height);
  return height;
}
float input_length()
{
  float length;
printf("enter the length of camel\n");
  scanf("%f",&length);
  return length;
  }
float find_weight(float radius,float height,float length)
{
  float weight;
  weight=(3.14*(radius*radius*radius)*sqrt(height*length));
    return weight;
  }
void output(float radius, float height,float length,float weight)
{
  printf("the weight of the camel is %f\n",weight);
}
int main()
{
float radius,length,weight,height;
radius=input_radius();
height=input_height();
length=input_length();
weight=find_weight(radius,height,length);
output(radius,height, length, weight);
return 0;
}

  
