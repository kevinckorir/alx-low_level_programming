#include <stdio.h>

/**
 * modif_my_char_var - Solve me
 *
 * Return: nothing.
 */
void modif_my_char_var(char *cc, char ccc)
{
   *cc = 'o';
   ccc = 'l';
}

/**
 * main - Solve me
 *
 * Return: Always 0.
 */
int main(void)
{
   char c;
   char *p;

   p = &c;
   c = 'H';
   printf("Value of 'c' before call: %d ('%c')\n", c, c);
   printf("Address of 'c' before call: %p\n", &c);
   printf("Value of 'p' before call: %p\n", p);
   modif_my_char_var(p, c);
   printf("Value of 'c' after call: %d ('%c')\n", c, c); 
   printf("Value of 'p' after call: %p\n", p);
   return (0);
}
