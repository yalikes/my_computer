#ifndef WORLD
#define WORLD

#include<queue>
#include<memory>
#include"../event/event.h"

namespace computer
{
class World
{
public:
	World();
	static bool has_one;//init in World();, and should only be modifided by World();
	void push_event(std::shared_ptr<Event> event);
	void run();
private:
	std::priority_queue<std::shared_ptr<Event>,
						std::vector<std::shared_ptr<Event>>,
						std::less<std::shared_ptr<Event>>> event_queue;
};

extern World world;
}

#endif