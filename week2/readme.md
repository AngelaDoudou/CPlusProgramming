一，请使用正规编码风格。
二，所有代码写在.h 和.cpp文件中，不要写在word或txt等文件中。
三，请将作业以附件上传的形式提交，请用你的云课堂昵称命名文件夹。

依照学术诚信条款，我保证此回答为本人原创，所有回答中引用的外部材料已经做了出处标记。
1（60分）
为 Rectangle 类实现构造函数,拷贝构造函数,赋值操作符,析构函数。

class Shape
{                   
   int no;
};              
class Point
{
   int x;
   int y;
};              
class Rectangle: public Shape
{
   int width;
   int height;
   Point * leftUp;
public:
   Rectangle(int width, int height, int x, int y);
   Rectangle(const Rectangle& other);
   Rectangle& operator=(const Rectangle& other);
   ~Rectangle();         
};

