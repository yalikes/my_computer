#include"and_gate.h"
computer::AndGate::AndGate()
{
    port_map["in_1"]=false;
    port_map["in_2"]=false;
    port_map["out_1"]=false;
}

bool computer::AndGate::get_port_value(std::string port_name)
{
    return port_map[port_name];
}
void computer::AndGate::set_port_value(std::string port_name,bool value)
{
    port_map[port_name]=value;
}