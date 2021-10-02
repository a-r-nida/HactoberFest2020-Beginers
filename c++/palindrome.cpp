#include <iostream>
using namespace std;

int main()
{
     int Num, digit, reverse = 0, check;

     cout << "Enter a positive number: ";
     cin >> Num;

     check = Num;

     while(Num != 0)
     {
         digit = Num % 10;
         reverse = (reverse * 10) + digit;
         Num = Num / 10; 
     }

     cout << " The reverse of the given number is:- " << reverse << endl;

     if (check == reverse)
         cout<<endl<<"*** The number is a palindrome. ***";
     else
         cout<<endl<<"*** The number is not a palindrome. ***";

    return 0;
}