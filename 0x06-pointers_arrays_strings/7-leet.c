#include <stdio.h>

char *leet(char *str)
{
	char *ptr = str;

	char letters[] = "aeotl";
	char leet_mappings[] = "43071";

	while (*ptr != '\0')
	{
		int i;
		int is_mapped = 0;

		for (i = 0; i < 5; i++)
		{
			if (*ptr == letters[i] || *ptr == letters[i] - 32)
			{
				*ptr = leet_mappings[i];
				is_mapped = 1;
				break;

		if (*ptr = leet_mappings[i])
		(is_mapped = 1);
		break;
		}
		}

		if (!is_mapped)
		{
		*ptr = *ptr;
		}
		ptr++;
		}
return (str);
}
