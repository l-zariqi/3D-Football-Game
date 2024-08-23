#include "ConsoleDebug.h"

#include "Vector3.h"


void Log(std::string message){
std::cout<< "Debug Log: " << message << std::endl;
}

void LogIntValue(std::string message, int value, std::string message2)
{
	std::cout << "DebugValue Log: "<< message << value << message2 << std::endl;
}

void LogIntValue(std::string message, int value)
{
	std::cout << "DebugValue Log: " << message << value << std::endl;
}

void LogIntValue(std::string message, Vector3 value)
{
	std::cout << "DebugValue Log: " << message << "X: " << value.x << "Y: " << value.y << "Z: " << value.z << std::endl;
}

void LogIntro()
{
	std::cout << "Welcome to the 3D Football Game - Lind Zariqi/w1712905"<< std::endl;
	std::cout << " " << std::endl;
	std::cout << "----- Controls -----" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Up Arrow - aim the ball up" << std::endl;
	std::cout << "Down Arrow - aim the ball down" << std::endl;
	std::cout << "Left Arrow - aim the ball left" << std::endl;
	std::cout << "Right Arrow - aim the ball right" << std::endl;
	std::cout << "Z or spacebar key - shoot the ball to the back wall" << std::endl;
	std::cout << "R - Reset" << std::endl;
	std::cout << "F - Follow Football" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "----- Aim of the Game -----" << std::endl;
	std::cout << " " << std::endl;
	std::cout << "Hit targets to score points, hit all targets to win" << std::endl;
	std::cout << " " << std::endl;
}
