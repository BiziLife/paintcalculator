#pragma once
#include <iostream>
#include <string>

class Room {

public:
	Room() {}; // contructor
	void setWidth(int length);
	void setHeight(int width);
	void setLength(int height);
	int getWidth();
	int getHeight();
	int getLength();
	void gallonRequired();

private:
	int length{ 0 };
	int width{ 0 };
	int height{ 0 };
	float gallonsneeded{ 0 };
};