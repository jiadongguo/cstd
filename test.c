#include "cstd.h"
int main(int argc, char **argv)
{
    init(argc, argv);
    float a;
    int b;
    char *c;
    bool m;
    if (getfloat("a", &a))
        printf("a=%g\n", a);
    if (getint("b", &b))
        printf("b=%d\n", b);
    if (getstring("c", &c))
        puts(c);
    if (getbool("m", &m))
        printf("m=%d\n", m);
    return 0;
}