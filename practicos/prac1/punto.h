#ifndef PUNTO
#define PUNTO

class punto
{
private:
    float abs, ord;
    
public:
    punto();
    punto(float *x, float *y);
    float get_abs();
    float get_ord();
    void set_abs(float *x);
    void set_ord(float *y);
    ~punto();

};

#endif // PUNTO
