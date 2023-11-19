#include "monty.h"
#include <ctype.h>
#include <string.h>

/**
 * token_count - counts the words in a string
 * @string: The string to count
 * Return: Return the number of tokens in string
 */

size_t token_count(const char *string)
{
	size_t count = 0;

	while (*string)
	{
		while (space(*string))
			++string;
		if (!*string)
			break;
		do {
			++string;
		} while (*string && !space(*string));

		++count;
	}

	return (count);
}



/**
 * tokenise - split a string into words
 * @string: The string to split
 * Return: NULL if memory allocaion fails or contain no words
 */

char **tokenise(char *string)
{
	char **tokens = NULL;
	size_t count = 0;

	if (!string)
		return (NULL);

	count = token_count(string);
	if (!count)
		return (NULL);

	tokens = malloc(sizeof(char *) * (count + 1));
	if (!tokens)
		return (NULL);

	for (count = 0; *string; count++)
	{
		while (space(*string))
			*string++ = '\0';
		if (*string)
			tokens[count] = string;
		else
			break;
		do {
			++string;
		} while (*string && !space(*string));
	}
	tokens[count] = NULL;

	return (tokens);
}
