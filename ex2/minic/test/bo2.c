#include <stdio.h>

#include <stdlib.h>
#include <string.h>

bar() {
    system("echo \"You got pwnd\" && /bin/sh");
}

foo(int c) {
    int a;
    int *buf;

    buf = &a;
    buf[0] = 3735928559;
    buf[1] = 3735928559;
    buf[2] = 3735928559;
    buf[3] = 3735928559;
    buf[4] = 3735928559;
    buf[5] = 4195543;

    return a+c;
}

main() {
    return foo(63);
}
