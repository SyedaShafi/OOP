#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;
class Car
{
public:
    string name;
    void display()
    {
        cout << name << " is a car";
    }
};

class Toyota : public Car
{
public:
    Toyota(string name)
    {
        this->name = name;
    }
};

int main()
{
    Toyota obj("Toyota");
    obj.display();
}