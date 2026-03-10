module mod:partition.impl;

import :partition;

namespace mod {

Adder::Adder(int a, int b) : result {add(a, b)} {}

int Adder::getResult() {
  return result;
}

} // namespace mod
