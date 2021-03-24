#include <iostream>
#include <vector>

using namespace std;

class VeryInterestingMovie
{
public:
    int maximumPupils(vector<string> vec)
    {
            int final=0;
            int l;
            l=0;

        while(l<(int)vec.size())
        {
            int m;
            m=0;

            while(m<(int)vec[0].size())
            {
                if(vec[l][m]=='Y')
                {
                    final=final+1;
                    m=m+1;
                }
                m=m+1;
            }
            
            l=l+1;
        }
        return final;
    }
};