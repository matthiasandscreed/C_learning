#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_putchar(char c);

int main(int argc, char**argv)
{
  int a;
  int b;

  a = 1;
  b = 0;
  while(a < argc)
    {
      while (argv[a][b])
	{
	  ft_putchar(argv[a][b]);
	  b++;
	}
      ft_putchar('\n');
      b = 0;
      a++;
    }
  return (0);
}
