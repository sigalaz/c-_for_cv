#include <cstdlib>
#include <iostream>
#include <random>

int main() {

  std::random_device rd;
  std::uniform_int_distribution<int> dist(0, 99);

  int winner_number = dist(rd);
  int guessed_number;

  while (guessed_number != winner_number) {
    std::cout << "Please input any number from 0 to 99" << std::endl;
    std::cin >> guessed_number;
    if (std::cin.fail()) {
      std::cerr << "Error encountered, exiting..." << std::endl;
      std::cout << "The random number was:  " << winner_number << std::endl;
      std::exit(EXIT_FAILURE);
    } else if (guessed_number > 99 || guessed_number < 0) {
      std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;

    } else if (guessed_number > winner_number) {
      std::cout << "Your guess is larger than the winner number " << std::endl;
    } else if (guessed_number < winner_number) {
      std::cout << "Your guess is lower than the winner number " << std::endl;
    } else if (guessed_number == winner_number) {
      std::cout << "You won! Congrats!!" << std::endl;
      std::cout << "The random number was: " << winner_number << std::endl;
      std::exit(EXIT_SUCCESS);
    }
  }
}