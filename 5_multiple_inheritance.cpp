#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int N = 1e7 + 1;

class A
{

public:
    void task1()
    {
        cout << "This is task 1\n";
    }
};

class B
{
public:
    void task2()
    {
        cout << "This is task 2\n";
    }
};

class C : public A, public B
{
public:
    void task3()
    {
        cout << "This is task 3\n";
    }
};

int main()
{
    C obj;
    obj.task1();
    obj.task2();
    obj.task3();
}