#pragma once
#include <string>
#include "animal.h"
using namespace std;


class cat : public animal
{	
private:
	string Breed;
	string Gender;
	string Colour;
	string Food;
	int SleepingHours;
	float LivingYears;
	float Speed;
	string Sound;
	bool Fly;
	bool Swim;
	bool Walk;
public:
	
	void set_breed(string Breed);
	string get_breed();
	void set_gender(string Gender);
	string get_gender();
	void set_colour(string Colour);
	string get_colour();
	string eat();
	int sleep();
	float living_years();
	float top_speed();
	string sound();
	bool fly();
	bool swim();
	bool walk();
	void display_data();
	cat();
	cat(string Name,string Breed,float Weight, string Gender,string Colour);
};

