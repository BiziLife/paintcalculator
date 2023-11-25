#include <iostream>
#include "Room.h"


//Implementation Section - Details about each public function

void input_length(double& length);
void input_width(double& width);
void input_height(double& height);

int main(){
	double length{ 0 };
	double width{ 0 };
	double height{ 0 };
	
	std::string keyboard_input = " ";
	while (keyboard_input != "-1") {
		system("cls");
		input_length(length);
		input_width(width);
		input_height(height);

		Room living;
		living.setLength(length);
		living.setWidth(width);
		living.setHeight(height);
		living.gallonRequired();

		std::cout << "Calculate paint for another room ( Enter -1 for no ) ";
		std::cin >> keyboard_input;

	}

	return 0;

}

void input_length(double& length) {
	std::cout << "Enter the length: ";
	std::cin >> length;

	while (std::cin.fail() || length < 0 || length > 50) {
		std::cout << "Please enter a length thats greater then 0ft but less then 50ft: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cin >> length;
	}
	
}

void input_width(double& width) {
	std::cout << "Enter the width: ";
	std::cin >> width;
	while (std::cin.fail() || width < 0 || width > 50) {
		std::cout << "Please enter a length thats greater then 0ft but less then 50ft: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cin >> width;
	}
}

void input_height(double& height) {
	std::cout << "Enter the height: ";
	std::cin >> height;

	while (std::cin.fail() || height < 0 || height > 50) {
		std::cout << "Please enter a length thats greater then 0ft but less then 50ft: ";
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cin >> height;
	}
}
