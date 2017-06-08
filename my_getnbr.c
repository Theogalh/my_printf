/*
** my_getnbr.c for my_getnbr in /home/bouill_t/git/mylib/lib/my
** 
** Made by Thomas Bouillon
** Login   <bouill_t@epitech.net>
** 
** Started on  Tue Nov  3 18:34:43 2015 Thomas Bouillon
** Last update Wed Nov  4 20:40:08 2015 Thomas Bouillon
*/

int	getneg(int i, char *str, int neg)
{
  if (i > 0 && str[i - 1] == '-' && neg == 0)
    {
      neg = 1;
      return (neg);
    }
  else if (neg == 1)
    {
      return (neg);
    }
  else
    {
      neg = 0;
      return (neg);
    }
}

int	getnb(int i, int result, int neg, char *str)
{
  while (str[i] != '\0')
    {
      if (57 >= str[i] && str[i] >= 48)
	{
	  result = result * 10 + (str[i] - 48);
	  neg = its_neg(i, str, neg);
	}
      else
	{
	  if (result > 0 || str[i] != '-')
	    {
	      if (neg == 1)
		result = result * -1;
	      return (result);
	    }
	}
      i = i + 1;
    }
}

int	my_getnbr(char *str)
{
  int	i;
  int	result;
  int	neg;

  i = 0;
  neg = 0;
  result = 0;
  result = getnb(i, result, neg, str);
  return (result);
}
