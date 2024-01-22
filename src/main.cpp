#include <iostream>

enum StackDirection { UP, DOWN, UNKNOWN };

StackDirection up_or_down_internal(int *a_ptr) {
  int b = 2;
  int *b_ptr = &b;

  if (a_ptr < b_ptr) {
    return UP;
  } else if (b_ptr < a_ptr) {
    return DOWN;
  } else {
    return UNKNOWN;
  }
}

StackDirection up_or_down() {
  int a = 1;
  return up_or_down_internal(&a);
}

int main(int argc, char **argv) {
  StackDirection direction = up_or_down();

  if (direction == UP) {
    std::cout << "Up" << std::endl;
  } else {
    std::cout << "Down" << std::endl;
  }

  return 0;
}
