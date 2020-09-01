#include <iostream>

//using namespace std;

std::string Fullname = "";
int a = 10;
int b = 5;
int c = 20;
int z = 10;

// All the functions can access to these variables, since they are out here, but if we had written them 

int main() {

	if (a > b) {
		std::cout << "A is greater than B\n";
	}
	if (a == z) {
		std::cout << "A and Z are equal\n";
	}
	if (a < b) {
		std::cout << "Nothing happens here\n";

	}
	if (a >= z) {// if ( a > z || a == z) 
		std::cout << "A is either greater than Z or equal to it\n";
	}
	if (a != b) {
		std::cout << "A and B are not equal\n";
	}

	/* 
	std::cout << "Entrer your full name ";
	std::getline(std::cin, Fullname);
	std::cout << "Your full name is : " << Fullname;
	
	*/
	


}
