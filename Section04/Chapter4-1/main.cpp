// Scope and Duration of Local Variables

#include <iostream>

using namespace std;

int main()
{
    int apple = 5;
    cout << &apple << endl;

    {
        int apple = 3;
        cout << &apple << endl;
    }

    return 0;
}