//
// Created by utec on 6/2/20.
//

#ifndef POO1_TEO_CLASS_2_PERRO_H
#define POO1_TEO_CLASS_2_PERRO_H

#include <iostream>
#include <string>

using namespace std;

class perro_t {
private:
    string nombre;
    double talla;
    double peso;
public:
    // Constructores
    perro_t();
    perro_t(string n, double t, double p);

    // Metodo para ladrar
    void ladrar();

    // Metodos set
    void set_nombre(string value);
    void set_talla(double value);
    void set_peso(double value);

    // Metodos get
    string get_nombre();
    double get_talla();
    double get_peso();
};


#endif //POO1_TEO_CLASS_2_PERRO_H
