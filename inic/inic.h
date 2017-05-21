#include <linux/unistd.h>

#define __NR_inic 398
#define __NR_inc 399
#define __NR_dec 400

_syscall1(void, inic, int, x)
_syscall0(int, inc)
_syscall0(int, dec)