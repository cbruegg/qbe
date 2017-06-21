#include <stdio.h>

fuck() {
  printf("fuck()");
}

bo() {
  int b;
  int* buf;
  buf = &b;
  *buf = 45253577110886;
  buf = buf + 2;
  *buf = 45253577110886;
}

main(int ac, void **av) {
  printf("%p\n", fuck);
  bo();
}