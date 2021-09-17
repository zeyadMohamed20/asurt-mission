#pragma once
#include<string>
using namespace std;

/*
 The next enum class is used to collect all animals types and has member called unknown if the user don't determine specfic animal
 Enum class has been introduced by c++11 for the following reasons:
 a) If we have two enums then we can't share the same names between them
 b) No variable can have name which is found as member in enumeration
*/
enum class animalType { Mammals, Birds, Reptiles, Amphibians, Invertibrates, Fish, Unknown };

class animal
{
private:
	string Name; //This attrubute stores the name of the animal
	float Weight;// This attribute stores the weight of this animal
protected:
	animalType Type; //proteced member so we can access it in the derived class and we notice that this member has enumeration type as type variable don't contain any values exept the above values
public:
	void set_name(string Name); //Setter responsible to set animal's name
	string get_name(); //Getter rsponsible to return animal's name
	void set_weight(float Weight); //Setter used to set the value of weight
	float get_weight(); //Getter used to return the value of weight
	string get_type(); //Getter responsible to return the type of animal fpr any inherited class
	/*
	* The next 6 function are pure virtual so their implementaion will be in the child class because we can't know the return value without knowing what is the animal  
	* so that the parent class is an abtract class and we can't create object from it
	*/
	virtual float living_years() = 0; //Pure virtual function used to return the number of years that the animal can live
	virtual bool fly() = 0;//Pure virtual function returns the ability of animal to fly
	virtual bool swim() = 0; // Pure virtual function returns the ability of animal to swim
	virtual bool walk() = 0; // Pure virtual function returns the ability of animal to walk
	virtual int sleep() = 0; // Pure virtual function returns the no. of hours that specfic animal sleep
	virtual string eat() = 0; //Pure virtual function returns the type of food thatspecfic animal can eat

	/* The next function is final classifier because this function is same in nameand definition in any child class so we implement it in this class
	   and prevent the client to override on it in the drived class
	*/
	virtual bool is_heavier(const animal &Second) final;
	//The next function is virtual function that display the data and we will overrirde on it in the derived class to display the remaining data
	virtual void display_data();
	animal(); //Default Constructor
	animal(string Name,float Weight); //Parametrized Constructor
};