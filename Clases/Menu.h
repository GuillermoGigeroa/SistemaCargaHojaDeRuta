#ifndef MENU_H
#define MENU_H
#include "HojaDeRuta.h"

class Menu
{
    public:
        void MenuPrincipal(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                           HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                           HojaDeRuta &hr72, HojaDeRuta &hr73);
        void MenuConfirmar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                           HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                           HojaDeRuta &hr72, HojaDeRuta &hr73);
        void MenuActivar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                         HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                         HojaDeRuta &hr72, HojaDeRuta &hr73);
        void MenuMarcar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                        HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                        HojaDeRuta &hr72, HojaDeRuta &hr73);
        void ConfirmarHR(HojaDeRuta &estaHR);
        void DesconfirmarHR(HojaDeRuta &estaHR);
        void ActivarHR(HojaDeRuta &estaHR);
        void DesactivarHR(HojaDeRuta &estaHR);
        void EscribirCamion(HojaDeRuta &estaHR);
        void EscribirCamionLista(HojaDeRuta &estaHR);
        void EscribirCamionActivar(HojaDeRuta &estaHR);
        void EscribirMarcado(HojaDeRuta &estaHR);
        void ActivarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                         HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                         HojaDeRuta &hr72, HojaDeRuta &hr73);
        void DesactivarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                         HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                         HojaDeRuta &hr72, HojaDeRuta &hr73);
        void ConfirmarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73);
        void DesconfirmarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73);
        void VerCamionesDisponibles(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73);
        void MarcarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                         HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                         HojaDeRuta &hr72, HojaDeRuta &hr73);
        void DesmarcarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                         HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                         HojaDeRuta &hr72, HojaDeRuta &hr73);
};

#endif // MENU_H
