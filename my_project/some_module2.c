#include "some_module.h"
#include <stdio.h>

#ifdef SOME2_IMPLEMENATAION
void some_func(void) { 
  printf("somefunc2");
  return;
}
#endif /* ifdef MACRO */
