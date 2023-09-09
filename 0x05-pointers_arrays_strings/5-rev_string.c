#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input to be reversed.
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int start = 0;
	int end = len - 1;
	char tmp;

	while (start < end){
		tmp = s[start];
		s[start] = s[end];
		 s[end] = tmp;
	start++;
	end--;
	}
}
