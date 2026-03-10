module mod:partition.impl;

import :partition;

namespace mod {
int add(int a, int b) {
  return a + b;
}

Adder::Adder(int a, int b) : result {add(a, b)} {}

int Adder::getResult() {
  return result;
}

} // namespace mod
