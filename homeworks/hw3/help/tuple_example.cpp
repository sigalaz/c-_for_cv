#include <iostream>
#include <tuple>
#include <array>

int main() {
	std::tuple<int, char> foo1(10, 'x');
	std::tuple<int, char> foo2(20, 'y');
	std::tuple<int, char> foo3(30, 'z');


	//std::array<std::tuple<int, char>, 3>; 
	std::array<std::tuple<int, char>, 3> a1 = {(20, 'x'), (20, 'y'), (30, 'y')};


	std::cout << a1[0] << std::endl
	//std::cout << std::get<0>(foo) << std::endl;
	return 0;


}
