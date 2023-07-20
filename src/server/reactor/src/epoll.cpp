#include "epoll.h"

#include<iostream>

EPOLL::EPOLL(){
    std::cout << " I am creating EPOLL! " << std::endl;
}

EPOLL::~EPOLL(){
    std::cout << " I am destory ~EPOLL! " << std::endl;
}