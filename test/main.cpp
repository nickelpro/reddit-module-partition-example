import mod;

int main() {
  mod::Adder adder(1, 2);
  auto result = mod::add(1, 2);
  return !(result == 3 && result == adder.getResult());
}
