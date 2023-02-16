#include<vector>

bool isValidWalk(std::vector<char> walk) {
  int horizont=0,vertic=0;
  if(walk.size()==10)
  {
    for (int i =0; i<walk.size() ; i++)
    {
      switch(walk[i])
      {
       case 'n':
          vertic++;
          break;
       case 's':
          vertic--;
          break;
       case 'w':
          horizont++;
          break;
       case 'e':
          horizont--;
          break;
      }
    }
    if(horizont==0 && vertic==0)
    {
     return true; 
    }
    else
    {
     return false; 
    }
  }
  else
  {
   return false;  
  }
}