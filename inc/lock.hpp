#pragma once
#include <iostream>
#include <vector>
#include <math.h>
#include <memory>
#include <mutex>
#include <thread>
#include "shapes.hpp"

class RegularShape;

class Lock
{
public:
    Lock(RegularShape *shape);

    ~Lock();

    void lock();
    void unlock();

private:
    Lock(const Lock&) = delete;
    Lock& operator=(Lock& lock) = delete;
    std::unique_ptr<std::mutex> mutexPtr_;
    RegularShape *shape_;
};