#include <iostream>

int main(int argc, char** argv){

	std::cout << "Hello World" << std::endl;
	return 0;
}

bool checkOverflow(unsigned short x, unsigned short y) {
  // BAD: comparison is always false due to type promotion
  return (x + y < x);  
}