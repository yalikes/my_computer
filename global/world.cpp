#include<iostream>
#include<thread>
#include"world.h"
//init block
bool computer::World::has_one=false;//init value in static memory.

computer::World computer::world{};//init a global world object, in static memory.

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
void computer::World::push_event(std::shared_ptr<Event> e)
{
	event_queue.push(e);
}

void computer::World::run()
{
	while(!event_queue.empty())
	{
		std::unique_lock<std::mutex> clk{world.queue_m};//get lock here,pop a event then release it

		std::shared_ptr<Event> e=event_queue.top();
		event_queue.pop();

		clk.unlock();
		//TODO minus remain time for all remaining event
		e->act();
	}
	std::cout<<"ends."<<std::endl;
}

void computer::World::set_running_mode(RunningMode m)
{
	running_mode = m;
}
