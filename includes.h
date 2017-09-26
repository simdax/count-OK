#ifndef INC
#define INC

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

int	my_read();
int 	game();
int 	add(int a, int b);
int 	sub(int a, int b);
int 	mul(int a, int b);
int 	divide(int a, int b);
typedef int (*f)(int, int);

#endif //INC
