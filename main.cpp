#include <iostream>
#include "Fecha.hpp"

int main() {
    try { Fecha t("29/02/2018"); }
    catch(Fecha::Invalida &e) { std::cerr << e.por_que() << std::endl; }
}
