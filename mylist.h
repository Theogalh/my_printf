/*
** mylist.h for my_list in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:43:59 2015 Thomas Bouillon
** Last update Wed Nov  4 20:41:54 2015 Thomas Bouillon
*/

#ifndef MYLIST_H_
# define MYLIST_H_

typedef struct	s_list
{
  void		*data;
  struct s_list *next;
}		t_list;

#endif /* MYLIST_H_ */
