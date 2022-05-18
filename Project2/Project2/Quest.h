#pragma once
#include "Quest.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>
class Quest
{
private:string name;
protected:int exp_g;
private:private:int duration;
private:int dist;
private:string assignedto;
private:string questmessage;

public:Quest() {
	this->name = "depp";
	this->exp_g = 0;
	this->duration = 0;
	this->assignedto = "none";
	this->questmessage = "Void";
}


public:Quest(string name_d, int exp_g_d, int duration_d, int dist_d, string assignedto_d, string questmessage_d) {
	this->name = name_d;
	this->exp_g = exp_g_d;
	this->duration = duration_d;
	this->assignedto = assignedto_d;
	this->questmessage = questmessage_d;
}
};

