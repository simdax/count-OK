#include "includes.h"

int	get_op_id(char c)
{
  char	ops[3] = {'+', '-', '*'};
  int i = 0;
  while(ops[i])
    {
      if(c == ops[i])
	return i;
      i++;
    }
  return (-1);
}

int	calcul(int *nbs, int nb, char* buf)
{
  int 	i = 0;
  f	g_ops_func[4] = {
    add, sub, mul
  };
  int 	result = nbs[i++];
    
  while(nbs[i])
    {
      int op = get_op_id(buf[i - 1]);
      if(op != -1)
	  result = g_ops_func[op](result, nbs[i]);
      else
	{
	  printf("not an operator : %c", buf[i - 1]);
	  return 0;
	}
      i++;
    }
  return nb - result;
}

  int	my_read(int *nbs, int nb, unsigned int size)
{
  char		*buf;
  //  double	now;

  //  now = (double)clock() / (double)CLOCKS_PER_SEC;
  buf = (char*)malloc(sizeof(char) * size + 1);
  read(0, buf, size);
  return calcul(nbs, nb, buf);
  //  return sparse(ops, buf, size);
  //  now -= (double)clock() / (double)CLOCKS_PER_SEC;
  //  printf("your time is %f\n",  now);
}
