#include<iostream>
using namespace std;

template<typename T>
T add(T t1, T t2)
{
    return t1+ t2;
}

template<typename T>
T sub(T t1, T t2)
{
    return t1 - t2;
}

template<typename T>
T (*func[])(T,T) = {
    add, sub
};
int main()
{
    int a = func<int>[0](1,2);
    cout << a << endl;
    return 0;
}
