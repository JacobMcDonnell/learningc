#include <stdio.h>
#include "escape.c"
#include "unescape.c"

#define MAX 10

int main(void)
{
	char s[MAX], v[MAX];

	char t[MAX] = {'H', 'e', '\t', 'l', '\n', 'o', '\0'};

	escape(s, t);
	unescape(v, s);

	printf("%s\n%s\n", s, v);
	return 0;
}
