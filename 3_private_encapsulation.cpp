#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class A
{
    int value;

public:
    string name;
    A(string name)
    {
        this->name = name;
    }
    void setter(int value)
    {
        this->value = value;
    }

    void getter()
    {
        cout << this->value << endl;
    }
};
int main()
{
    A obj("Shafi");
    obj.setter(17);
    obj.getter();
}