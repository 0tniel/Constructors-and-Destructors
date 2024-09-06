// Otniel Jhirad
// 23070123069
// ENTC A3
// Copy Constructor

#include <iostream>
using namespace std;

class Rectangle 
{
public:
    int length;
    int width;
    Rectangle(int l, int w) 
	{
        length = l;
        width = w;
    }
    Rectangle(Rectangle &rect) 
	{
        length = rect.length;
        width = rect.width;
    }
    int calculateArea() 
	{
        return length * width;
    }
    void display() 
	{
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() 
{
    int l, w;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;
    Rectangle rect1(l, w);
    Rectangle rect2 = rect1;
    cout << "\nOriginal Rectangle:" << endl;
    rect1.display();
    cout << "\nCopied Rectangle:" << endl;
    rect2.display();
}
/*
Enter the length of the rectangle: 5
Enter the width of the rectangle: 5

Original Rectangle:
Length: 5
Width: 5
Area: 25

Copied Rectangle:
Length: 5
Width: 5
Area: 25
*/
