#include "lib/hello_time.hpp"
#include "lib/hello_greet.hpp"
#include "lib/color.hpp"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
  std::string who = "world";
  if (argc > 1) {
    who = argv[1];
  }
  std::cout << get_greet(who) << std::endl;
  print_localtime();
  std::cout << get_color() << std::endl;
  return 0;
}
