#ifndef AND_GATE
#define AND_GATE

#include"gate.h"
#include"../event/event.h"

namespace computer
{
class AndGate:public Gate
{
public:
    AndGate();
    bool get_port_value(std::string port_name) override;
    void set_port_value(std::string port_name,bool value) override;
};
class AndGateActiveEvent:public Event
{
public:
    AndGateActiveEvent(AndGate& owner);
    void act() override;
private:
    AndGate& owner;
};
}

#endif