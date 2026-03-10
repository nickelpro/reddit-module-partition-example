export module mod:partition;

export namespace mod {
int add(int a, int b) {
  return a + b;
}

struct Adder {
  Adder(int a, int b);
  int getResult();

private:
  int result;
};

} // namespace mod
