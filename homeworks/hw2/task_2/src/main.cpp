#include <iostream>
#include <sstream>

int main(int argc, char const *argv[]) {

  std::cout << "Got" << argc << "Params\n";

  if (argc != 3) {
    std::cerr << "Error, number of arguments is different than 2 " << std::endl;
    std::exit(EXIT_FAILURE);
  }

  std::stringstream first_arg_stream{argv[1]};
  std::stringstream second_arg_stream{argv[2]};

  int first_num = 0;
  std::string first_data_type;

  int second_num = 0;
  std::string second_data_type;

  first_arg_stream >> first_num >> first_data_type;
  second_arg_stream >> second_num >> second_data_type;

  // create all the possible scenarios and perform operations based on that

  const std::string txt = ".txt";
  const std::string png = ".png";

  const bool both_txt = first_data_type == txt && second_data_type == txt;
  const bool both_png = first_data_type == png && second_data_type == png;
  const bool first_txt_second_png =
      first_data_type == txt && second_data_type == png;

  // std::cout << first_data_type << " " << first_num << std::endl;
  // std::cout << second_data_type << " " << second_num << std::endl;

  int final_result = 0;

  if (both_txt) {
    final_result = (first_num + second_num) / 2;
    std::cout << final_result << std::endl;
    std::exit(EXIT_SUCCESS);
  } else if (both_png) {
    final_result = first_num + second_num;
    std::cout << final_result << std::endl;
    std::exit(EXIT_SUCCESS);
  } else if (first_txt_second_png) {
    final_result = first_num % second_num;
    std::cout << final_result << std::endl;
    std::exit(EXIT_SUCCESS);
  } else {
    std::cerr
        << "Error your input does not match with any of the defined scenarios"
        << std::endl;
    std::exit(EXIT_FAILURE);
  }

  return 0;
}
