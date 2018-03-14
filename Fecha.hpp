//
// Created by fedemeister on 14/03/18.
//

#ifndef P0_FECHA_H
#define P0_FECHA_H


class Fecha {
public:
    explicit Fecha(int dia=0, int mes=0, int anyo=0);   // explicit para evitar las conversiones implicitas
    explicit Fecha(const char*);

    int getDia() const;

    int getMes() const;

    int getAnyo() const;

private:
    int dia,mes,anyo;
};


#endif //P0_FECHA_H

