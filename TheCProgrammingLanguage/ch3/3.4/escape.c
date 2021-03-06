/* escape: converts escape characters like \n to ascii text and copies it into s */
void escape(char s[], char t[])
{
	int i, j;
	for (i = j = 0; t[i] != '\0'; i++) {
		switch (t[i]) {
			case '\n':
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:
				s[j++] = t[i];
		}
	}
	s[j] = '\0';
}
