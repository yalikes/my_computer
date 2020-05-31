#ifndef EVENT
#define EVENT
namespace computer
{
class Event
{
public:
    virtual void act()=0;
    long long int remain_time;
};
}
#endif