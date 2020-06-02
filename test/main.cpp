#include<iostream>

#include"../gates/print_gate.h"
#include"../gates/buffer_gate.h"
#include"../global/world.h"
#include"start.h"

int main()
{
	using namespace std;
	using namespace computer;
	BufferGate buffer_gate{};
	Wire wire1;
	PrintGate pg1{"hello"};
	PrintGate pg2{"world"};

	wire1.next_ports.push_back({&pg1,"in_1"});
	wire1.next_ports.push_back({&pg2,"in_1"});
	buffer_gate.output_port_map["out_1"]=wire1;
	shared_ptr<StartEvent> se{new StartEvent{&buffer_gate}};
	world.push_event(se);
	world.run();
}
