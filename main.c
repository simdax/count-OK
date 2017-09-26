#include "includes.h"

int 	main()
{

  int		result = 0;
  unsigned int	i = 0;
  unsigned int	size = 2;
  //int		ops[size];
  int		nbs[size + 1];
  int res;
  f	g_ops_func[4] = {
    add, sub, mul
  };
  
  srand(time(NULL));
  printf("Here's the numbers\n");
  result = random() % 9 + 1;
  printf("%d\n", result);
  nbs[i++] = result;
  while (i < size + 1)
    {
      int op = random() % 3;
      int nb = random() % 9 + 1;
      //ops[i - 1] = op;
      nbs[i] = nb;
      printf("%d\n", nb);
      result = g_ops_func[op](result, nb);
      i++;
    }
  printf("You must find : %d\n", result);

  if((res = my_read(nbs, result, size)))
    printf("prout, you've found : %d\n\n", result - res);
  else
    printf("BRAVO \n\n");
  while(getchar() != '\n');
}
