#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
  write(1,&c,1);
  return(0);
}

int display(int n)
{
  printf("------> %d\n", n);
  return (0);
}

void ft_print_comb2(void)
{
  char a,b;
  a = 'A';
  b = 'A';
  int i;
  i = 0;
  while(a <='Z')
    {
      while(b <= 'Z')
	{
	  ft_putchar(a);
	  ft_putchar(b);
	  ft_putchar(' ');
	  ft_putchar(',');	
	  b++;
	  i++;
	  display(i);

	}
      b = 'A';
      a++;
      
    }
  
}

int main()
{
  ft_print_comb2();
  ft_putchar('\n');
  return(0);
}
