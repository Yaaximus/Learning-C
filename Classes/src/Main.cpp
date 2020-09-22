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
	int m_LogLevel = LogLevelInfo;
public:
	void SetLevel(int level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LogLevelError)
		{
			std::cout << "[Error]" << message << std::endl;
		}
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= LogLevelWarning)
		{
			std::cout << "[Warning]" << message << std::endl;
		}
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LogLevelInfo)
		{
			std::cout << "[Info]" << message << std::endl;
		}
	}

};

// Static (Only visible in the specified translation unit) or else Gloabbly avaliable and can be found by linker
static int s_Variable = 10;

// Use extern to get the value of a global variable from another cpp file using linker
extern int s_Variable_externally_avaliable;

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

		log.SetLevel(log.LogLevelInfo);

		log.Error("Hello!");
		log.Warn("Hello!");
		log.Info("Hello!");
	}

	// Static variable
	std::cout << s_Variable << std::endl;
	std::cout << s_Variable_externally_avaliable << std::endl;
	
	std::cout << "Press Enter to exit." << std::endl;
	std::cin.get();
}