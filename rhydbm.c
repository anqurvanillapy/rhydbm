#define _GNU_SOURCE

#include <stdio.h>
#include <stat.h>

typedef struct {
    /* TODO */
} hashtable;

typedef struct {
    mode_t mode;
    int dir_fd;
    int dat_fd;
    int bak_fd;
    hashtable *index;
} RhyDBM;

RhyDBM *open(const char *fbname, const char *fmode, mode_t mode);
static void rhydbm_init(RhyDBM *db);

int
main(int argc, char const *argv[])
{
    return 0;
}
