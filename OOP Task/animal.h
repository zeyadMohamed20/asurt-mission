#pragma once
#include<string>
using namespace std;

enum class animalType { Mammals, Birds, Reptiles, Amphibians, Invertibrates, Fish, Unknown };

class animal
{
private:
	string Name;
	float Weight;
protected:
	animalType Type;
public:
	void set_name(string Name);
	string get_name();
	void set_weight(float Weight);
	float get_weight();
	string get_type();
	virtual float living_years() = 0;
	virtual bool fly() = 0;
	virtual bool swim() = 0;
	virtual bool walk() = 0;
	virtual int sleep() = 0;
	virtual string eat() = 0;
	virtual bool is_heavier(const animal &Second) final;
	virtual void display_data();
	animal();
	animal(string Name,float Weight);
};