#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *ft_range(int min, int max)
{
  int *arr; // futur  tableau d'int
  int i;

  if (min > max) // si min > max on retourne zero
    return (0);
  arr = malloc(((max - min) + 2)*sizeof(int)); // cases qui ont la taille d'un int
  for( i = 0; i <((max - min) + 1); i++) // remplissage du tableau avec les bonnes valeur
    arr[i] = min + i; 
  arr[i] = 0 ; // Dernière case du tableau a null pour detecter sa fin
  return (arr);
}

int main(int ac, char **av)
{
  int *arr;

  arr = ft_range(5,10); // assignation du tableau avec les valeurs min & max
  if (arr)
    while (*arr)
      printf("%d\n", *(arr++));
  return (0);
}
