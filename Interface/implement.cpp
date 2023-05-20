#include "interface.h"

class implement:public interface{
public:
    void setValue(){
        m_value = 1;
    }
    int getValue(){
        return m_value;
    }

};