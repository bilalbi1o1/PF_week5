#include <iostream>
using namespace std;
int reverse(int num);

int main()
{
     int num;
     cout << "Enter a positive number: ";
     cin >> num;
    reverse(num);
    
}

int reverse(int num)
{
     int n, digit, rev = 0;

     

     n = num;
     
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
        
        digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
        
        digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
  
     if (n == rev)
         cout << " The number is symmetrical";
     if(n != rev)
         cout << " The number is not symmetrical.";

    return 0;
}