/*
** my_str_isnum.c for my_str_isnum in /home/bouill_t/git/Piscine_C_J06/ex_12
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Oct  6 14:11:42 2015 Thomas Bouillon
** Last update Wed Oct  7 14:46:21 2015 Thomas Bouillon
*/

int	my_str_isnum(char *str)
{
  int	i;

  i = 0;
  while (str[i] != 0)
  {
    if (str[i] < 48)
      {
	return (0);
      }
    if (str[i] > 57)
      {
	return(0);
      }
    i = i + 1;
  }
  return (1);
}
