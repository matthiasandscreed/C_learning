#include <unistd.h>
int ft_putchar(char c)
{
  write(1,&c,1);
  return(0);
}

void ft_putnbr(int nb)
{
  int i;
  int mod;
  int n;
  
  if(nb < 0)
  {
    ft_putchar('-');
    nb = nb * -1;
  }
  if (nb < 10)
  {
    ft_putchar('0' + nb);
  }
  else
  {
   i = 10;
   while ((nb /i) > 10)
   {
     i = i * 10;
   }  
  while (i  >= 10)
    {
      mod = nb % i;
      n = (nb-mod)/i;
      ft_putchar('0'+ n );
      i = i / 10;
      nb = mod;
    }
  ft_putchar('0' + nb);
  }
}


int main()
{
  ft_putnbr(60);
   ft_putchar('\n');
  ft_putnbr(42);
  ft_putchar('\n');
  return(0);
}
