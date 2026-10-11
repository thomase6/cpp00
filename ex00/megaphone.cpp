#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	if (ac != 1)
	{
		int i = 1;
		while (i < ac)
		{
			int j = 0;
			while (av[i][j] != '\0')
			{
				char c = std::toupper(av[i][j]);
				std::cout << c;
				j++;
			}
			i++;
		}
		std::cout << '\n';
	}
	else 
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
	}
	return 0;
}
/*
Example as to what the program should do:
./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
./magephone Dammit " ! " "Sorry students, I thought this was off."
DAMMIT ! SORRY STUDENTS, I THOUGHT THIS WAS OFF.
./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
*/
// This tells me the program should grab any number of arguments and turn them into uppercase and if there is no argument use the predetermined output.