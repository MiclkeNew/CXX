#include <iostream>

int main()
{
    double f1 = 1.0;
    double f2 = 1.0;
    double f3 = f2 + f1;
    double f4 = f2 + f3;
    double f5 = f3 + f4;

    std::cout<<"Fibonachi number 1 :"<<f1<<std::endl;
    std::cout<<"Fibonachi number 2 :"<<f2<<std::endl;
    std::cout<<"Fibonachi number 3 :"<<f3<<std::endl;
    std::cout<<"Fibonachi number 4 :"<<f4<<std::endl;
    std::cout<<"Fibonachi number 5 :"<<f5<<std::endl;
}