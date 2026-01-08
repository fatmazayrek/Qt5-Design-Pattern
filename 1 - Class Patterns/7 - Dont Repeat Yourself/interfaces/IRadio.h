#ifndef IRADIO_H
#define IRADIO_H

class IRadio
{
public:
    virtual void startRadio() = 0;
    virtual void stopRadio() = 0;
};

#endif // IRADIO_H
