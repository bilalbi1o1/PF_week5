#include<iostream>
using namespace std;
int numb(int num);
void words(int num);
int main()
{
  int num;
  int result;
  cout<<"Enter a number :";
  cin>>num;

  numb(num);

  if(num>19)
  {
    words(num);
    result=num%10;
    numb(result);
  }
}
void words(int num)
{
  
    int quotient=num/10;
    if(quotient==2)
    {
        cout<<"Twenty ";
    }

    if(quotient==3)
    {
        cout<<"Thirty ";
    }
    
    if(quotient==4)
    {
        cout<<"Fourty ";
    }
    
    if(quotient==5)
    {
        cout<<"Fifty ";
    }
    
    if(quotient==6)
    {
        cout<<"Sixty ";
    }
    
    if(quotient==7)
    {
        cout<<"Seventy ";
    }
    
    if(quotient==8)
    {
        cout<<"Eighty ";
    }
    
    if(quotient==9)
    {
        cout<<"Ninety ";
    }  

  }

int numb(int num)
{

if(num==1)
cout<<"one";
if(num==2)
cout<<"two";
if(num==3)
cout<<"three";
if(num==4)
cout<<"four";
if(num==5)
cout<<"five";
if(num==6)
cout<<"six";
if(num==7)
cout<<"seven";
if(num==8)
cout<<"eight";
if(num==9)
cout<<"nine";
if(num==10)
cout<<"ten";

return 0;


}