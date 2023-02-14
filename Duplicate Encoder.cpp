#include <iostream>
#include <string>
using namespace std;

std::string duplicate_encoder(const std::string& word){
  int count;
  std::string a;
  char temp[word.size()];
  for(int i =0; i < word.size(); i++)
  {
    count = 0 ;
    for(int j =0;j<word.size(); j++)
    {
       if(word[i]==word[j])
       {
         count++;
       }
      else if ((word[i]>=65 && word[i]<=90) && word[i]+32==word[j])
      {
        count++;
      }
      else if ((word[i]>= 97 && word[i]<= 122) && word[i]-32==word[j])
      {
        count++;
      }
    }
    if(count>1)
      {
         temp[i] = 41;
      }
      else
      {
        temp[i] = 40;
      }
  }
  a = temp;
  return a;
};

int main()
{
    std::string test1 = ("(( @");
    cout << duplicate_encoder(test1);
}