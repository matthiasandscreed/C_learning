#include <unistd.h>
#include<stdio.h>

int ft_iterative_power(int nb, int power)
{
  int result;
  int i;
  
  result = nb;
  i = 1;
  if (power < 0)
    {
      return (0);
    }
  if (power == 0)
    {
      return(1);
    }
  while (i<power)
    {
      result = result * nb;
      i++;
    }
  return (result);
}

int main()
{
  int n;
  n = ft_iterative_power(5,4);
  printf("%d\n", n);
}
