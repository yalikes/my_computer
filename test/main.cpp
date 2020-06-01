#include<iostream>

#include"../gates/print_gate.h"
#include"../global/world.h"
#include"start.h"

int main()
{
	using namespace std;
	using namespace computer;
	shared_ptr<PrintGate> my_print_gate{new PrintGate};
	shared_ptr<StartEvent> se{new StartEvent{my_print_gate.get()}};
	world.push_event(se);
	world.run();
}
