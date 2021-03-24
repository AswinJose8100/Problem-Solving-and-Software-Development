#include <iostream>
#include <vector>
#include <string>
#include <map>
#include "Theif.hpp"

using namespace std;


int ProblemTPP::n;                  
long long ProblemTPP::maxWeight;    
double ProblemTPP::r;  
int ProblemTPP::mItems; 
// A vector in Eval.cpp in class Solution that gives a total path/tour of the cities visited.
vector<City*> Solution::tour;        
double ProblemTPP::minSpeed;
vector<City> ProblemTPP::cities;     
double ProblemTPP::maxSpeed;     
map<int,int> ProblemTPP::itemsAll; 

// n is like counter for counting the number of cities visited.

//  maxWeigth is the variable which represents the maximum weigth.

// minSpeed is the minimum speed in which the theif will travel.

// maxSpeed is the minimum speed in which the theif is travelling.

// r is the rent that has to be payed for the knapsack borrowed.

// mItems is a counter which keeps track of the items picked up during travel.

// cities is a vector in Eval.hpp of type City and stores all the cities visited.

int main()
{
	Theif obj1;
	obj1.func();

	return 0;

}
