#pragma once
#include<string>
#include<iostream>

class Food
{
private:
	std::string _name;
	float _condition;
	float _price;
	float _weight;

public:
	Food(std::string name, float price, float weight);

	//virtual void ShowData()=0; //virtual-функция будет переписываться в каждом классе наследнике(чистая реализация)
	virtual void ShowData();

	std::string GetName()
};

class Bread :public Food
{
private:
	std::string _typeOfBread;

public:
	// сначала инициализируется конструктор родителя, а потом наследника
	//Bread(std::string name, float price, float weight, std::string type) :Food(name, price, weight),_typeOfBread(type){} 
	Bread(std::string name, float price, float weight, std::string type); //правильная реализация, инициализация в мейне 
	void ShowData() override;
};

class Milk :public Food
{
private:
	int _fatPercent;
public:
	//Milk(std::string name, float price, float weight,int fat) :Food(name, price, weight) {} // 
	Milk(std::string name, float price, float weight, int fat); // правильная реализация, инициализация в мейне 
	void ShowData() override;
};

