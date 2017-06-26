#include <stdio.h>

fuck() {
  printf("fuck()");
}

t() {}

bo() {
  int b;
  int be;
  int* buf;
  int i;
  b = 3735928559; #DEADBEEF
  be = 3203391149; #BEEFDEAD
  buf = &b;
  t();
  buf = &be;
  t();
  printf("%d\n", *buf);
  
  for (i = 0;i<100;i++) {
    *(buf + i) = 4195624; #addr of fuck
    *(buf - i) = 4195624; #addr of fuck
  }
  t();
}

main(int ac, void **av) {
  bo();
  fuck();
}