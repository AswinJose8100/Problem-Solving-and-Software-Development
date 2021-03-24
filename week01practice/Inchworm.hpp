#include <iostream>
using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    // your code for the problem
    int res;
    int max_value=0;
    max_value = (rest > leaf) ? rest : leaf;

    do
    {
        if (max_value % rest == 0 && max_value % leaf == 0)
        {
            break;
        }
        else
            ++max_value;
    } while (true);
    res=(branch/max_value)+1;

    return res;  // return your result
  }
};

