#include<unistd.h>
#include<stdio.h>

int ft_recursive_power(int nb, int power)
{
  int result;

  result = nb;
  if (power < 0)
    {
      return(0);
    }
  if (power == 0)
    {
      return(1);
    }
  return (result *(ft_recursive_power(nb, power - 1)));
}

int main()
{
  int n;
  n = ft_recursive_power(5,4);
  printf("%d\n",n);
}
