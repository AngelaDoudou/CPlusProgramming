#ifndef _RECTANGLE_CLASS_
#define _RECTANGLE_CLASS_
#include <iostream>
using std::cout;
using std::endl;
class Shape
{
    private:
        int no;
    public:
        Shape(int _no = 0):no(_no){}
        inline void SetNo(const int _no){ no = _no;}
        inline int GetNo() const { return no;}
};
class Point
{
    private:
        int x;
        int y;
    public:
        Point(int _x, int _y):x(_x),y(_y){}
        inline int GetX() const { return x;}
        inline int GetY() const { return y;}
};
class Rectangle: public Shape
{
    private:
        int width;
        int height;
        Point * leftUp;
    public:
        Rectangle(const int _width, const  int _height, const  int _x, const  int _y)
            :width(_width), height(_height){
            leftUp = new Point(_x, _y);
        }
        Rectangle(const Rectangle& other)
            :width(other.GetW()), height(other.GetH()){
            SetNo(other.GetNo());
            leftUp = new Point(other.GetLeftUp()->GetX(), other.GetLeftUp()->GetY());
        }
        Rectangle& operator=(const Rectangle& other){
            SetNo(other.GetNo());
            width = other.GetW();
            height = other.GetH();
            if(leftUp)
                delete leftUp;
            leftUp = new Point(other.GetLeftUp()->GetX(), other.GetLeftUp()->GetY());
            return *this;
        }
        ~Rectangle(){
            delete leftUp;
        }
        inline void print(){
            cout << "[" << GetNo() << "]["
                << width << "," << height
                << ",(" << leftUp->GetX() << "," << leftUp->GetY() << ")]" << endl;
        }
        inline int GetW() const { return width;}
        inline int GetH() const { return height;}
        inline Point *GetLeftUp() const { return leftUp;}
};

#endif//_RECTANGLE_CLASS_
