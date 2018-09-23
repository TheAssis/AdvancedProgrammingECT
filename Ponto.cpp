#include<iostream>
#include<cmath> // sqrt

using namespace std;

class Ponto{
private:
    float x; //coordenada x do ponto
    float y; //coordenada y do ponto
public:
    void setX(float _x){
        x = _x;
    }
    void setY(float _y){
        y = _y;
    }
    void setXY(float _x, float _y){
        x = _x;
        y = _y;
    }
    float getX(){
        return x;
    }
    float getY(){
        return y;
    }
    Ponto add(Ponto p1){
        Ponto pr; //ponto resultante (a ser retornado)
        pr.x = p1.x + x;
        pr.y = p1.y + y;
        return pr;
    }
    Ponto sub(Ponto p1){
        Ponto pr; //ponto resultante (a ser retornado)
        pr.x = x - p1.x;
        pr.y = y - p1.y;
        return pr;
    }
    float norma(){
        return sqrt(x*x + y*y);
    }
    void translada (float a, float b){
        x += a;
        y += b;
    }
    void imprime(){
        cout<<"( "<<x<<", "<<y<<" )";
    }
};

int main(){}
