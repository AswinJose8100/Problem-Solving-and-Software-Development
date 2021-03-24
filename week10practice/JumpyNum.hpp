#include<bits/stdc++.h> 

using namespace std;

class JumpyNum
{public:


   int howMany(int small,int big) 
  { 
    return func(small,big,0,-1); // function call for func
  }

  
  int func(int small,int big,int present,int val) 
  { 
    int num1;
    int final;
    int m;
    int num2;
    int num3;
    int num4;
    
    num1=big/10;
    final=0;
    m=0;// loop index

    if(num1<present)
    {
      return 0;
    }

    present=present*10;

    while(m<10) 
    { 
      num2=m-val;
      num3=present+m;

      if(num2<0)
      {
        num2=num2*(-1);
      }

      if(num2>=2&&num3<=big)

      { 
        if(num3>=small)
        {
          final=final+1;
        }
        num4=func(small,big,num3,m);// recursive call

        final=final+num4; 
      }

      m=m+1;// incrementing loop index

    }

    return final; 

  } 

  

  
}; 
