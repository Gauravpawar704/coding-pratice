//USER DEFINE TO DATA TYPE;

#include <iostream>
using namespace std;

class Distance
{
public:
    Distance()
    {
        feet = 0;
        inches = 0.0;
    }

    Distance(float metres)
    {
        float f;
        f = 3.28 * metres;
        feet = int(f);
        inches = 12 * (f - feet);
    }

    void showdist(void)
    {
        cout << "Feet= " << feet << ",";
        cout << "Inches= " << inches << endl;
    }

private:
    int feet;
    int inches;
};

int main()
{
    Distance d1 = 1.25;
    Distance d2;

    d2 = 2.0;

    cout << "1.25 metres is: ";
    d1.showdist();

    cout << "2.0 metres is: ";
    d2.showdist();

    return 0;
}

