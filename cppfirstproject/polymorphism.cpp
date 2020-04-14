//
//  polymorphism.cpp
//  cppfirstproject
//
//  Created by Edenilson Pineda on 4/12/20.
//  Copyright © 2020 Edenilson Pineda. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class Shape{
    protected:
        int width, height;
        
    public:
        Shape(int a = 0, int b = 0){
            width = a;
            height = b;
        }
        
        virtual int area(){
            std::cout << "Parent class area: " << std::endl;
            return 0;
        }
};


//Class rectangle
class Rectangle: public Shape{
    public:
        Rectangle(int a = 0, int b = 0):Shape(a, b) {}
        
        int area(){
            std::cout << "Rectangle class area: " << std::endl;
            return (width * height);
        }
};


class Triangle: public Shape{
    public:
        Triangle(int a = 0, int b = 0):Shape(a, b){}
        
        int area(){
            std::cout << "Triangle class area :" << std::endl;
            return (width * height / 2);
        }
};

/*
int main(){
    Shape *shape;
    Rectangle rect(10, 7);
    Triangle triangle(10, 5);
    
    //store the address of rectangle
    shape = &rect;
    
    //call rectangle area
    shape->area();
    
    //store the address of triangle
    shape = &triangle;
    
    //Call triangle area
    shape->area();
    
    return 0;
}
*/
