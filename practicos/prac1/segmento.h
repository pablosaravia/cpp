#ifndef SEGMENTO
#define SEGMENTO

#include "punto.h"

class segmento
{
private:
    punto *a, *b;
    
public:
    segmento();
    segmento(punto *a, punto *b);
    punto get_a();
    punto get_b();
    void set_a(punto *a);
    void set_b(punto *b);
    float get_largo ();
    ~segmento();

};

#endif // SEGMENTO
