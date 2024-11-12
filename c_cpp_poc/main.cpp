#include <iostream>

int main(int argc, char** argv){

	int uninitializedVar;  // Uninitialized variable usage
    if (uninitializedVar == 0) {  // Potential undefined behavior
        std::cout << "Variable is zero" << std::endl;
    }

	std::cout << "Hello World" << std::endl;
	return 0;
}