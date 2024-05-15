#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    printf("memsize: %dB\n", memsize());

    char* p = malloc(20 * 1024);
    printf("memsize: %dB\n", memsize());

    free(p);
    printf("memsize: %dB\n", memsize());
    
    exit(0);
}
