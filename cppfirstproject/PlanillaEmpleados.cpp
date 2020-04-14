//
//  PlanillaEmpleados.cpp
//  cppfirstproject
//
//  Created by Edenilson Pineda on 4/12/20.
//  Copyright © 2020 Edenilson Pineda. All rights reserved.
//


#include <iostream>
#include <iomanip>
#include <stdio.h>

int main(){
    //Employee names
    char name1[20], name2[20];
    
    //Employee's Salaries and disccounts required by the Law of SV
    float salary1, salary2;
    float rent, afp, finalSalary;
    
    //Employee #1.
    std::cout << "Generación de planillas de empleados" << std::endl;
    std::cout << "Digite el nombre del empleado #1: " << std::endl;
    std::cout << "* Nombre: ";
    std::cin.getline(name1, 30);
    std::cout << "* Sueldo base: ";
    std::cin >> salary1;
    fflush(stdin); //cleans the buffer (cin)
    
    //Employee #2.
    std::cout << "Digite el nombre del empleado #2: " << std::endl;
    std::cout << "* Nombre: ";
    std::cin.getline(name2, 30);
    std::cout << "* Sueldo base: ";
    std::cin >> salary2;
    
    //Prints the payroll
    std::cout << "\n\nPlanilal de sueldos a pagar." << std::endl;
    //std::cout.fill('_');
    
    //Prints the headings
    std::cout << std::setw(72) << "." << std::endl;
    std::cout << std::left << std::setw(22) << "Empleado"
        << "|" << std::setw(10) << "Sueldo B"
        << "|" << std::setw(10) << "Renta (10%)"
        << "|" << std::setw(10) << "AFP (3.5%)"
        << "|" << std::setw(14) << "Sueldo Mensual" << "|" << std::endl;
    
    //Prints dots on float values
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    
    //Calculates employee 1
    rent = 0.10 * salary1;
    afp = 0.035 * salary1;
    finalSalary = salary1 - rent - afp;
    
    std::cout << std::left << std::setw(22) << name1
    << "|$" << std::right << std::setw(9) << salary1
    << "|$" << std::setw(9) << rent
    << "|$" << std::setw(9) << afp
    << "|$" << std::setw(13) << finalSalary << "|" << std::endl;
    
    //Calculates employee 2
    rent = 0.10 * salary2;
    afp = 0.035 * salary2;
    finalSalary = salary2 - rent - afp;
    
    std::cout << std::left << std::setw(22) << name2
    << "|$" << std::right << std::setw(9) << salary2
    << "|$" << std::setw(9) << rent
    << "|$" << std::setw(9) << afp
    << "|$" << std::setw(13) << finalSalary << "|" << std::endl;
    
    getchar();
    
}


