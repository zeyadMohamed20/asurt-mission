/*
**********************************************************************************************************
@file      cat.cpp
@author    Zeyad Mohamed Abd ElHamid
@brief     This file contains the implementation of the derived class
*********************************************************************************************************
*/

#include<iostream>
#include<algorithm>
using namespace std;
#include "cat.h"

//for setting cat's breed
void cat::set_breed(string Breed)
{
	this->Breed = Breed;
}

//for getting the breed of cat
string cat::get_breed()
{
	return Breed;
}

/*
  for setting cat's gender, we make this function as checkpoint to check on the user's data as we are sure that the data enterd will be male or female
  so we use transform algorithm to convert all input's user to lower case then we comapre the data entered with male or female 
  if true then store this data in gender, else store unknown in gender
  Time comlexity for transform function is linear O(n)
*/
void cat::set_gender(string Gender)
{
	transform(Gender.begin(), Gender.end(), Gender.begin(), tolower);
	if (Gender == "male" || Gender == "female")
		this->Gender = Gender;
	else
		this->Gender = "UnKnown";
}

//To get the gender of cat
string cat::get_gender()
{
	return Gender;
}

//for setting cat's colour
void cat::set_colour(string Colour)
{
	this->Colour = Colour;
}

//for getting cat's colour
string cat::get_colour()
{
	return Colour;
}

//for getting cat's sound
string cat::sound()
{
	return Sound;
}

//To return the favourite food for cat
string cat::eat()
{
	return Food;
}

//To return the number of sleeping hours
int cat::sleep()
{
	return SleepingHours;
}

//To return the number of living years 
float cat::living_years()
{
	return LivingYears;
}

//To get cat's top speed
float cat::top_speed()
{
	return Speed;
}

//To get the ability of cat's flying
bool cat::fly()
{
	return Fly;
}

//To get the ability of cat's swimming
bool cat::swim()
{
	return Swim;
}

//To get the ability of cat's walking
bool cat::walk()
{
	return Walk;
}

/*
 This overriding function prints all data for cat so we call the dispaly data of the base class in order to satsfy reusability concept and avoid code redudancy
 so that we print the data for base class then we print the data for ths class(derived class)
*/
void cat::display_data()
{
	animal::display_data();
	cout << "Breed: " << Breed << endl;
	cout << "Gender: " << Gender << endl;
	cout << "Colour: " << Colour << endl;
	cout << "Food: " << Food << endl;
	cout << "Sleeping Hours: " << SleepingHours << " hr." << endl;
	cout << "Living Years: " << LivingYears << " years" << endl;
	cout << "Top Speed: " << Speed << " km/hr." << endl;
	cout << "Sound: " << Sound << endl;
	cout << "Fly: ";
	if (Fly == 1) 
		cout << "Yes" << endl;
	else 
		cout << "No" << endl;
	cout << "Swim: ";
	if (Swim == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	cout << "Walk: ";
	if (Walk == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

//Default constructor determines the default values for the attributes of the derived class
cat::cat():Breed("Not Specfic"),Gender("Not Specfic"),Colour("Not Specfic"), Food("fish"), SleepingHours(14), LivingYears(15), Speed(48), Sound("meow meow"), Fly(0), Swim(0), Walk(1)
{
	Type = animalType::Mammals; //Assign Mammals in type variable(protected variable declared in base class) 
	                           // as we can't initiate it in the initialiaztion list as it is prevented to initiate protected attribute in the derived class
}

//Overloading Parametrized constructor enables the user to detrmine the values of attributes and we also use reusability concept as we call the parametrized constructor for the base class
// to initiate its attributes while derived class initialize its own attributes
cat::cat(string Name, string Breed,float Weight,string Gender,string Colour):animal(Name,Weight), Breed(Breed), Gender(Gender), Colour(Colour), Food("fish"), SleepingHours(14), LivingYears(15), Speed(48), Sound("meow meow"), Fly(0), Swim(0), Walk(1)
{
	Type = animalType::Mammals;
}
