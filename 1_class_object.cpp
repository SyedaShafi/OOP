#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class A
{
public:
    int value;

    A(int value)
    {
        this->value = value;
        cout << "This is constructor\n";
    }

    ~A()
    {
        cout << "This is destructor\n";
    }
};

int main()
{
    A obj(10);
    cout << obj.value << "\n";
}