#include<iostream>
#include<algorithm>
using namespace std;
#include "cat.h"

void cat::set_breed(string Breed)
{
	this->Breed = Breed;
}

string cat::get_breed()
{
	return Breed;
}

void cat::set_gender(string Gender)
{
	transform(Gender.begin(), Gender.end(), Gender.begin(), tolower);
	if (Gender == "male" || Gender == "female")
		this->Gender = Gender;
	else
		this->Gender = "UnKnown";
}

string cat::get_gender()
{
	return Gender;
}

void cat::set_colour(string Colour)
{
	this->Colour = Colour;
}

string cat::get_colour()
{
	return Colour;
}

string cat::sound()
{
	return Sound;
}

string cat::eat()
{
	return Food;
}

int cat::sleep()
{
	return SleepingHours;
}

float cat::living_years()
{
	return LivingYears;
}

float cat::top_speed()
{
	return Speed;
}

bool cat::fly()
{
	return Fly;
}

bool cat::swim()
{
	return Swim;
}

bool cat::walk()
{
	return Walk;
}

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

cat::cat():Breed("Not Specfic"),Gender("Not Specfic"),Colour("Not Specfic"), Food("fish"), SleepingHours(14), LivingYears(15), Speed(48), Sound("meow meow"), Fly(0), Swim(0), Walk(1)
{
	Type = animalType::Mammals;
}

cat::cat(string Name, string Breed,float Weight,string Gender,string Colour):animal(Name,Weight), Breed(Breed), Gender(Gender), Colour(Colour), Food("fish"), SleepingHours(14), LivingYears(15), Speed(48), Sound("meow meow"), Fly(0), Swim(0), Walk(1)
{
	Type = animalType::Mammals;
}
