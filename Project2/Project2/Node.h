#pragma once
#include "Quest.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>


class Node
{
public:Node* next;
public:Quest* Quest_n;
	  Node() {
		  this->Quest_n = new (Quest);
		  this->next = NULL;
	  };
	  ~Node() {
		  delete (this->Quest_n);
	  };
private:

};

Node::Node()
{
}

Node::~Node()
{
}



