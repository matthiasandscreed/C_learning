#include<unistd.h>
#include<stdio.h>


void ft_putchar(char c)
{
  write(1, &c , 1);
}

char *ft_stcpy(char *dest, char *src) // la fonction strcpy copy la chaîne pointée par src dans la pointée dest. elle retourne une chaîne de caractère
{
  int i; // initialisation de la variable i;
  
  i = 0;
  while(src[i] != '\0' ) // ! attention ne utiliser zero la difference entre string et un caractère la double cote represente la string "" et la
    {
      dest[i] = src[i];   // la boucle déroule la chaîne  char jusqu' au "/0" ; 
      i++;
    }
  dest[i] = src[i];
  return (dest);  // le résultat et la copy de src dans des on renvoie la chaine destiner modifier 

}


int main(void)
{
  char src[] = "hello";
  char dest[200];
 
 ft_stcpy(dest,src);
 printf("%s\n",dest);

 return 0;
}
