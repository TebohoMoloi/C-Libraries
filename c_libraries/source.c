#include <stdio.h>
#include "my_lab.h"
#include "my_lab1.h"

int main(void)
{
     char scr[] = "Moloi";
     char dest[10];
     my_strcpy(dest, scr);
     printf("%s\n", dest);

     printf("%c\n", strrev("Teboho"));
     return (0);
}