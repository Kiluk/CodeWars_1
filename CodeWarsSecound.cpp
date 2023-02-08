#include <iostream>
#include <string>
using namespace std;

int solution(int number) 
{
  int sum=0;
  if(number > 0)
  {
    for(int i = number-1; i > 0; i--)
    {
      if(i%5==0||i%3==0)
      {
        sum+=i;
      }
    }
  }
  return sum;
};

int main()
{
    int number = 10;
    solution(number);
}