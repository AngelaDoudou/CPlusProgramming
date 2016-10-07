#include "Rectangle.h"

int main(int argc,char **argv){
    Rectangle rt0(3,4,3,4);
    Rectangle rt1(rt0);
    Rectangle rt2 = rt1;
    rt0.print();
    rt1.print();
    rt2.print();
    return 0;
}
