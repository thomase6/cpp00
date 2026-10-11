#include <iostream>
#include "phonebook.hpp"
#include <string>


int main()
{
	Phonebook test;
	std::string cmd;

	
	while(std::cout << "Commands available: ADD SEARCH EXIT\n" << "Input: ", std::getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			test.addContact();
		else if (cmd == "SEARCH")
			test.searchContact();
		else if (cmd == "EXIT")
			break;
		else 
			std::cout << "Unknown command\n";
	}
	return (0);
}