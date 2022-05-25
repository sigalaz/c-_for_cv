#include <iostream>
#include <sstream>

int main() {

  enum class DOC_TYPE { TXT, PNG, TXT_AND_PNG };

  // std::stringstream filename{"00205.txt 301.png"};

  std::cout << "Give me 2 armunets in the form of <INT>.<EXT> where INT is an "
               "integer numer and EXT is either PNG or TXT"
            << std::endl;

  std::string input;
  std::cin >> input;

  // become a stringstream so we can separate this values from first to second
  // argument and from int to data type
  std::stringstream filenames{input};

  DOC_TYPE document = DOC_TYPE::TXT;

  switch (document) {
  case DOC_TYPE::TXT:
    std::cout << "txt file \n";
    break;
  case DOC_TYPE::PNG:
    std::cout << "png file \n";
    break;
  case DOC_TYPE::TXT_AND_PNG:
    std::cout << "png and txt file \n";
    break;
  }
  std::cerr
      << "Error your inpur does not match with any of the defined scenarios"
      << std::endl;
  std::exit(EXIT_FAILURE);

  return 0;
}
