#include <iostream>
#include "test.h"
using std::cout;
using std::endl;
//extern const int cvar;
class varTest{
public:
    static void increase(int& var){ 
        var++;
	cout << "var:" << var << endl;
    }
};
int main(int argc, char** argv){
	int i = 10;
        int ii = 12;
        int &a = i;
        //a = ii;
        varTest::increase(i);
	cout << "i:" << i << endl
             << "a:" << a << endl
             << "ii:" << ii << endl;	
	//cout << "note test" << endl
        //     << "cvar =" << cvar << endl;

	return 0;
}
