/* unescape: converts the ascii representation of escape chars to escape chars */
void unescape(char s[], char t[])
{
	int i, j;
	for (i = j = 0; t[i] != '\0'; i++) {
		switch (t[i]) {
			case '\\':
				if (t[i+1] == 'n')
					s[j++] = '\n';
				else if (t[i+1] == 't')
					s[j++] = '\t';
				i++;
				break;
			default:
				s[j++] = t[i];
				break;
		}
	}
	s[j] = '\0';
}
