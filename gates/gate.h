#include<map>
namespace computer
{
class Gate
{
public:
	Gate():switch_time{1000}{}
	virtual void set_port_value(std::string port_name,bool value){}
	virtual bool get_port_value(std::string port_name){}
	std::map<std::string,bool> port_map;
protected:
	unsigned int switch_time;// unit: picosecond
private:
	void set_event();
};