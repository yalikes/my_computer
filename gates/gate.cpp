#include"gate.h"

void computer::Wire::change_next_ports(bool value)
{
    for(auto p:next_ports)
    {
        p.first->set_port_value(p.second,value);
    }
}

bool computer::Gate::get_port_value(std::string port_name)
{
    return port_map[port_name];
}