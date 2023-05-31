#include"Client.h"

Client::Client(int id)
{
	_id = id;
}


void Client::ShowID()
{
	std::cout << "ID: " << _id << '\n';
}
