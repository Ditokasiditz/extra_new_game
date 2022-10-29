#pragma once

/*
class that acts as the game engine.
Wrapper class.
*/
class Game
{
private:

public:
	//Constors /Destructors
	Game();
	virtual ~Game();

	//Functions
	void update();
	void render();
};

