#include <iostream>

using namespace std;
class Test{
    public:
        Test(){
            cout << "created object" << endl;
        }

        ~Test(){
            cout << "delete object" << endl;
        }

        void print_msg(void){
            cout << "this is Test 123" << endl;
        }
};

int main(void){
    Test *p_test=new Test();
    delete p_test;
    Test objt;
    objt.print_msg();
    return 0;
}