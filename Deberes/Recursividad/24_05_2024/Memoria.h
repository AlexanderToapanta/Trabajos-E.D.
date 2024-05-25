#ifndef MEMORIA_H
#define MEMORIA_H

#include <cstdint>


extern void printHexVal(uint16_t val);


extern void printRawMem(uint8_t* p, uint16_t linebytes, uint16_t lines);


class CGameObject {
public:
    CGameObject(uint16_t x, uint16_t y);
    ~CGameObject();

private:
    static uint32_t ms_id;
    uint32_t m_id;
    uint16_t m_x, m_y;
};

#endif 
