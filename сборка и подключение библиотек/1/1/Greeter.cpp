#include "Greeter.h"

std::string Greeter::greet(std::string str) {
	std::string result;
	result = "Здравствуйте, " + str + "!";
	return result;
}