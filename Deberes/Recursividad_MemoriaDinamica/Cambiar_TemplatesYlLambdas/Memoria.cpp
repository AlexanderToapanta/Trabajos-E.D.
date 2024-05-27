#include "Memoria.h"
#include <iostream>
#include <iomanip>
using namespace std;
void printHexVal(uint16_t val) {
    cout << hex << setw(2) << setfill('0') << val;
}

void printRawMem(uint8_t* p, uint16_t linebytes, uint16_t lines) { 
    for(uint16_t l=0; l < lines; ++l) {
        cout << reinterpret_cast<uint16_t*>(p) << " ";
        for(uint16_t u=0; u < linebytes; ++u) {
            printHexVal(*p);
            ++p;
            cout << " ";
        }
        cout << "\n";
    }
}

uint32_t CGameObject::ms_id = 1;

CGameObject::CGameObject(uint16_t x, uint16_t y) 
    : m_x(x), m_y(y), m_id(ms_id++) {
    cout << "Creating CGameObject " << m_id 
              << " (" << m_x << ", " << m_y << ") "
              << " at ( " << this << ", " << sizeof(*this) << ")\n";
}

CGameObject::~CGameObject() {
    cout << "Destroying CGameObject " << m_id << "\n";
}
