#include"print_gate.h"
#include<iostream>

void computer::PrintGateEvent::act()
{
    using namespace std;
    cout<<"hi! I was activate!"<<endl;
}

void computer::PrintGate::set_port_value(std::string port_name, bool value)
{
    
}

bool computer::PrintGate::get_port_value(std::string port_name)
{
    return false;
}