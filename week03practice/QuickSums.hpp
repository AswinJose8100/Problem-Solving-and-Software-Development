#include <iostream>
#include <string>

 
using namespace std;
 
class  QuickSums

{

public:

int arr[15];
int add;
char c;
string input;
int point;
int small;


int func(int size,int beg)
{
  int a;
  long long final;
  int b;
  long long var;
  int n;
 
  if(beg==add)
  {
      
    n=0;
    final=0; 
    a=0;
    
    while(a<size)
    {
      
      var=input[n]-'0';
      b=n+1;
      
      while(b<=arr[a])
      {
        var=var*10+(input[b]-'0');
        b=b+1;
        
      }
      
      final=final+var; 
      n=arr[a]+1;
      a++;
    }
    
    if(final==point)
    {
      c=1;
      if(small>size-1)
      {
          small=size-1;
      }  
    }    
  }
  
  a=beg;
  
  while(a<add)
  {
    arr[size]=a;
    func(size+1,a+1);
    a++;
  }
  
  return 1;
}
 
int minSums(string nos, int val){
    
  input=nos;
  add=nos.size();
  c=0;
  long long var_t;
  small=1000;
  point=val;

  // Reads data from s and stores them according to parameter format into the locations given by the additional arguments,
  // as if scanf was used, but reading from s instead of the standard input
  // string::c_str is a Get C string equivalent
  // Returns a pointer to an array that contains a null-terminated sequence of characters 
  // (i.e., a C-string) representing the current value of the string object.

  sscanf(nos.c_str(),"%lld",&var_t); 

  
  if(var_t==val)
  {
      return 0;
  }
  
  func(0,0);
  
  if(!c)
  {
      return -1;
  }      
  
  return small;
}
 
};