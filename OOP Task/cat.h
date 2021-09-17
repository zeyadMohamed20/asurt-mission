#pragma once
#include <string>
#include "animal.h"
using namespace std;


class cat : public animal //mode of inheritance is public
{	
private:
	string Breed; //stores the breed of cat
	string Gender;//stores the gender of cat
	string Colour;//stores the colour of cat
	string Food; //stores the favourite food for cat
	int SleepingHours; //stores the average number of sleeping hours for cat
	float LivingYears; //stores the average number of years cat can live
	float Speed; //Stores the top speed thatcat can run
	string Sound; //stores the sound of cat
	bool Fly; //stores the abilty of cat to fly
	bool Swim; // stores the ability of cat to swim
	bool Walk; // stores the ability of cat to walk
public:
	
	void set_breed(string Breed); //setter so the user specify cat's breed
	string get_breed(); //getter to return the breed of car
	void set_gender(string Gender); //setter to specify the gender of cat
	string get_gender(); //gettter returns its gender
	void set_colour(string Colour); //setter determines cat's colour
	string get_colour(); //getter returns the colour of cat
	string eat(); //functions returns the best food for cats 
	int sleep(); //function returns the average no. of sleeping hoursfor cat
	float living_years(); //function gets the average number of years cat can live
	float top_speed(); //function used toreturn the highest speed for cats
	string sound(); //function used to get the sound cat
	//The next 3 Functions Determine the ability of cat to fly,swim or walk
	bool fly(); 
	bool swim();
	bool walk();
	//The next function override on the function written in parent class to display the remaining data
	void display_data();
	cat(); //Default Constructor
	cat(string Name,string Breed,float Weight, string Gender,string Colour); //Overloading Parametrized Constructor 
};

