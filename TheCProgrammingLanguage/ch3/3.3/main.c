#include <stdio.h>
#include "binarysearch.c"

int main(void)
{
	int x, n, v[100], c;
	c = 0;
	for (int i = 0; i < 100; i++) {
		v[i] = c;
		c += 2;
	}
	x = 24;
	n = 100;
	c = binsearch(x, v, n);

	printf("%d\n%d\n", c, v[c]);
	return 0;
}