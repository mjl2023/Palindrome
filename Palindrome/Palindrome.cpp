// Palendrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
*
*   A program that takes a string (const char*) of characters
*   and recursively checks to see if it is a
*
*   PALINDROME
*
*   C\C++
*
*/
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

/*
    Can't use string because memory issue
    1. char *
    
 */

 // declare the string to be checked
const char* str = "WERAREW";

// declare the function that checks if the string is a palindrome
bool checkPalin(const char* str, int begin, int end);

int main()
{
	cout << "The string to be checked is: " << str << endl;
    int len = strlen(str);

	// initial call to the function that checks if the string is a palindrome
    bool result = checkPalin(str, 0, len - 1);
    if (result)
    {
		// if the result is true, then it is a palindrome
        std::cout << "Yes, it is a palindrome!" << std::endl;
    }
    else
    {
		// if the result is false, then it is not a palindrome
        std::cout << "No, it is not a palindrome!" << std::endl;
    }
    
    return 0;
}

bool checkPalin(const char* str, int begin, int end)
{
	// put the characters at the begin and end of the string into variables
    char a = str[begin];
    char b = str[end];

    if (a == b)
    {
		// if we've made it to the middle of the string, then it's a palindrome
        if (begin >= end)
        {
            return true;
        }
        else
        {
			// recursive call to check the next characters
            checkPalin(str, begin + 1, end - 1);
        }
    }
    else
    {
		// if the characters don't match, then it's not a palindrome
        return false;
    }


}

