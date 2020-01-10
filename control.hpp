#pragma once

#include <stdint.h>

#define ARM_CTRL_OFF false
#define ARM_CTRL_ON  true

class __Control {
public:
    void init();

    void query();

    inline bool isArmed() {
        return m_armed;
    };
    
private:
    bool   m_armed;
    bool   m_armed_changed;

    double m_light_lvl;
    double m_light_lvl_bound;
};

extern __Control Control;