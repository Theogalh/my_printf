/*
** my_put_in_list.c for my_put_in_list in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:45:41 2015 Thomas Bouillon
** Last update Tue Nov  3 18:47:15 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include "mylist.h"

int		my_put_in_list(struct s_list **list, void *voidata)
{
  struct s_list	*elem;

  if (voidata == NULL)
    return (1);
  elem = malloc(sizeof(*elem));
  if (elem == NULL)
    return (1);
  elem->data = voidata;
  elem->next = *list;
  *list = elem;

  return (0);
}
