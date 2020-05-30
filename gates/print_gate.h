#ifndef PRINT_GATE
#define PRINT_GATE
#include"implement_gate.h"

namespace computer
{
class PrintGate: public  Gate
{
public:
    void set_port_value(std::string port_name,bool value) override;

    /*
    just use this object to print something, so, get its port value
    always return false;
    */
    bool get_port_value(std::string port_name) override;
};
class PrintGateEvent: public Event
{
public:
    void act() override;
};
}
#endif