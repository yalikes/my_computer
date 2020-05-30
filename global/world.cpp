#include<iostream>

#include"world.h"
//init block
bool computer::World::has_one=false;//init value in static memory.

computer::World world{};//init a global world object, in static memory.

computer::World::World()
{
	using namespace std;
	if(has_one)
	{
		cerr<<"another World exists!"<<endl;
		exit(-1);
	}
	else
	{
		has_one=true;
	}
}

void computer::World::run()
{
	auto e=event_queue.pop_back();
}
