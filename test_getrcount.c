#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  printf(1, "Number of times read count called: %d\n", getrcount());
  exit();
}
