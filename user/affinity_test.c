#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int mask =5;
  set_affinity_mask(mask);
  for(;;){
    // printf("Hello I am %d\n", getpid());
  }
}
