//
//  main.cpp
//  cppfirstproject
//
//  Created by Edenilson Pineda on 4/11/20.
//  Copyright © 2020 Edenilson Pineda. All rights reserved.
//

#include <iostream>
#include <iomanip>

//Clase padre (Clase Base)
class Shape{
    protected:
        int width;
        int height;
    
    public:
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }
    
};

//Clase base costo de pintura
class PaintCost{
    public:
        int getCost(int area){
            return area * 70;
        }
};

//Derived class
class Rectangle: public Shape, public PaintCost{
    public:
        int getArea(){
            return (width * height);
        }
};

/*
int main(int argc, const char * argv[]) {
    Rectangle rect;
    
    rect.setWidth(5);
    rect.setHeight(7);
    
    int area = rect.getArea();
    //Print the area of the object
    std::cout << "Total area: " << rect.getArea() << std::endl;
    
    //print the total of paint cost
    std::cout << "Total paint cost: $" << rect.getCost(area) << std::endl;
    return 0;
}

*/
