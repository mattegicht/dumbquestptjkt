#include "QuestT.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include "Quest.h"
class Subquest : Quest{
	double exp_rat;
	double main_v = 1.5, side_v = 0.7;
public:Subquest() {
}
public:Subquest(double exp_rat_d) {
	this->exp_rat = exp_rat_d;
}
	  ~Subquest() {
		
	  }

};
