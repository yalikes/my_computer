#include"buffer_gate.h"

computer::BufferGate::BufferGate()
{
    port_map["in_1"]=false;
    port_map["out_1"]=false;
}

void computer::BufferGate::set_port_value(std::string port_name, bool value)
{
    if(value!=port_map[port_name])
    {
        world.push_event(std::shared_ptr<BufferGateEvent>{
           new BufferGateEvent{this,value}});
        port_map[port_name]=value;
    }
}

computer::BufferGateEvent::BufferGateEvent(BufferGate* owner_p,bool mode_p)
:owner{owner_p}
{
    mode=mode_p ? Mode::T : Mode::F;
}

void computer::BufferGateEvent::act()
{
    switch (mode)
    {
    case Mode::T:
        owner->output_port_map["out_1"].change_next_ports(true);
        break;
    case Mode::F:
        owner->output_port_map["out_1"].change_next_ports(false);
    }
}