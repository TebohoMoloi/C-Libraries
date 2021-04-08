#include <stdio.h>
#ifndef my_lab
char strrev(char *text)
{
     int i;

     i = 0;
     while (text[i])
          i++;
     i--;
     while (text[i])
          printf("%c", text[i--]);
}

char *my_strcpy(char* dest, const char* scr)
{
     int i;
    
     i = 0;
     while (scr[i])
     {
          dest[i] = scr[i];
          i++;
     }
     dest[i] = '\0';
     return (dest);
}
     #define my_lab
     #endif