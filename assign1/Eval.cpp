#include "Eval.hpp"

// static variables.
// ***********************************
vector<City> ProblemTPP::cities;
int ProblemTPP::n;                  // Number of cities in the instance
int ProblemTPP::mItems;             // Total number of items in the instance
long long ProblemTPP::maxWeight;    // maximum weight.
double ProblemTPP::r;            // renting rate
double ProblemTPP::minSpeed;     // minimum speed
double ProblemTPP::maxSpeed;     // maximum speed
map<int,int> ProblemTPP::itemsAll; // a map from iterm index to the city
                                   // that contains it (both 1-based). 

vector<City*> Solution::tour;  // tour of cities in solution


// simple driver program 
int main(int argc, char* argv[]) {

  if(argc !=3){
    cerr << "usage: ./Eval ttp_problem_filename   ttp_solution filename" 
	 << endl;
    exit(EXIT_FAILURE);
  }
  
  string ttpFileName=string(argv[1]);
  string ttpSolnFileName=string(argv[2]);
    

  ProblemTPP::readTTPInstance(ttpFileName);;
  double res;   // place holder for result

  // if a valid solution can be read
  if(Solution::readSolution(ttpSolnFileName)){
    // now calculate objective value.
    res = Solution::calculateObjectiveValue(ProblemTPP::minSpeed,
					    ProblemTPP::maxSpeed,
					    ProblemTPP::maxWeight,
					    ProblemTPP::r);
  }else{
    res = INT_MIN;  // invalid tour or packing plan 
  }

  cout << res << endl;

}


