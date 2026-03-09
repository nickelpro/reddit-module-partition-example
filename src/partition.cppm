export module mod:partition;

export namespace mod {
int add(int a, int b);

struct Adder {
  Adder(int a, int b) : result {add(a, b)} {};
  int getResult();

private:
  int result;
};

} // namespace mod
