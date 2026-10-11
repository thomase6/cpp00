# include "phonebook.hpp"

Phonebook::Phonebook()
{
	index = 0;
	count = 0;
}

static std::string truncate(const std::string &text)
{
	std::string res;

	if (text.length() > 10)
	{
		res = text.substr(0, 9);
		res += '.';
		return res;
	}
	else 
		return text;
}

static std::string promptField(const std::string &prompt)
{
	std::string input;

	std::cout << prompt;
	std::getline(std::cin, input);
	return input;
}

void Phonebook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	firstName = promptField("First Name: ");
	lastName = promptField("Last Name: ");
	nickName = promptField("Nickname: ");
	phoneNumber = promptField("Phone number: ");
	darkestSecret = promptField("Darkest Secret: ");
	if (firstName.empty() == 1 || lastName.empty() == 1 || nickName.empty() == 1 || phoneNumber.empty() == 1 || darkestSecret.empty() == 1)
	{
		std::cout << "Please make sure none of the fields are empty.\n";
		return;
	}
	contacts[index].setFirstName(firstName);
	contacts[index].setLastName(lastName);
	contacts[index].setNickName(nickName);
	contacts[index].setPhoneNumber(phoneNumber);
	contacts[index].setDarkestSecret(darkestSecret);
	index++;
	if (index >= 8)
		index = 0;
	if (count < 8)
		count++;
}

void Phonebook::searchContact() const
{
	int i;
	int num;
	std::string input;

	i = 0;
	if (count == 0)
	{
		std::cout << "Phonebook is empty\n";
		return;
 	}
	while (i < count)
	{
		std::cout << std::right << std::setw(10) << i;
		std::cout << '|' << std::setw(10) << truncate(contacts[i].getFirstName());
		std::cout << '|' << std::setw(10) << truncate(contacts[i].getLastName());
		std::cout << '|' << std::setw(10) << truncate(contacts[i].getNickName()) << '\n';
		i++;
	}
	input = promptField("Index: ");
	if (input.length() != 1 || input[0] < '0' || input[0] > '9')
	{
		std::cout << "Invalid Index\n";
		return;
	}
	num = input[0] - '0';
	if (num >= count)
	{
		std::cout << "Invalid Index\n";
		return;
	}
	std::cout << "First Name: " << contacts[num].getFirstName() << '\n';
	std::cout << "Last Name: " << contacts[num].getLastName() << '\n';
	std::cout << "Nickname: " << contacts[num].getNickName() << '\n';
	std::cout << "Phone Number: " << contacts[num].getPhoneNumber() << '\n';
	std::cout << "Darkest Secret: " << contacts[num].getDarkestSecret() << '\n';
}