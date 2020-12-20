#include <iostream>
using namespace std;

class Player {
public:
	
	float x = 0, y = 0;
	float MoveSpeed = 0;

	void Move(int xa, int ya) {
		
		x += xa * MoveSpeed;
		y += ya * MoveSpeed;

	}

};

int main()
{
	Player player;
	int xOffset;
	int yOffset;

	cout << "Enter move offsets!\n";
	cin >> xOffset;
	cin >> yOffset;

	cout << "Enter movement speed!\n";
	cin >> player.MoveSpeed;

	player.Move(xOffset, yOffset);

	cout << "Pos at x: " << player.x << endl;
	cout << "Pos at y: " << player.y << endl;
	
	return 0;
}
