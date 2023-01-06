#include <iostream>
using namespace std;
int evenoddish(int num);

int main()
{
     int num;
     cout << "Enter a positive number: ";
     cin >> num;
     evenoddish(num);
    
}

int evenoddish(int num)
{
     int n, digit,total=0;

     num;
     
         digit = num % 10;
         total = total + digit;
         num = num / 10;
        
        digit = num % 10;
         total = total + digit;
         num = num / 10;
        
        digit = num % 10;
         total = total + digit;
         num = num / 10;
        
        digit = num % 10;
         total = total + digit;
         num = num / 10;
        
        digit = num % 10;
         total = total + digit;
        
  
      if(total%2 == 0)
         cout << " The number is Evenish";
      if(total%2 !=0)
         cout << " The number is Oddish";

    return 0;
}