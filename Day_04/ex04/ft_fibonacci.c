#include<unistd.h>
#include<stdio.h>

int ft_fibonacci(int index)
{
  if (index < 0)
    {
      return (-1);
    }
  if (index == 0)
  {
    return (0);
  }
  if (index == 1)
    {
      return(1);
    }
  return (ft_fibonacci(index - 2) + ft_fibonacci(index -1));
}

int main()
{
  int n;
  n = ft_fibonacci(1);
    printf("%d\n",n);
}
