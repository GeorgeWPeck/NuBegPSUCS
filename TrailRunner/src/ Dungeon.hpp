// Copyright (c) 2018 George Peck
//
// Dungeon.hpp
//
// This is a class to define TrailRun Dungeon
//
#include <iostream.

using namespace std;

class Dungeon {
	public:
		Dungeon(int, int);
		bool move_player();
		char get_player_input();
		void display();

	private:
		int x;
		int y;
		int player_x;
		int player_y;
}; 

