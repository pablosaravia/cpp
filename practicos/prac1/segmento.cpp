#include "segmento.h"

segmento::segmento()
{
	this->a = new punto;
	this->b = new punto;
}

segmento::segmento(punto *a, punto *b){
	this->a = new punto(a->get_x(),a->get_y());
	this->b = new punto(b->get_x(),b->get_y());
}

punto segmento::get_a(){
	punto *Pout = new punto(this->a->get_x(),this->a->get_y());
	return *Pout;
}

punto segmento::get_b(){
	punto *Pout = new punto(this->b->get_x(),this->b->get_y());
	return *Pout;
}

void segmento::set_a(punto *a){
	this->a = new punto(a->get_x(), a->get_y());
}

void segmento::set_b(punto *b){
	this->b = new punto(b->get_x(),b->get_y());
}

segmento::~segmento(){
	delete this->a;
	delete this->b;
}

