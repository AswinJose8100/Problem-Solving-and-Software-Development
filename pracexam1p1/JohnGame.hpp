#include <iostream>
#include <vector>

using namespace std;

class JohnGame{
public:
	int guessNumber(vector<int> guesses,vector<int> answers){
		int flag1=0;
		bool val=true;
		int i=0;
		for(i=0;i<guesses.size();i++){
			if(i+1<guesses.size())
				if(guesses[i]+answers[i]==guesses[i+1]+answers[i+1] || guesses[i]-answers[i]==guesses[i+1]-answers[i+1] || guesses[i]+answers[i]==guesses[i+1]-answers[i+1] || guesses[i]-answers[i]==guesses[i+1]+answers[i+1])
					flag1++;
				if(guesses[i]+answers[i]==guesses[i+1]+answers[i+1])
					return guesses[i]+answers[i];
				else
					val=false;
		}
		if(flag1==guesses.size())
			return guesses[i]+answers[i];
		else
			return -2;



	}
};