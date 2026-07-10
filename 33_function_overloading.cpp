// example on function overloading
#include <iostream>
using namespace std;

class area
{
public:
    int calculatearea(int r) // circle
    {
        return (3.14 * r * r);
    }
    int calculatearea(int l, int b) // rectangle
    {
        return (l * b);
    }
};
int main()
{
    area A1, A2;
    cout << A1.calculatearea(4) << endl;
    cout << A2.calculatearea(2, 3) << endl;
    cout << A1.calculatearea(1, 9) << endl;
    return 0;
}