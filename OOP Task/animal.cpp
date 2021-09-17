/*
**********************************************************************************************************
@file      animal.cpp
@author    Zeyad Mohamed Abd ElHamid
@brief     This file contains the implementation of the patenet class
*********************************************************************************************************
*/

#include<iostream>
#include<string>
#include "animal.h"
using namespace std;

/*
* All functions usually use parameter's names like attribues so we use this pointerto differ between attribute and function's parameters
*/

//For setting name
void animal::set_name(string Name)
{
	this->Name = Name;
}

//For Returning name
string animal::get_name()
{
	return Name;
}

//To set Weight's value
void animal::set_weight(float Weight)
{
	this->Weight = Weight;
}

//To return the value of weight
float animal::get_weight()
{
	return Weight;
}

/*
 The next function is used to convert any meber of enum class into string not interger so we check on each type pf animal then convert it into string 
 if there is no type specified then this means the user does,t determine animal's type thus return unknown 
*/
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

/*
  The next function used to determine which animal is heavier so we pass argumet of type animal then compare the weight of the animal passed by the animal who called this function 
  if the first animal(who called the function) is heavier than the second animal(that is passed) then print yes, otherwise print no
*/
bool animal::is_heavier(const animal& Second)
{
	if (Weight >= Second.Weight)
		return true;
	else
		return false;
}


//The next function is used to print the data like name,weight and type
void animal::display_data()
{
	cout << "Name: " << Name << endl;
	cout << "Weight: " << Weight << " Kg" << endl;
	cout << "Type: " << get_type() << endl;
}

//Deafault constructor determines the default values of attributes
animal::animal():Name("Not Specfic"), Weight(0), Type(animalType::Unknown)
{
}

//Overloading parametrized constructor enables the user to determine values of attributes
animal::animal(string Name, float Weight):Weight(Weight),Name(Name), Type(animalType::Unknown)
{
}
