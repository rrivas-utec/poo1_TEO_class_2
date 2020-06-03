#include <iostream>
#include "perro.h"

int main() {
    perro_t firulay{};
    perro_t simba{"Simba", 0.5, 20};

    cout << firulay.get_nombre() << endl;
    cout << firulay.get_talla() << endl;
    cout << firulay.get_peso() << endl;
    cout << endl;

    cout << simba.get_nombre() << endl;
    cout << simba.get_talla() << endl;
    cout << simba.get_peso() << endl;
    simba.ladrar();
    cout << endl;

    firulay.set_nombre("Firulay");
    firulay.set_talla(.20);
    firulay.set_peso(10);
    firulay.ladrar();

    cout << firulay.get_nombre() << endl;
    cout << firulay.get_talla() << endl;
    cout << firulay.get_peso() << endl;
    cout << endl;
    return 0;
}
