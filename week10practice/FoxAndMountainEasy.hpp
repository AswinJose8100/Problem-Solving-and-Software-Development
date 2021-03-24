#include<bits/stdc++.h> 

using namespace std;

class FoxAndMountainEasy
{
public:
	string possible(int val1,int val2,int val3,string str)
	{
		int m;
		int p;
		int num1;
	    int length;
	    int num2;
	    int num3;
	    int no;

	    m=0;
	    num1=val2;
	    length=str.size();// Gets the length of the string

	    while(m<length)
	    {
	    	if(str[m]=='U')
	    	{
	    		num1=num1+1; //incrementing num1 by 1
	    	}

	    	else
	    	{
	    		if(str[m]=='D')
	    		{
	    			num1=num1-1;// decrementing num1 by 1
	    		}
	    	}

	    	m=m+1;// incremnting loop index
	    }

	    num2=num1-val3;
	    no=val1-length;

	    if(num2<0)
	    {
	    	num2=num2*(-1);// negating the value
	    }
	    
	    if(num2>no)
	    {
	    	return "NO";
	    }
	    
	    if(num2%2!=no%2)
	    {
	    	return "NO";
	    }

	    num3=(no-num2)/2;

        if(val3>num1) 
        {
            num3=num3+(val3-num1);
        	
        }
        
        num1=val2+num3;
        p=0;
        	
        while(p<length)
        {
        	if(str[p]=='U')
        	{ 
        		num1=num1+1;
        	}	 
        	else
        	{
        		if(str[p]=='D')
        		{
        			num1=num1-1;
        		}
        	}	

            if(num1<0)
            {
            	return "NO";
            }	
            
            
            p=p+1;
        }    
    
        
        return "YES";
    }
  
};


