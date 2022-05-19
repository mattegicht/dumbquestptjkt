#include "Node.h"

Node::Node(Node* before, Node* next, Quest* Quest_n) {
public:void set_Next(Node followup) {
	this->next = followup;
}
public:void set_Before(Node followup) {
	this->next = followup;
}
public:void del_Next() {
	this->next = NULL;
}
public:void del_Before() {
	this->next = NULL;
	
}
public:Node get_Next() {
	this->next = followup;
}
public:Node get_Before() {
	this->next = followup;
}