#include<unistd.h>
#include<stdio.h>

int ft_sqrt(int nb)
{
  int i;

  i = 1;
  while(i * i < nb)
    {
      i++;
    }
  if (i * i == nb)
    {
      return (i);
    }
  else
    {
      return (0);
    }

}
