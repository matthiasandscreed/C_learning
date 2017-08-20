#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
  int i;
  
  if (((*range = malloc(sizeof(int) * (max -min +1))) == NULL) && min >= max)
    {
      return (0);
    }
      for(i = 0; min < max; min++, i++)
    {
      (*range)[i] = min;
    }
  (*range)[i] = 0;
  return (i);
}

int main()
{
  int *tab;

  tab = NULL;
  int  result;

  result = ft_ultimate_range(&tab, 1, 10);
  for ( int i = 0; i < result; ++i)
    {
      printf("interger case %d: %d\n", i, tab[i]);
    }
  return (0);
}
