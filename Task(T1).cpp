#include<iostream>
#include<cmath>
using namespace std;
float heigh(float distance,float degree,float height);
int main()
{
float base;
float degree;

cout<<"Enter base :";
cin>>base;
cout<<"Enter degrees :";
cin>>degree;

float height=heigh(base,degree,height);
cout<<"Height is "<<height;
}
float heigh(float distance,float degree,float height)
{
float radian=57.2985;
float radians=degree/radian;
float angle=tan(radians);
      height=angle*distance;
return height;
}
