/*
** my.h for my in /home/bouill_t/git/mylib/include
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:16:42 2015 Thomas Bouillon
** Last update Sun Nov  8 15:17:16 2015 Thomas Bouillon
*/

#ifndef MY_H_
# define MY_H_
#include "mylist.h"

char	*my_catch_in_list(t_list**list);
void	my_putstr(char *str);
void	my_putchar(char c);
int	my_strlen(char *str);
int	my_getnbr(char *str);
int	getnb(int i, int result, int neg, char *str);
int	getneg(int i, char str, int neg);
int	my_put_in_list(t_list **list, void *voidata);
void	my_put_nbr(int nb);
void	my_show_list(t_list *list);
void	my_show_wordtab(char **tab);
void	my_sort_params(int argc, char **argv);
char    *my_strcat(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);
char	*my_strcpy(char *dest, char *src);
char	*my_strdup(char *src);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int	my_str_islower(char *str);
char	*my_strncpy(char *dest, char *str, int n);
char	*my_strstr(char *str, char *to_find);
int	my_swap(int *a, int *b);
int	my_putnbr_base(int nbr, char *base);

#endif /*MY_H_*/
