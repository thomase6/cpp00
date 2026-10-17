#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "Contact.hpp"
# include <iomanip>
# include <iostream>

class PhoneBook
{
private:
	Contact contacts[8];
	int	index;
	int	count;
public:
	PhoneBook();
	void addContact();
	void searchContact() const;
};

#endif //PHONEBOOK_HPP