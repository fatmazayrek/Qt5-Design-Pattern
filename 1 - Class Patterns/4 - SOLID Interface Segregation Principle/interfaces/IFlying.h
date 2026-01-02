#ifndef IFLYING_H
#define IFLYING_H

class IFlying
{
public:
    virtual void fly() = 0;
    virtual void land() = 0;
    virtual void wings() = 0;
};

#endif // IFLYING_H
