#include "simple.h"
simple::repeat() {
  index = _LINE_;
}
simple::rpt(int i) {
  index = 0;
  if (index > i)
  goto index;
}
