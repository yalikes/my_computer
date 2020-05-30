#include<vector>

#include"../event/event.h"

namespace computer
{
class World
{
public:
	World();
	static bool has_one;//init in World();, and should only be modifided by World();
	void push_event(Event& event);
	void run();
private:
	std::vector<Event&> event_queue;
};

extern World world;
}
