#include "Room.h"
#include <iostream>

void Room::setLength(int Length) {
	length = Length;
}

void Room::setWidth(int Width) {
	width = Width;
}

void Room::setHeight(int Height) {
	height = Height;
}

int Room::getLength() {
	return length;
}
int Room::getWidth() {
	return width;
}
int Room::getHeight() {
	return height;
}

void Room::gallonRequired()
{
	double frontback = getLength() * getHeight() * 2;
	double leftright = getWidth() * getHeight() * 2;
	gallonsneeded = (frontback + leftright) / 400.00;
	std::cout << "Paint needed for room: " << gallonsneeded << std::endl;

}