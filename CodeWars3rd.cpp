#include <iostream>
#include <string>
using namespace std;

bool isPrime(int num) {
  if(num>1)
  {
    if(num%2!=0)
    {
      for(int n=1; n < num/3; n++) 
      {
        if ((num % (2*n+1) == 0) && ((2*n+1) !=num))
        {
          return false;  
        }
      }
      return true;
    }
    else
    {
        return true;
    }
  }
  else
  {
    return false;
  }
}


int main()
{
    cout << isPrime(27);
    cout << isPrime(271);
    cout << isPrime(1193);
    cout << isPrime(7777);
    cout << isPrime(3327);
    cout << isPrime(1323);
}