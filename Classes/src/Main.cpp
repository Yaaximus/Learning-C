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

int main()
{
	std::cout << "Classes in C++" << std::endl;
	
	Player player_1, player_2;
	player_1.Move(1, -1);
	player_2.Move(3, -3);
	
	std::cout << "Press Enter to exit." << std::endl;
	std::cin.get();
}