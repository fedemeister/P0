//
// Created by fedemeister on 14/03/18.
//

#ifndef P0_FECHA_H
#define P0_FECHA_H


class Fecha {
public:
    explicit Fecha(int dia=0, int mes=0, int anyo=0);   // explicit para evitar las conversiones implicitas
    explicit Fecha(const char*);
    class Invalida
    {
    public:
        explicit Invalida(const char*) {

        }

        const char* por_que() const {
            return nullptr;
        }

    private:
        const char* error_{};
    };
    int getDia() const;

    int getMes() const;

    int getAnyo() const;

private:
    int dia,mes,anyo;
};


#endif //P0_FECHA_H

