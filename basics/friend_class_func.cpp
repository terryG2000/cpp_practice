#include <iostream>

using namespace std;

class a;
class b;
class c;

// void b::a_friend_func_from_class_b();
// void b::a_friend_func_from_class_b_with_para(a a);


class b
{
    public:
        // a b_new_a(99);
        // void a_friend_func_from_class_b();
        void a_friend_func_from_class_b_with_para(a a);
};

class a
{
    friend class c;
    friend void a_friend_func(a a);
    // friend void b::a_friend_func_from_class_b();
    friend void b::a_friend_func_from_class_b_with_para(a a);
    
    private:
        int prv_vat;
    public:
        a(int a):prv_vat(a){;}
        
};
class c
{
    public:
        a c_new_a=a(99);
        void c_func(void);
};
void a_friend_func(a a)
{
    cout << "friend :" << a.prv_vat << endl;
}


// void b::a_friend_func_from_class_b()
// {
//     cout << "myself friend class :" << b_new_a.prv_vat << endl;    
// }
void b::a_friend_func_from_class_b_with_para(a a)
{
    cout << "friend :" << a.prv_vat << endl;
}

void c::c_func(void)
{
    cout << "myself friend class :" << c_new_a.prv_vat << endl;
}


int main(void)
{
    a aa(88);
    b bb=b();
    c cc=c();
    a_friend_func(aa);
    cc.c_func();
    bb.a_friend_func_from_class_b_with_para(aa);
    cout << "main " << endl;
    return 0;
}   