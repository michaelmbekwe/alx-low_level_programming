#include <stdio.h>
#include <ctype.h>
/**
 * *cap_string - capitalises string
 * @str: string to be capitalized
 * return: 0
 */

char *cap_string(char *str) {
	char *ptr = str;
	int capitalize_next = 1;

	while (*ptr != '\0')
	{
		if (capitalize_next && islower(*ptr))
		{
			*ptr = toupper(*ptr);
        }

		capitalize_next = 0;

	if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
            *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
	    *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
	{
			capitalize_next = 1;
		}
		ptr++;
    }
	return (str);
}
