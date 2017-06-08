/*
** my_catch_in_list.c for my_catch_in_list in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:23:58 2015 Thomas Bouillon
** Last update Tue Nov  3 18:26:37 2015 Thomas Bouillon
*/

#include <stdlib.h>
#include "mylist.h"

char		*my_catch_in_list(struct s_list **list)
{
  char		*nbr;
  struct s_list	*elem;

  elem = *list;
  if (list == NULL || *list == NULL)
    {
      return (NULL);
    }
  if (list != NULL && *list != NULL)
    {
      nbr = elem->data;
      *list = elem->next;
      free(elem);
    }
  return (nbr);
}
