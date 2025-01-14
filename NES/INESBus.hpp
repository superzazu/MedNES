#ifndef INESBus_hpp
#define INESBus_hpp

#include <stdio.h>
#include <stdint.h>

class INESBus {
public:
    virtual uint8_t* read(uint16_t address) = 0;
    virtual void write(uint16_t address, uint8_t data) = 0;
};

#endif /* INESBus_hpp */
