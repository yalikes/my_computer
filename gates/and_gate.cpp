#include"and_gate.h"
computer::AndGate::AndGate()
{
    port_map["in_1"]=false;
    port_map["in_2"]=false;
    port_map["out_1"]=false;
    output_port_map["out_1"]=Wire{};
}

void computer::AndGate::set_port_value(std::string port_name,bool value)
{
    if(port_map[port_name]!=value)
    {
        port_map[port_name]=value;
        if(port_map["in_1"] && port_map["in_2"])
            world.push_event(std::shared_ptr<Event> {new AndGateEvent{this,true}});
        else
            world.push_event(std::shared_ptr<Event> {new AndGateEvent{this,false}});
    }
}

computer::AndGateEvent::AndGateEvent(AndGate* owner_p,bool mode_p)
:owner{owner_p}
{
    mode=mode_p ? Mode::T : Mode::F;
}

void computer::AndGateEvent::act()
{
    if(mode==Mode::T)
    {
        owner->output_port_map["out_1"].change_next_ports(true);
    }
    else
        owner->output_port_map["out_1"].change_next_ports(false);
}