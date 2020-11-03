#include <stdio.h>
#define MAXLINE 1000 	/* maximum input line length */

int getLine(char line[], int maxLine);
void copy(char to[], char from []);
int removeWhiteSpace(char input[], int len);

/* print the longest input file with the number of characters and removes the trailing white spaces and deletes blank lines */
main() {
	int len, 	/* current line length */
	    max; 	/* max length seen so far */
	char line[MAXLINE], 	/* current input line */
	     longest[MAXLINE]; 	/* longest line saved here */

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0) 	/* there was a line */
		printf("\n%s%d characters long\n", longest, max);
	return 0;
}

/* getLine: read a line into s, return length */
int getLine(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		i++;
	}
	i = removeWhiteSpace(s, i);
	s[i] = '\0';
	return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]) {
	int i;

	i=0;
	while((to[i] = from[i]) != '\0')
		i++;
}

/* removeWhiteSpace: removes trailing white space and deletes blank lines */
int removeWhiteSpace(char s[], int len) {
	int i, count;
	count = len;
	for (i = len-1; i > 0; i--) {
		if (s[i] == ' ' || s[i] == '\t') {
			count--;
			s[i] = '\0'; 
		} else 
			break;
	}
	return count;
}
