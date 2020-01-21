#include <iostream>
#include "HojaDeRuta.h"
#include "Menu.h"
#include "DetallesGraficos.h"
#include "SistemaPersistencia.h"

using namespace std;

int main()
{
    Menu menu;
    DetallesGraficos d;
    SistemaPersistencia p;
    HojaDeRuta hr23(23), hr25(25), hr40(40), hr41(41), hr43(43), hr47(47), hr51(51);
    HojaDeRuta hr52(52), hr55(55), hr56(56), hr61(61), hr71(71), hr72(72), hr73(73);
    d.acomodarConsola();
    d.presentacion();
    p.Cargar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
    menu.MenuPrincipal(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
    p.Guardar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
    d.despedida();
    return 0;
}
