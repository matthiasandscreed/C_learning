#include<unistd.h>
int ft_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

void ft_nputchar(void)
{
  int i;
  i = 'z';
  while(i >= 'a')
    {
      ft_putchar(i);
      i = i-1;
    }

}

int main()
{
  ft_nputchar();
  ft_putchar('\n');
  return (0);
}

