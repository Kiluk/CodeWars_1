#include <vector>
#include <iostream>
using namespace std;

std::vector<int> move_zeroes(const std::vector<int>& input) {
  int temp;
  std::vector<int> inputTemp;
  inputTemp = input;
  for(int i =0 ; i < input.size()-1;i++)
  {
    int j = 1;
    while (inputTemp[i]==0)
    {
      while(inputTemp[j]==0)
      {
        j++;
      }
      if(i+j>=input.size())
      {
        break;
      }
      temp = inputTemp[i+j];
      inputTemp[i+j] = inputTemp[i];
      inputTemp[i] = temp;
    }
  }
  return inputTemp;
};

void print(std::vector<int> const &input)
{
    for (auto it = input.cbegin(); it != input.cend(); it++) {
        std::cout << *it << ' ';
    }
}

int main()
{
    std::vector<int> test = {1, 2, 0, 1, 0, 1, 0, 3, 0, 1};
    print(move_zeroes(test));
}
