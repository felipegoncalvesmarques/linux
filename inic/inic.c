#include <linux/linkage.h>

int g = 0;

asmlinkage void sys_inic(int x) {
    g = x;
}

asmlinkage int sys_inc(void) {
    g++;
    return g;
}

asmlinkage int sys_dec(void) {
    g--;
    return g;
}