#include<unistd.h>
#include<stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find) // cherche la première occurrence de la sous-chaîne to_find au sein de la chaine str
{
  int i;
  int z;
  int to_findS;

  i = 0;
  z = 0;
  to_findS = 0;
  while(to_find[to_findS])
    to_findS++;
  if( to_findS == 0)
    return (str);
  while (str[i])
    {
      while (to_find[z] == str [i + z])
	{
	  if (z == to_findS - 1)
	    return (str +1);
	  z++;
	}
      z = 0;
      i++;
    }
  return (0);
 
}

int main()
{
  char str[18] = "Aallahhhhh wakbar";
  char to_find[7] = "wakbar";
  char *ret;
  
  ret = ft_strstr(str,to_find);
  
  ft_strstr(str,to_find);
  printf("the substring is: %s\n",ret);

  return(0);

}
