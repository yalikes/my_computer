#include<iostream>
#include"../global/world.h"
#include"../event/event.h"
#include"../gates/print_gate.h"

class StartEvent: public computer::Event
{
public:
    StartEvent(std::shared_ptr<computer::PrintGate> gate_ptr)
    {
        owner=gate_ptr;
    }
    void act() override
    {
        owner->set_port_value("in_1",true);
    }
    long long int remain_time=1000;
private:
    std::shared_ptr<computer::PrintGate> owner;
};