#include <iostream>
#include <string>

using namespace std;

class MagicSpell{
public:
  string fixTheSpell(string spell)
  {
      string input=spell;
      int length=spell.length();
      int l;
      int m;
      int val=length-1;
      l=0;

      while(l<length)
      {
        if(input[l]=='A'||input[l]=='Z')
         {
              
             for(m=val;m>=0;m--)
             {
                if(spell[m]=='A'||spell[m]=='Z')
                 {
                   input[l]=spell[m];
                   val=m-1;
                   break; 
                 }
                  

             }       
         }
         l++;
      }
      return input;
  }
};