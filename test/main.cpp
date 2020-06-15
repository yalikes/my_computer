#include<iostream>

#include"../gates/print_gate.h"
#include"../gates/buffer_gate.h"
#include"../gates/and_gate.h"
#include"../global/world.h"
#include"start.h"

int main()
{
	using namespace std;
	using namespace computer;

	AndGate ag;
	BufferGate bg;
	PrintGate pg{"hello world!"};
	
	ag.output_port_map["out_1"].next_ports.push_back({&bg,"in_1"});
	bg.output_port_map["out_1"].next_ports.push_back({&pg,"in_1"});

	ag.port_map["in_2"]=true;
	shared_ptr<StartEvent> se{new StartEvent{&ag}};
	world.push_event(se);
	world.set_running_mode(RunningMode::interact);
	world.run();
}
