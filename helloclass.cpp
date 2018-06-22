#include<iostream>
#include "helloclass.h"
HelloClass::HelloClass()
{
std::cout<<"I'm being created"<<std::endl;
}

HelloClass::~HelloClass()
{
std::cout<<"I'm being destroyed"<<std::endl;
}

void HelloClass::sayhello()
{
std::cout<<"Hello, Class"<<std::endl;
}

