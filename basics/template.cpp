#include <iostream>

using namespace std;


template <typename T, typename T1>
T print_msg(T a, T1 b)
{
    cout << "a:"<< a<<"b:"<<b<<endl;
    return a;
}

template <class T>
class temp_test{
    public:
        T a;
        T get_a(T b);
};

template <class T>
T temp_test<T>::get_a(T b){
    cout << "a:" << a <<endl;
    return b;
}


int main(void){
    cout << "this is temp test function"<< endl;

    cout << print_msg(10,100.123) << endl;

    cout << "temp_test created"<< endl;

    temp_test<int> test;
    cout << test.get_a(100) << endl;

    return 0;
}