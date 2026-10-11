#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include "contact.hpp"
# include <iomanip>
# include <iostream>

class Phonebook
{
private:
	Contact contacts[8];
	int	index;
	int	count;
public:
	Phonebook();
	void addContact();
	void searchContact() const;
};

#endif //PHONEBOOK_HPP