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
bool constexpr operator<(const Event& lhs, const Event& rhs)
{
    return lhs.remain_time<rhs.remain_time;
}
}
#endif