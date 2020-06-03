//
// Created by utec on 6/2/20.
//

#include "perro.h"

void perro_t::ladrar() {
    cout << "Gua Gua!!" << endl;
}

void perro_t::set_nombre(string value) {
    nombre = value;
}

void perro_t::set_talla(double value) {
    talla = value;
}

void perro_t::set_peso(double value) {
    peso = value;
}

perro_t::perro_t() {
    nombre = "NO DEFINIDO AUN";
    talla = 0;
    peso = 0;
}

perro_t::perro_t(string n, double t, double p) {
    nombre = n;
    talla = t;
    peso = p;
}

string perro_t::get_nombre() {
    return nombre;
}

double perro_t::get_talla() {
    return talla;
}

double perro_t::get_peso() {
    return peso;
}
