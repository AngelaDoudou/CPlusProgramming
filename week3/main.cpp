#include <iostream>
using namespace std;

class Fruit {
public:
    int no;
    char key;
//char key1;
//char key2;
//char key3;
//char key4;
    double weight;
//char key5;
//char key6;
//char key7;
//char key8;
public:
//    void print(){}
    virtual void process(){}
virtual void p(){}
};
class Apple : public Fruit{
public:
    int size;
    char type;
public:
//    void save(){}
    virtual void process(){}
virtual void p(){}
};
int main(int argc, char ** argv){
    Fruit f;
    Apple apl;
    cout << "the fruit size is:" << sizeof(f) << endl
	 //<< "sizeof int no:" << sizeof(f.no) << endl
	 //<< "sizeof double weihgt:" << sizeof(f.weight) << endl
	 //<< "sizeof char key:" << sizeof(f.key) << endl
         << "the apple size is:" << sizeof(apl) << endl;
	 //<< "sizeof int size :" << sizeof(apl.size) << endl
         //<< "sizeof char type:" << sizeof(apl.type) << endl;

}
