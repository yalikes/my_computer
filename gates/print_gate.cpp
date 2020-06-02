#include"print_gate.h"
#include"../global/world.h"
#include<iostream>

void computer::PrintGateEvent::act()
{
    using namespace std;
    cout<<owner->message<<endl;
}

computer::PrintGate::PrintGate(std::string message_p)
:message{message_p}
{
    port_map["in_1"]=false;
}
computer::PrintGate::~PrintGate()
{
}

void computer::PrintGate::set_port_value(std::string port_name, bool value)
{
    if(port_map["in_1"]!=value)
    {
        port_map["in_1"]=value;
        if(port_map["in_1"])
        {
            std::shared_ptr<PrintGateEvent> pge{new PrintGateEvent{this}};
            world.push_event(pge);
        }
    }
}

bool computer::PrintGate::get_port_value(std::string port_name)
{
    return false;
}

computer::PrintGateEvent::PrintGateEvent(PrintGate* owner_p)
:owner{owner_p}{}