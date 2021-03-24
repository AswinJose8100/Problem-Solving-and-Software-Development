#include "Eval.hpp"

using namespace std;

class Theif
{public:
	void func()
	{
		// Declaring and intilaising all the variables

		int l;
		int m;
		int val1;
		int val2;
		int len3;

		
		int ctr2;
		int dist_totcovered;
		int ctr1;
		int small_ind;
		int c;
		int s;

		long present_weigth = 0;
	    long present_val = 0;
	    vector<int> collected; 

		ctr2=0;
		dist_totcovered=0;ctr1=0;small_ind=0;
		

		l=0;

		ProblemTPP obj2;
		City obj3;

		obj2.readTTPInstance("fnl.ttp");// Reads from the file.

		
		vector<City> vec_southWest;
		vector<City> vec_southEast;
		vector<City> vec_northEast;
		vector<City> vec_nortWest;
		vector<City> vec1;
		int len;


		vector<vector<City>> vec2;
		len=obj2.cities.size();
		
		
		int val_of_maximum_Y;
		int val_at_Axis_Y;
		int location_of_maxX;
		int val_of_minimin_X;
		int location_of_maxY;
		int val_of val_of_minimin_Y;
		int location_of_minX;
		int val_of_maximum_X;
		int val_at_Axis_X;
		int min;
		int location_of_minY;

		val_of_maximum_Y=0;
		location_of_maxY=0;
		val_of_minimin_X=999999;
		val_of_maximum_X=0;
		val_of_minimin_Y=999999;
		val_at_Axis_X=0;
		val_at_Axis_Y=0;
		min=999999;
		location_of_minX=0;
		location_of_maxX=0;
		location_of_minY=0;


		while(l<len)
		{
			int no1;
			int no2;

			no2=obj2.cities.at(l).positionY;
			no1=obj2.cities.at(l).positionX;
		
			
            if(no2<val_of val_of_minimin_Y)
			{
				val_of val_of_minimin_Y=obj2.cities.at(l).positionY;
				location_of_minY=obj2.cities.at(l).index;
			}
			if(no1>val_of_maximum_X)
			{
				val_of_maximum_X=obj2.cities.at(l).positionX;
				location_of_maxX=obj2.cities.at(l).index;
			}
			
			if(no1<val_of_minimin_X)
			{
				location_of_minX = obj2.cities.at(l).index;
				val_of_minimin_X = obj2.cities.at(l).positionX;
				
			}
			if(no2>val_of_maximum_Y)
			{
				val_of_maximum_Y=obj2.cities.at(l).positionY;
				location_of_maxY=obj2.cities.at(l).index;
			}

			l=l+1;
		}

		int no3;
		int no4;
		int m;
		int ctr2
		no4=(val_of_maximum_Y-val_of val_of_minimin_Y)/2;
		no3=(val_of_maximum_X-val_of_minimin_X)/2;

		val_at_Axis_X=no3+val_of_minimin_X;
		m=0;
		ctr2
		val_at_Axis_Y=no4+val_of val_of_minimin_Y;
		

		while(m<len)
		{
			int no5;
			int no6;

			no6=obj2.cities.at(m).positionX;
			no5=obj2.cities.at(m).positionY;
			if(no6>= val_at_Axis_X)
			{
				if(no5<val_at_Axis_Y)
				{
					vec_southEast.push_back(obj2.cities.at(m));// Appending values
					ctr2=ctr2+1;

				}
				else
				{
					vec_northEast.push_back(obj2.cities.at(m));
					ctr2=ctr2+1;
					
				}
			}
			else
			{
				if(no5<val_at_Axis_Y)
				{
					vec_southWest.push_back(obj2.cities.at(m));ctr2=ctr2+1;

				}
				else
				{
					ctr2=ctr2+1;
					vec_nortWest.push_back(obj2.cities.at(m));
					
					
				}
			}

			m=m+1;
		}

		val1=obj2.cities.at(0).positionX;
		val2=obj2.cities.at(0).positionY;
	
		if(val1<val_at_Axis_X)
		{
			if(val2<val_at_Axis_Y)
			{
				vec2.push_back(vec_southWest);
				vec2.push_back(vec_nortWest);
				vec2.push_back(vec_northEast);
				vec2.push_back(vec_southEast);
				


			}
			else
			{
				vec2.push_back(vec_nortWest);vec2.push_back(vec_northEast);
				vec2.push_back(vec_southEast);vec2.push_back(vec_southWest);
				
			}
			
		}
		else
		{
			if(val2<al_at_Axis_Y)
			{

				vec2.push_back(vec_southEast);vec2.push_back(vec_southWest);
				vec2.push_back(vec_nortWest);vec2.push_back(vec_northEast);
				
			}
			else
			{
				vec2.push_back(vec_northEast);vec2.push_back(vec_southEast);vec2.push_back(vec_southWest);
				vec2.push_back(vec_nortWest);
				
			}

		}
		
		
		obj3=vec2.at(0).at(0);
		int k;
		int lengths;

		vec2.at(0).erase(vec2.at(0).begin());// erasing from begining to end of vector
		k=0;
		lengths=vec2.size();
		vec1.push_back(obj3);

		while(k<lengths)
		{
			int p;
			p=0;
			ctr1 = vec2.at(k).size();

			while(p<ctr1)
			{
				int q;
				small_ind=0;min=999999;
				q=0;
				
				while(q<vec2.at(q).size())
				{
					
					if(vec2.at(k).at(q).index!=obj3.index)
					{
						
						if(obj2.getDistance(obj3,vec2.at(k).at(q))<min)
						{
							min=obj2.getDistance(obj3,vec2.at(k).at(q));
							small_ind=q;
						}
					}
					q=q+1;
				}

				dist_totcovered=dist_totcovered+obj2.getDistance(obj3,vec2.at(k).at(small_ind));
				obj3=vec2.at(i).at(small_ind);
				vec1.push_back(obj3);
				ctr2=ctr2+1;
				vec2.at(k).erase(vec2.at(i).begin()+small_ind);
				p=p+1;
			}
			k=k+1;
		}
		
		int o;
		int len2;
		len2=vec1.size();// length f vector
		o=0;
		cout <<"["<<vec1.at(0).index;

		while(o<len2)
		{
     		 cout<<", "<< vec1.at(o).index;
     		 o=o+1;
		}
   		cout<< "]";


   		reverse(vec1.begin(),vec1.end());
		
	    
	  
	    s=0;
	    cout<<endl;
	    while(present_weigth<= obj2.maxWeight)
	    {
	    	int t;
	    	t=0;

	      while(t<vec1.at(s).items.size()) 
	      {
	       		present_val=present_val+vec1.at(s).items.at(t).value;present_weigth=present_weigth+vec1.at(s).items.at(t).weight; 
	        	
	        	collected.push_back(vec1.at(s).items.at(t).index);// Appending value
	        	t=t+1;
	      }

	      s=s+1;
	    }
    	

        
        c=0;
        len3=collected.size()-1;
    	cout<<"["<<collected.at(0);// Output being printed

		while(c<len3)
		{
			
      		cout<<", "<<collected.at(c);
      		c=c+1;// Incrementing loop index.

		}

    	cout<<"]"<<endl;
    
	}
};
