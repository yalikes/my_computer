#include<iostream>

#include"world.h"
//init block
bool computer::World::has_one=false;

computer::World world;

computer::World::World()
{
	using namespace std;
	if(has_one)
	{
		cerr<<"another World exists!"<<endl;
		exit(-1);
	}
	else
	{
		has_one=true;
	}
}
