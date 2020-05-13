#include<map>
namespace computer
{
class Port
{
public:
	string name;
	bool value;
};
class Gate
{
public:
	Gate():switch_time{1000}{}
	void set_port_value(Port p,bool value);
	bool get_port_value(Port p);
protected:
	unsigned int switch_time;// unit: picosecond
	std::map<Port,bool> port_map;
private:
	void set_event();
}
