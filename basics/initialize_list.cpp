#include <iostream>


using namespace std;
class baseA{
    public:
        int baseA_val;

    baseA(int a=100):baseA_val(a){
        cout <<"base A:"<< baseA_val << endl;
    }
    ~baseA(){}
};

class son:public baseA{
    public:
        int son_val;
        int son_val2;
    

    son(int a=2):baseA(a),son_val2(3){
        cout <<"son1:" <<son_val << endl;
        cout <<"son2:" <<son_val2 << endl;
    }
    ~son(){}
};

int main(){
    son son_A(99);
    cout << "finish created" << endl;
    return 0;
}

