#include "main.c"
/**
  * print_alphabet_x10 - repeats the print_alphabet 10 times.
  * Return: Nothing.
  */
void print_alphabet_x10(void)
{

char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}


}
