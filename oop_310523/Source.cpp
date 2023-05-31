#include<iostream>
//#include"Client.h"
#include"Food.h"
#include"Supermarket.h"








int main() {

	/*Client* client = new Client(4); 
	client->ShowID();*/
	
	Bread* bread = new Bread("Bread", 25.4f, 1.25f, "White");
	Milk* milk = new Milk("Milk", 75.4f, 1.5f, 10);
	/*bread->ShowData();
	std::cout << "\n\n";
	milk->ShowData();*/

	Supermarket* supermarket = new Supermarket();
	supermarket->AddProduct(bread);
	supermarket->AddProduct(milk);
	supermarket->ShowDataOfProducts();

	std::cout << "\n\n";
	
	supermarket->Buy("Milk");
	supermarket->ShowDataOfProducts();

	return 0;
}