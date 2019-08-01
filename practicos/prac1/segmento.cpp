#include "segmento.h"

segmento::segmento()
{
	this->a = new punto;
	this->b = new punto;
}

segmento::segmento(punto *a, punto *b){
	this->a = new punto((*a).get_x(),a->get_y());
	this->b = new punto(b->get_x(),b->get_y());
}

segmento::~segmento()
{
}

