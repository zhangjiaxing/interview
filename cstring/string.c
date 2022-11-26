/*************************
* mystring.c
* Author: zhangjiaxing
* AuthorDate: 2013-09-10 18:32
*****************************/

#include "mystring.h"


char *strstr(const char *s1,const char *s2)
{
	if (*s2)
	{
		for (; *s1; s1++)
		{
			int n=0;
			while (*(s1+n)==*(p2+n))
			{
				if ((*p2+n)=='\0')
					return s1;
				n++;
			}
		}
		return (char*)0;
	}
	return s1;
}


char *strchr(const char *s,char c)
{
	for (; *s; s++)
		if (*s==c)
			return s;
	return (char*)0;
}


int strcmp(const char *s1,const char *s2)
{
	while (*s1==*s2)
	{
		if (*s1=='\0')
			return 0;
		s1++; s2++;
	}
	return *s1-*s2;
}


char *strcat(char *s1,const char *s2)
{
	char *p=s1;
	while (*p)
		p++;
	while (*p++=*s2++);
	return s1;
}


char *strcpy(char *dest, const char *src)
{
	char *p=dest;
	while (*dest++=*src++);
	return p;
}


size_t strlen(const char *s)
{
	const char *p=s;
	while (*p)
		p++;
	return p-s;
}

