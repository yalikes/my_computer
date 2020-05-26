#include<vector>
namespace computer
{
class World
{
public:
	World();
	static bool has_one;//init in World();, and should only be modifided by World();
	void push_event();
private:
	//std::vector<>
};

extern World world;
}
