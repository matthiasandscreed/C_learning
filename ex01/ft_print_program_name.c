#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_putchar(char c);

int main(int argc, char **argv)
{
  int i;
  
  i = 0;
  argc = 0;
  while (argv[0] [i])
    {
      ft_putchar(argv[0][i]);
      i++;
    }
  return (0);
}
