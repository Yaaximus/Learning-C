#include<iostream>

class Log
{
public:
	enum LogLevel
	{
		LevelError = 0, LevelWarning, LevelInfo
	};
private:
	LogLevel m_LogLevel = LevelInfo;
public:
	void SetLevel(LogLevel level)
	{
		m_LogLevel = level;
	}
	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
		{
			std::cout << "[Error]" << message << std::endl;
		}
	}
	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
		{
			std::cout << "[Warning]" << message << std::endl;
		}
	}
	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
		{
			std::cout << "[Info]" << message << std::endl;
		}
	}

};

// Static (Only visible in the specified translation unit) or else Gloabbly avaliable and can be found by linker
static int s_Variable = 10;

// Use extern to get the value of a global variable from another cpp file using linker
extern int s_Variable_externally_avaliable;

class Player : public Log
{
public:
	int x = 0, y = 0;
	int speed = 1;

	void Move(int xa, int ya)
	{
		std::cout << x << ", " << y << std::endl;
		x += xa * speed;
		y += ya * speed;
		std::cout << x << ", " << y << std::endl;
	}
};

struct Entity
{
	int x, y;
	static int a, b;

	void Print_xy()
	{
		std::cout << x << ", " << y << std::endl;
	}

	static void Print_ab()
	{
		std::cout << a << ", " << b << std::endl;
	}
};

int Entity::a;
int Entity::b;

class Student
{
public:
	float X, Y;

	Student(float x, float y)
	{
		std::cout << "Student Class Initialized..." << std::endl;

		X = x;
		Y = y;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}

	~Student()
	{
		std::cout << "Destructor Launched..." << std::endl;
	}
};

void debug_destructor()
{
	// Constructor in class
	{
		Student student(5.0f, 10.0f);
		student.Print();
	}
}

void Function_with_static_var()
{
	static int i = 0;
	
	i++;
	std::cout << i << std::endl;
}

int main()
{
	std::cout << "Classes in C++" << std::endl;

	// Player class
	{
		Player player_1, player_2;
		player_1.Info("Moving player 1");
		player_1.Move(1, -1);
		player_2.Move(3, -3);
	}

	// Logging class
	{
		Log log;

		log.SetLevel(Log::LevelError);

		log.Error("Hello!");
		log.Warn("Hello!");
		log.Info("Hello!");
	}

	// Static variable
	std::cout << s_Variable << std::endl;
	std::cout << s_Variable_externally_avaliable << std::endl;

	// Static Variable in Class/Struct
	{
		Entity e1 = { 1,2 };
		Entity e2;

		Entity::a = 5;
		Entity::b = 6;

		e2.x = 3;
		e2.y = 4;

		e1.Print_xy();
		e2.Print_xy();

		Entity::Print_ab();
	}

	// Static in Function
	{
		Function_with_static_var();
		Function_with_static_var();
		Function_with_static_var();
		Function_with_static_var();
		Function_with_static_var();
	}

	// Constructor and Destructor in Class

	debug_destructor();
	
	std::cout << "Press Enter to exit." << std::endl;
	std::cin.get();
}