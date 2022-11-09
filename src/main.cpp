#include <iostream>
#include <vector>
#include <math.h>

class RegularShape
{
public:
    RegularShape() = delete;
    RegularShape(int side)
    {
        side_ = new int;
        *side_ = side;
        std::cout << '\n' << "Constructor la RegularShape cu side = " << *side_;
    }
    RegularShape(const RegularShape& shape) : RegularShape(*shape.side_)
    {
        std::cout << '\n' << "Copy constructor la RegularShape cu side = " << *side_ ;
    }
    RegularShape(const RegularShape&& shape)
    {
        side_ = new int;
        *side_ = *shape.side_;
        std::cout << '\n' << "Move constructor la RegularShape cu side = " << *side_;
    }

    ~RegularShape()
    {
        std::cout << '\n' << "Destructor la RegularShape cu side = " << *side_;
        delete side_;
    }

    virtual void writeDetails()
    {
        std::cout << '\n' << "base class cu side = " << *side_ << '\n';
    }

protected:
    int *side_;
};

class EquilateralTriangle : public RegularShape
{
public:
    EquilateralTriangle() = delete;
    EquilateralTriangle(int side) : RegularShape(side)
    {
        std::cout << '\n' << "Constructor la EquilateralTriangle cu side = " << *side_;
    }
    EquilateralTriangle(const EquilateralTriangle& shape) : RegularShape(*shape.side_)
    {
        std::cout << '\n' << "Copy constructor la EquilateralTriangle cu side = " << *side_;
    }
    EquilateralTriangle(const EquilateralTriangle&& shape) : RegularShape(std::move(shape))
    {
        std::cout << '\n' << "Move constructor la EquilateralTriangle cu side = " << *side_;
    }

    ~EquilateralTriangle()
    {
        std::cout << '\n' << "Destructor la EquilateralTriangle cu side = " << *side_;
    }

    void writeDetails()
    {
        std::cout << '\n' << "perimeter of equilateral triangle: " << 3 * (*side_) << '\n';
        std::cout << "area of equilateral triangle: " << ((*side_) * (*side_) * sqrt(3)/4) << '\n' << '\n';
    }
};

class Square : public RegularShape
{
public:
    Square() = delete;
    Square(int side) : RegularShape(side)
    {
        std::cout << '\n' << "Constructor la Square cu side = " << *side_;
    }
    Square(const Square& shape) : RegularShape(*shape.side_)
    {
        std::cout << '\n' << "Copy constructor la Square cu side = " << *side_;
    }
    Square(const Square&& shape) : RegularShape(std::move(shape))
    {
        std::cout << '\n' << "Move constructor la Square cu side = " << *side_;
    }

    ~Square()
    {
        std::cout << '\n' << "Destructor la Square cu side = " << *side_;
    }

    void writeDetails()
    {
        std::cout << '\n' << "perimeter of square: " << 4 * (*side_) << '\n';
        std::cout << "area of square: " << ((*side_) * (*side_)) << '\n' << '\n';
    }
};

class Hexagon : public RegularShape
{
public:
    Hexagon() = delete;
    Hexagon(int side) : RegularShape(side)
    {
        std::cout << '\n' << "Constructor la Hexagon cu side = " << *side_;
    }
    Hexagon(const Hexagon& shape) : RegularShape(*shape.side_)
    {
        std::cout << '\n' << "Copy constructor la Hexagon cu side = " << *side_;
    }
    Hexagon(const Hexagon&& shape) : RegularShape(std::move(shape))
    {
        std::cout << '\n' << "Move constructor la Hexagon cu side = " << *side_;
    }

    ~Hexagon()
    {
        std::cout << '\n' << "Destructor la Hexagon cu side = " << *side_;
    }

    void writeDetails()
    {
        std::cout << '\n' << "perimeter of hexagon: " << 6 * (*side_) << '\n';
        std::cout << "area of hexagon: " << (3 * sqrt(3) * (*side_) * (*side_) / 2) << '\n' << '\n';
    }
};

int main()
{
    std::vector<RegularShape> shapes;
    shapes.push_back(RegularShape(10101));
    std::cout << '\n' << '\n';

    EquilateralTriangle triangle0(200);
    std::vector<EquilateralTriangle> triangles;
    triangles.push_back(std::move(triangle0));
    std::cout << '\n' << '\n';

    std::vector<Square> squares;
    squares.push_back(Square(201));
    std::cout << '\n' << '\n';

    std::vector<Hexagon> hexagons;
    hexagons.push_back(Hexagon(202));
    std::cout << '\n' << '\n';

    EquilateralTriangle triangle1(5);
    triangle1.writeDetails();

    EquilateralTriangle triangle2(triangle1);
    triangle2.writeDetails();

    {
        Square square0(88);
        square0.writeDetails();
    }

    std::cout << '\n' << '\n';
    RegularShape *square = new Square(2);
    square->writeDetails();
    
    Hexagon *hexagon = new Hexagon(9);
    hexagon->writeDetails();
    
    RegularShape *regShape = new RegularShape(66);
    regShape->writeDetails();

    delete regShape;
    std::cout << '\n' << '\n';

    regShape = new EquilateralTriangle(10000);
    regShape->writeDetails();

    delete square;
    delete hexagon;
    delete regShape;

    return 0;
}