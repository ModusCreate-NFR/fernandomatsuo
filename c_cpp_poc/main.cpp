// #include <iostream>

// int main(int argc, char** argv){

// 	std::cout << "Hello World" << std::endl;
// 	return 0;
// }

#include <iostream>
#include <string>

void queryDatabase(const std::string& userInput) {
    std::string query = "SELECT * FROM users WHERE name = '" + userInput + "';"; 
    // Potential SQL injection vulnerability
    std::cout << "Executing query: " << query << std::endl;
    // ...execute query (not shown)
}

int main() {
    std::string userInput;
    std::cout << "Enter your name: ";
    std::cin >> userInput;
    queryDatabase(userInput);
    return 0;
}