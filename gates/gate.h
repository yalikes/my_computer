#ifndef GATE
#define GATE

#include<map>
#include<vector>
#include<string>
#include<memory>
namespace computer
{
class Gate;
class Wire
{
public:
	std::vector< std::pair<Gate*, std::string> > next_ports;
	void change_next_ports(bool value);//
};
class Gate
{
public:
	virtual void set_port_value(std::string port_name,bool value)=0;
	virtual bool get_port_value(std::string port_name);
	std::map<std::string,Wire> output_port_map;
	std::map<std::string,bool> port_map;
};
}
#endif
