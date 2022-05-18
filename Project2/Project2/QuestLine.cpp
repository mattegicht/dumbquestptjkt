#include "QuestLine.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
#include "Quest.h"
#include "Node.h"

class Quest_L: public Quest{
private:Quest* first;
public:Quest_L() { this->first = NULL; }
public:void show_Quest_L() {
	if (this->first = 0) {
		throw std::invalid_argument("no questline");
	}
	else {
		Quest* current_Quest;
		current_Quest = this->first;
		while (current_Quest != NULL) {
			current_Quest = current_Quest -> next;
		}
	}
}

};