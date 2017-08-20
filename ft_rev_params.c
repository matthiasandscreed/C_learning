#include<unistd.h>
#include<stdio.h>
#include<string.h>

int ft_putchar(char c);

int main(int argc, char **argv)
{
  int a;
  int b;

  a = argc -1;
  b = 0;
  while ( i > 0)
    {
      while(argv [a][b])
	{
	  ft_putchar(argv[a][b]);
	  b++; 
	}
      ft_putchar('\n');
      b = 0;
      i--;
    }
  return(0);
}
