#ifndef SEGMENTO_H
#define SEGMENTO_H

#include "punto.h"

class segmento
{
private:
    punto *orig;
    punto *dest;
    
public:
    segmento();
    segmento (punto *a, punto *b);
    punto get_orig();
    punto get_dest();
    void set_orig(punto *a);
    void set_dest(punto *b);
    float get_largo ();
    ~segmento();

};

#endif // SEGMENTO_H
