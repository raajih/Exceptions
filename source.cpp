//Raajih Roland
//CIS 1202.5T1
//July 22, 2024
#include <iostream>
#include <cctype>
using namespace std;


char character(char start, int offset);//Prototype for offset function

//Exceptions
class invalidCharacterException{};
class invalidRangeException{};

int main()
{
	try
	{
		cout << character('?', 5);
	}
	catch (invalidCharacterException)
	{
		cout << "ERROR. Invalid character";
	}
	catch (invalidRangeException)
	{
		cout << "ERROR. Invalid offset";
	}

	return 0;
}

char character(char start, int offset)
{
	char result = start + offset;//The value we want to return

	if (!isalpha(start))//If start isn't a valid character
		throw invalidCharacterException();
	else if (!isalpha(result) || (islower(start) && isupper(result)) || (isupper(start) && islower(result)))//If the result isn't a letter, or if the offset made the letter switch cases
		throw invalidRangeException();
	else
		return result;
}
