#include<unistd.h>
#include<stdio.h>
#include<string.h>


int ft_str_is_lowercase(char *str)
{
  int i;
  for(i = 0; str[i]; i++)
    {
      if(!(str[i] >= 'a' && str[i] <= 'z'))
	 return(0);
    }
  return(1);
}

int main()
{
  char str[16] = "1ADSFSFgfgfs";
  printf("%d\n",ft_str_is_lowercase(str));

  char str2[16] = "allahwhakbar";
  printf("%d\n",ft_str_is_lowercase(str2));

  char str3[16] = "";
  printf("%d\n",ft_str_is_lowercase(str3));
  return(0);
}
