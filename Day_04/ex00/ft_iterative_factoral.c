#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
  int nomb;
  int i;

  i = 1;
  nomb = 1;
  if (nb <= 0) 
    return (0);
   while (i <= nb)
    {
      nomb = i * nomb;
      i++;
    }
  return (nomb);
}   

int main()
{
  int n;
  n = ft_iterative_factorial(1);
  printf("%d\n", n);
}
