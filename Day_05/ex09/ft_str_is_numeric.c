#include<unistd.h>
#include<stdio.h>
#include <string.h>

//   a00
//   0a0
int ft_str_is_numeric(char *str)
{
  int i;

  for(i = 0; str[i]; i++)
    {
      if(!(str[i] >= '0' && str[i] <= '9'))
	return(0);
    }
  return(1);
}

int main()
{
  char str[16] = "12345a 67890";

  ft_str_is_numeric(str);
  printf("%d\n",ft_str_is_numeric(str));
  return(0);
}
