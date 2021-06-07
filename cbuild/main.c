/*----------------------------------------------------------------------------
 * Name:    main.c
 *----------------------------------------------------------------------------*/

#include <stdio.h>
#include <assert.h>

// In my_sum.c
int my_sum(int a, int b) {
  return a + b;
}

// In test_my_sum.c - 
int main(int argc, char *argv[]) {
  printf("Basic CI example\n");
  assert(2 == my_sum(1, 1));
  assert(-2 == my_sum(-1, -1));
  assert(0 == my_sum(0, 0));
  return(0);
}
