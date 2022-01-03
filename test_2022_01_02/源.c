#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 && p2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* cur = (char*)p1;
	if (*p2 == '\0')
		return (char*)p1;
	while (*cur)
	{
		s1 = cur;
		s2 = (char*)p2;
		while (*s1 && *s2 && !(*s1 - *s2))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cur;
		if (*s1 == '\0')
			return NULL;
		cur++;
	}
	return NULL;
}
int main()
{
	char* p1 = "abcdef";
	char* p2 = "def";
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
		printf("×Ö´®²»´æÔÚ\n");
	else
		printf("%s\n", ret);
	return 0;
}