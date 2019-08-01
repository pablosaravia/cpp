#ifndef PUNTO
#define PUNTO

class punto {
private:
    float x, y;
    
public:
    punto();
    punto(float *x, float *y);
    float get_x();
    float get_y();
    void set_x(float *x);
    void set_y(float *y);
    ~punto();

};

#endif // PUNTO
