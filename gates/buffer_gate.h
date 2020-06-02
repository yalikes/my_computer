#ifndef BUFFER_GATE
#define BUFFER_GATE

#include"implement_gate.h"
namespace computer
{
class BufferGate: public Gate
{
public:
    BufferGate();
    void set_port_value(std::string port_name,bool value) override;
};
class BufferGateEvent: public Event
{
public:
    enum class Mode:bool{T,F};
    BufferGateEvent(BufferGate* owner,bool mode);
    void act() override;
private:
    BufferGate* owner;
    Mode mode;
};
}

#endif