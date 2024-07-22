#include <iostream>
#include <cctype>//
using namespace std;


char character(char start, int offset);//Prototype for offset function

//Exceptions
class invalidCharacterException{};
class invalidRangeException{};

int main()
{

	char test = 'a';
	cout << character(test, 1);

	return 0;
}

char character(char start, int offset)
{
	char result = start + offset;//The value we want to return

	if (!isalpha(start))//If start isn't a valid character
		throw invalidCharacterException();
	else if (!isalpha(result))//If the offset reaches out of bounds 
		throw invalidRangeException();
	else
		return result;
}
