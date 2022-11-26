//mystring.h

#ifndef MY_STRING_H
#define MY_STRING_H

#ifndef _SIZE_T_DEFINED
typedef unsigned int size_t;
#define _SIZE_T_DEFINED
#endif

char *strstr(const char *s1,const char *s2);
char *strchr(const char *s,char c);
int strcmp(const char *s1,const char *s2);
char *strcat(char *s1,const char *s2);
char *strcpy(char *dest, const char *src);
size_t strlen(const char *s);

#endif // MY_STRING_H

