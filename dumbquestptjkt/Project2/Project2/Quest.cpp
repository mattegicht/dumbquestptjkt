#include "Quest.h"



	   public:string get_name() {
		   return this->name;
	   }


	   public:int get_exp() {
		   return this->exp_g;
	   }


	   public:int get_dist() {
		   return this->dist;
	   }


	   public:int get_duration() {
		   return this->duration;
	   }


	   public:string get_assignedto() {
		   return this->assignedto;
	   }


	   public:string get_questmessage() {
		   return this->questmessage;
	   }
	   public:void set_name(string name_d) {
		   this->name = name_d;
	   }

	   public:void set_exp(int exp_d) {
		   this->exp_g = exp_d;
	   }


	   public:void set_dist(int dist_d) {
		   this->dist = dist_d;
	   }


	   public:void set_duration(int duration_d) {
		   this->duration = duration_d;;
	   }


	   public:void set_assignedto(string assignedto_d) {
		   this->assignedto = assignedto_d;
	   }


	   public:void set_questmessage(int questmessage_d) {
		   this->questmessage = questmessage_d;
	   }


	