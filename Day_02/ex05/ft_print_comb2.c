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
  int a,b,c,d,j,i;
  a = '0';
  b = '0';
  c = '0';
  d = '0';
  i = 0;
  j = 0;
  while(a <='9')
    {
      while(b <= '9')
	{
	  while(c <= '9')
	    {
	      while(d <= '9')
		{
		  if(i<j)
		    {
		      ft_putchar(a);
		      ft_putchar(b);
		      ft_putchar(' ');
		      ft_putchar(c);
		      ft_putchar(d);
		      ft_putchar(',');
		    }
		  j++;
		  d++;
		}
	      c++;
	      d='0';		
	    }
	  i++;
	      //	  display(i);
	  b++;
	  j=0;
	  c='0';
	}
      a++;
      b='0';	   
    }
}

int main()
{
  ft_print_comb2();
  ft_putchar('\n');
  return(0);
}
