#include <stdio.h>

fuck() {
  printf("fuck()\n");
}

t() {}

bo() {
  int b;
  int be;
  int* buf;
  int i;
  b = 3735928559; #DEADBEEF
  be = 3203391149; #BEEFDEAD
  buf = &be;
  buf[0] = -1; #garbage
  buf[1] = -1;
  buf[2] = -1;
  buf[3] = -1; # this overwrites the canary
  buf[4] = -1;
  buf[5] = 4195624;
}

main(int ac, void **av) {
  bo();
}
