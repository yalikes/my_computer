#include"print_gate.h"
#include"../global/world.h"
#include<iostream>

void computer::PrintGateEvent::act()
{
    using namespace std;
    cout<<"hi! I was activate!"<<endl;
}

computer::PrintGate::PrintGate()
{
    port_map["in_1"]=false;
}
computer::PrintGate::~PrintGate()
{
    std::cout<<"PrintGate was delete"<<std::endl;
}

void computer::PrintGate::set_port_value(std::string port_name, bool value)
{
    if(port_map["in_1"]!=value)
    {
        port_map["in_1"]=value;
        if(port_map["in_1"])
        {
            std::cout<<"print_gate output on."<<std::endl;
        }
        else
        {
            std::cout<<"print_gate output off"<<std::endl;
        }
    }
}

bool computer::PrintGate::get_port_value(std::string port_name)
{
    return false;
}