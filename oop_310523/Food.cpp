#include"Food.h"

Food::Food(std::string name, float price, float weight)
{
	_name = name;
	_price = price;
	_weight = weight;
	_condition = 100.0f;

}

Bread::Bread(std::string name, float price, float weight, std::string type) :Food(name, price, weight)
{
	_typeOfBread = type;
}

Milk::Milk(std::string name, float price, float weight, int fat) :Food(name, price, weight)
{

	_fatPercent = fat;
}

void Food::ShowData()
{
	std::cout << "name: " << _name << '\n';
	std::cout << "condition: " << _condition << '\n';
	std::cout << "price: " << _price << '\n';
	std::cout << "weight: " << _weight << '\n';

}

void Bread::ShowData()
{
	Food::ShowData();// вызов функ у основного класса 
	std::cout << "typeOfBread: " << _typeOfBread << '\n'; //  вывод дополнительных полей у класса наследника
}
void Milk::ShowData()
{
	Food::ShowData();
	std::cout << "fat Percent: " << _fatPercent << '\n';
}

