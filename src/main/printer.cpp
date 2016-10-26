#include <iostream>

#include "sample.hpp"

void print_fizzbuzz(int min, int max) {
    for (int n = min; n <= max; n++) {
        if (sample::is_fizzbuzz(n)) {
            std::cout << "FizzBuzz" << std::endl;
        }
        else if (sample::is_fizz(n)) {
            std::cout << "Fizz" << std::endl;
        }
        else if (sample::is_buzz(n)) {
            std::cout << "Buzz" << std::endl;
        }
        else {
            std::cout << n << std::endl;
        }
    }
}
