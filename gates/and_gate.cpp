#include"and_gate.h"
computer::AndGate::AndGate()
{
    using namespace computer;
    port_map["in_1"]=false;
    port_map["in_2"]=false;
    port_map["out_1"]=false;
}