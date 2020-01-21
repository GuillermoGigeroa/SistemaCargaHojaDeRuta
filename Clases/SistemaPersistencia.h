#ifndef SISTEMAPERSISTENCIA_H
#define SISTEMAPERSISTENCIA_H
#include "HojaDeRuta.h"

class SistemaPersistencia
{
    public:
        bool Cargar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                    HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                    HojaDeRuta &hr72, HojaDeRuta &hr73);
        bool Guardar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                     HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                     HojaDeRuta &hr72, HojaDeRuta &hr73);
};

#endif // SISTEMAPERSISTENCIA_H
