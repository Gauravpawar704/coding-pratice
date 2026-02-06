// FUNCTION IN SOURCE CLASS

#include <iostream>
using namespace std;
class Distfeet
{
public:
    Distfeet()
    {
        feet = 0;
        inches = 0;
    }

    Distfeet(int ft, float in)
    {
        feet = ft;
        inches = in;
    }
    void ShowFeet()
    {
        cout << "Feet= " << feet << endl;
        cout << "Inches= " << inches << endl;
    }

private:
    int feet;
    float inches;
};
class DisMeters
{
public:
    DisMeters()
    {
        meters = 0;
    }
    DisMeters(float m)
    {
        meters = m;
    }
    void ShowMeters()
    {
        cout << "Meters= " << meters << endl;
    }

    operator Distfeet()
    {
        float ffeet;
        float inches;
        int ifeet;

        ffeet = 3.28 * meters;

        ifeet = int(ffeet);
        inches = 12 * (ffeet - ifeet);
        return Distfeet(ifeet, inches); // return Distfeet(ifeet, inches);
    }

private:
    float meters;
};

int main()
{
    DisMeters dm1 = 1.0;
    Distfeet df1;
    df1 = dm1;

    dm1.ShowMeters();
    df1.ShowFeet();
}
