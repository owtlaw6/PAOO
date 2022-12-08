#pragma once
#include <iostream>
#include <vector>
#include <math.h>
#include <memory>
#include <mutex>
#include <thread>
#include "lock.hpp"

class Lock;

class RegularShape
{
public:
    bool isUsed = false;

    RegularShape() = delete;
    RegularShape(int side);
    RegularShape(const RegularShape& shape);
    RegularShape(const RegularShape&& shape);

    RegularShape &operator=(RegularShape const& F);

    ~RegularShape();

    virtual void writeDetails();

    void useShape();

protected:
    int *side_;
    std::unique_ptr<Lock> lock_ = std::make_unique<Lock>(this);
};

class EquilateralTriangle : public RegularShape
{
public:
    EquilateralTriangle() = delete;
    EquilateralTriangle(int side);
    EquilateralTriangle(const EquilateralTriangle& shape);
    EquilateralTriangle(const EquilateralTriangle&& shape);

    EquilateralTriangle &operator=(EquilateralTriangle const& F);

    ~EquilateralTriangle();

    void writeDetails();
};

class Square : public RegularShape
{
public:
    Square() = delete;
    Square(int side);
    Square(const Square& shape);
    Square(const Square&& shape);

    Square &operator=(Square const& F);

    ~Square();

    void writeDetails();
};

class Hexagon : public RegularShape
{
public:
    Hexagon() = delete;
    Hexagon(int side);
    Hexagon(const Hexagon& shape);
    Hexagon(const Hexagon&& shape);

    Hexagon &operator=(Hexagon const& F);

    ~Hexagon();

    void writeDetails();
};

