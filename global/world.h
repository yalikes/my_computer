#ifndef WORLD
#define WORLD

#include<queue>
#include<memory>
#include<mutex>
#include"../event/event.h"

namespace computer
{
	enum class RunningMode
	{
		compute, //this means just compute, no interact
		interact
	};
class World
{
public:
	World();
	static bool has_one;//init in World();, and should only be modifided by World();
	void push_event(std::shared_ptr<Event> event);
	void run();
	void set_running_mode(RunningMode m);
	RunningMode running_mode;
private:
	std::mutex queue_m;
	std::priority_queue<std::shared_ptr<Event>,
						std::vector<std::shared_ptr<Event>>,
						std::less<std::shared_ptr<Event>>> event_queue;
};

extern World world;
}

#endif