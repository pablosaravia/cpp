#include "punto.h"

punto::punto()
{
    this->abs=0;
    this->ord=0;
}

punto::punto(float *x, float *y){
    this->abs = *x;
    this->ord = *y;
}

punto::~punto()
{
}

