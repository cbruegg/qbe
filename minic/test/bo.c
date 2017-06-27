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
  buf[3] = 4195622;
}

main(int ac, void **av) {
  bo();
}