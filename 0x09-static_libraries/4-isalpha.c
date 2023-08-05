#include "main.h"
/**
 * _isalpha - checks if a character is an alphabetic character
 * @c: the character to check
 *
 * Description: This function checks if the input character c is an alphabetic
 * character (either uppercase or lowercase). If c is an alphabetic character,
 * the function returns 1, otherwise it returns 0. The function uses the ASCII
 * values of characters to determine if c is an alphabetic character. The ASCII
 * values for lowercase characters range from 97 to 122, and the ASCII values
 * for uppercase characters range from 65 to 90.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
