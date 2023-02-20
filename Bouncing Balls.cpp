using namespace std;
class Bouncingball
{
public:
    static int bouncingBall(double h, double bounce, double window)
    {
      int counter = 1;
      double hight = h;
      if(h>0 && (bounce > 0 && bounce <1)&& window < h)
      {
        while (hight>window)
        {
          counter+=2;
          hight *= bounce;
        }
        return counter;
      }
      else 
      {
       return -1; 
      }
    };
};

int main()
{
    
}