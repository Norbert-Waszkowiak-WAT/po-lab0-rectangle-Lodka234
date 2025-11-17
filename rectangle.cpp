#include <iostream>
using namespace std;
class Rectangle {
private:
    double width;
    double hight;
public:
    rectangle(double w, double h):
    width(w),hight(h){};
    void setWidth(double h){
        width = w;
    }
    void setHeight(double h){
        hight = h;
    }
    double getWidth() const{
        return height;
    }
    double area() const{
        return width*hight;
    }
    double perimeter()const{
        return 2*(hight+width);
    }
    double disply() const{
        cout << "Rectangle:" << width << "x" << height << "h" << endl;
        cout << "Area" << area() << endl;
        cout << "Perimeter" << perimeter() << endl; 
    }
};