#ifndef AND_GATE
#define AND_GATE

#include"implement_gate.h"

namespace computer
{
class AndGate:public Gate
{
public:
    AndGate();
    void set_port_value(std::string port_name,bool value) override;
};
class AndGateEvent:public Event
{
public:
    enum class Mode{T,F};
    AndGateEvent(AndGate* owner_p,bool mode_p);
    void act() override;
private:
    AndGate* owner;
    Mode mode;
};
}

#endif