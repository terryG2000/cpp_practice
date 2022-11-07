#include <iostream>

using namespace std;

class parent
{
    public:
        int a;
        int b;
        parent(int a,int b,int c,int d):a(a),b(b),c(c),d(d){};
        int get_a();
        int get_b();
        int get_c();
        int get_d();
        int a_add_b();

    protected:
        int c;
    
    private:
        int d;
};

int parent::a_add_b()
{
    return a+b;
}
int parent::get_a()
{
    return a;
}
int parent::get_b()
{
    return b;
}
int parent::get_c()
{
    return c;
}
int parent::get_d()
{
    return d;
}

int main(void){
    parent p=parent(1,2,3,4);
    cout << p.get_a() <<p.get_b() << p.get_c() << endl;
    return 0;
}