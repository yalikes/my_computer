#ifndef GATE
#define GATE

#include<map>
#include<vector>
#include<string>
namespace computer
{
class Gate;
class Wire
{
public:
	std::vector< std::pair< std::shared_ptr<Gate>, std::string> > next_ports;
	void change_next_ports();//
};
class Gate
{
public:
	Gate():switch_time{1000}{}
	virtual void set_port_value(std::string port_name,bool value)=0;
	virtual bool get_port_value(std::string port_name)=0;
	std::map<std::string,Wire> output_port_map;
	std::map<std::string,bool> port_map;
protected:
	unsigned int switch_time;// unit: picosecond
};
}
#endif