#include "punto.h"

punto::punto()
{
    this->x=0;
    this->y=0;
};

punto::punto(float *x, float *y){
    this->x = *x;
    this->y = *y;
};

float punto::get_x(){
	return this->x;
};

float punto::get_y(){
	return this->y;
};

void punto::set_x(float *x){
	this->x= *x;
};

void punto::set_y(float *y){
	this->y= *y;
};

punto::~punto()
{
};

