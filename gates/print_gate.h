#ifndef PRINT_GATE
#define PRINT_GATE
#include<memory>
#include"implement_gate.h"

namespace computer
{
class PrintGate: public  Gate
{
public:
    PrintGate();
    ~PrintGate();
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
    PrintGateEvent(PrintGate* owner_p);
    void act() override;
private:
    PrintGate* owner;
};
}
#endif