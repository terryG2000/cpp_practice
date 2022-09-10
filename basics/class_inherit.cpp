#include <iostream>

using namespace std;

class parent{
    public:
       virtual void virtual_func(void);
       void hide_func(void);
};

class child: public parent{
    public:
        virtual void virtual_func(void) override;
        void hide_func(int a);
};


class grandchild: public child{
    public:
        void virtual_func(void) override;
        void hide_func(int a);
};


void parent::virtual_func(void){
    cout << " this is parent's virtual function" << endl;
}

void child::virtual_func(void){
    cout << " this is child's virtual function " << endl;
}

void grandchild::virtual_func(void){
    cout << "this is grandchild's virtual function " << endl;
}

void parent::hide_func(void){
    cout << "this is parent's hide_func " << endl;
}

void child::hide_func(int a){
     cout << "this is child's hide_func " <<a<< endl;
}

void grandchild::hide_func(int a){
    cout << "this is grandchild's hide_func" <<endl;
}


int main(void)
{
    parent p;
    child s;
    grandchild gc;
    parent *p_parent;

    cout << "parent pointer point to child" << endl;
    p_parent=&s;
    p_parent->hide_func();
    p_parent->virtual_func();
    
    cout << "parent pointer point to grandchild" << endl;
    p_parent=&gc;
    p_parent->hide_func();
    p_parent->virtual_func();

    p.virtual_func();
    p.hide_func();
    s.parent::virtual_func();
    s.virtual_func();
    s.hide_func(12);
    s.parent::hide_func();
    return 0;
}