// James Ruiz
// jruiz21@csu.fullerton.edu
// @jruiz21
// Partners: @JVong0812

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }

  double sum{0.0};
  for (std::string const& argument : arguments) {
    if (argument == arguments[0]) {
      continue;
    }
    sum = sum + std::stod(argument);
  }
  std::cout << "average = " << sum / static_cast<double>(arguments.size() - 1)
            << "\n";

  return 0;
}
