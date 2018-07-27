// Copyright (c) 2018 George Peck
//
//

#include "Dungeon.hpp"


int main()
{

	char player_move;

	Dungeon TrailRun(10, 10);

	TrailRun.display();

	while(player_move = TrailRun.get_player_input() != 'x')
	{
		TrailRun.move_player(player_move);
	}
}

