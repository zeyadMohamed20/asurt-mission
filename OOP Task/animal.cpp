#include<iostream>
#include<string>
#include "animal.h"
using namespace std;

void animal::set_name(string Name)
{
	this->Name = Name;
}

string animal::get_name()
{
	return Name;
}

void animal::set_weight(float Weight)
{
	this->Weight = Weight;
}

float animal::get_weight()
{
	return Weight;
}

string animal::get_type()
{
	if (Type == animalType::Amphibians)
		return "Amphibians";
	else if (Type == animalType::Birds)
		return "Birds";
	else if (Type == animalType::Fish)
		return "Fish";
	else if (Type == animalType::Invertibrates)
		return "Invertibrates";
	else if (Type == animalType::Mammals)
		return "Mammals";
	else if (Type == animalType::Reptiles)
		return "Reptiles";
	else
		return "Unknown";
}

bool animal::is_heavier(const animal& Second)
{
	if (Weight >= Second.Weight)
		return true;
	else
		return false;
}

void animal::display_data()
{
	cout << "Name: " << Name << endl;
	cout << "Weight: " << Weight << " Kg" << endl;
	cout << "Type: " << get_type() << endl;
}

animal::animal():Name("Not Specfic"), Weight(0), Type(animalType::Unknown)
{
}

animal::animal(string Name, float Weight):Weight(Weight),Name(Name), Type(animalType::Unknown)
{
}
