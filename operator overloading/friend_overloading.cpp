#include <iostream>
using namespace std;

class Time
{
private:
    int hours, mins;

public:
    Time(int hh = 0, int mm = 0)
    {
        mins = mm % 60;
        hours = (hh + mm / 60) % 24;
    }

    void printTime()
    {
        cout << hours << ":" << mins << "Hours\n";
    }

    friend Time operator+(Time lhr, Time rhs);
};
Time operator+(Time lhs, Time rhs)
{
    Time result(lhs.hours + rhs.hours, lhs.mins + rhs.mins);
    return result;
}
int main()
{
    Time t1(7, 30), t2(1, 45), t3;
    t3 = t1 + t2;
    t1.printTime();
    t2.printTime();
    t3.printTime();
}
