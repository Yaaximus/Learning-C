#include<iostream>

class Player
{
public:
	int x=0, y=0;
	int speed=1;

	void Move(int xa, int ya)
	{
		std::cout << x << ", " << y << std::endl;
		x += xa * speed;
		y += ya * speed;
		std::cout << x << ", " << y << std::endl;
	}
};

class Log
{
public:
	const int LogLevelError = 0;
	const int LogLevelWarning = 1;
	const int LogLevelInfo = 2;
private:
	int LogLevel = LogLevelInfo;
public:
	void SetLogLevel(int level)
	{
		LogLevel = level;
	}
	void Error(const char* message)
	{
		if (LogLevel >= LogLevelError)
		{
			std::cout << "[Error]" << message << std::endl;
		}
	}
	void Warn(const char* message)
	{
		if (LogLevel >= LogLevelWarning)
		{
			std::cout << "[Warning]" << message << std::endl;
		}
	}
	void Info(const char* message)
	{
		if (LogLevel >= LogLevelInfo)
		{
			std::cout << "[Info]" << message << std::endl;
		}
	}

};

int main()
{
	std::cout << "Classes in C++" << std::endl;

	// Player class
	{
		Player player_1, player_2;
		player_1.Move(1, -1);
		player_2.Move(3, -3);
	}

	// Logging class
	{
		Log log;

		log.SetLogLevel(log.LogLevelInfo);

		log.Error("Hello!");
		log.Warn("Hello!");
		log.Info("Hello!");
	}
	
	std::cout << "Press Enter to exit." << std::endl;
	std::cin.get();
}