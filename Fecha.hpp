//
// Created by fedemeister on 14/03/18.
//

#ifndef P0_FECHA_H
#define P0_FECHA_H

#include <iostream>
#include <algorithm>

class Fecha {
public:
    explicit Fecha(int dia = 0, int mes = 0, int anyo = 0);   // explicit para evitar las conversiones implicitas
    explicit Fecha(const char *);

    static const int AnnoMaximo = 2037;
    static const int AnnoMinimo = 1902;


    class Invalida {
    public:
        explicit Invalida(const char *error) : error_(error) {}

        const char *por_que() const {
            return error_;
        }

    private:
        const char *error_{};
    };


    bool esBisiesto(int anyo) const;

    int getDay() const;

    int getMonth() const;

    int getYear() const;

    Fecha& operator +=(int numDias);
    Fecha& operator -=(int numDias);
    Fecha& operator ++();
    Fecha& operator --();
    Fecha operator ++(int numDias);
    Fecha operator --(int numDias);
    Fecha operator +(int numDias) const;
    Fecha operator -(int numDias) const;

private:
    int day_, month_, year_;

    void fechaValida() const;
};

bool operator ==(const Fecha& fecha1, const Fecha& fecha2);
bool operator !=(const Fecha& fecha1, const Fecha& fecha2);
bool operator >(const Fecha& fecha1, const Fecha& fecha2);
bool operator <(const Fecha& fecha1, const Fecha& fecha2);
bool operator >=(const Fecha& fecha1, const Fecha& fecha2);
bool operator <=(const Fecha& fecha1, const Fecha& fecha2);

#endif //P0_FECHA_H