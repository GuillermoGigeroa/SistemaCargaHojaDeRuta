#include "Menu.h"
#include "HojaDeRuta.h"
#include "DetallesGraficos.h"
#include "Util.h"
#include <iostream>
#include <cstdlib>

using namespace std;

void Menu::MenuPrincipal(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                         HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                         HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    DetallesGraficos d;
    char opc[20];
    opc[0] = '1', opc[1] = '\0';
    while (opc[0] != '\0' && opc[1] == '\0')
    {
        d.limpiarConsola();
        d.escribirSlow(" _______________________________________ ");
        d.escribirSlow("|                                       |");
        d.escribirSlow("| Sistema de registro de confirmaciones |");
        d.escribirSlow("|_______________________________________|");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|        Seleccione una opcion:         |");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|      A) Confirmacion de camiones      |");
        d.escribirSlow("|      B) Desconfirmacion de camiones   |");
        d.escribirSlow("|      C) Activar camion                |");
        d.escribirSlow("|      D) Desactivar camion             |");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|      E) Confirmar todos               |");
        d.escribirSlow("|      F) Desconfirmar todos            |");
        d.escribirSlow("|      G) Activar todos                 |");
        d.escribirSlow("|      H) Desactivar todos              |");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|      I) Ver camiones disponibles      |");
        d.escribirSlow("|      J) Marcar hojas de ruta          |");
        d.escribirSlow("|      K) Marcar todo                   |");
        d.escribirSlow("|      L) Desmarcar todo                |");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|      S) Salir                         |");
        d.escribirSlow("|_______________________________________|");
        cout<<endl<<"Ingrese la opcion: ";
        cin>>opc;
        cin.ignore();
        d.limpiarConsola();
        switch (opc[0])
        {
        case 'a':
        case 'A':
            {
                MenuConfirmar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'b':
        case 'B':
            {
                MenuDesconfirmar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'c':
        case 'C':
            {
                MenuActivar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'd':
        case 'D':
            {
                MenuDesactivar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'e':
        case 'E':
            {
                ConfirmarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'f':
        case 'F':
            {
                DesconfirmarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'g':
        case 'G':
            {
                ActivarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'h':
        case 'H':
            {
                DesactivarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'i':
        case 'I':
            {
                VerCamionesDisponibles(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'j':
        case 'J':
            {
                MenuMarcar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'k':
        case 'K':
            {
                MarcarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 'l':
        case 'L':
            {
                DesmarcarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case 's':
        case 'S':
            {
                return;
            }break;
        default:
            {
                cout<<"Opcion incorrecta..."<<endl;
                opc[0] = '\0', opc[1] = '\0';
                cin.get();
            }break;
        }
    }
}
void Menu::MenuConfirmar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                         HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                         HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    DetallesGraficos d;
    Util u;
    int camion = -1;
    char camionChar[20];
    camionChar[0] = 'a';
    camionChar[1] = '\0';
    while (camion == -1)
    {
        d.limpiarConsola();
        d.escribirSlow(" _______________________________________ ");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|        Confirmacion de camiones       |");
        d.escribirSlow("|_______________________________________|");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|        Seleccione el camion:          |");
        d.escribirSlow("|                                       |");
            EscribirCamion(hr23);   EscribirCamion(hr25);
            EscribirCamion(hr40);   EscribirCamion(hr41);
            EscribirCamion(hr43);   EscribirCamion(hr47);
            EscribirCamion(hr51);   EscribirCamion(hr52);
            EscribirCamion(hr55);   EscribirCamion(hr56);
            EscribirCamion(hr61);   EscribirCamion(hr71);
            EscribirCamion(hr72);   EscribirCamion(hr73);
        d.escribirSlow("|_______________________________________|");
        cout<<endl<<"Ingrese el numero de camion: ";
        cin.getline(camionChar,20);
        while (!u.IsNumeric(camionChar))
        {
            d.limpiarConsola();
            d.escribirSlow(" _______________________________________ ");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|        Confirmacion de camiones       |");
            d.escribirSlow("|_______________________________________|");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|        Seleccione el camion:          |");
            d.escribirSlow("|                                       |");
                EscribirCamion(hr23);   EscribirCamion(hr25);
                EscribirCamion(hr40);   EscribirCamion(hr41);
                EscribirCamion(hr43);   EscribirCamion(hr47);
                EscribirCamion(hr51);   EscribirCamion(hr52);
                EscribirCamion(hr55);   EscribirCamion(hr56);
                EscribirCamion(hr61);   EscribirCamion(hr71);
                EscribirCamion(hr72);   EscribirCamion(hr73);
            d.escribirSlow("|_______________________________________|");
            cout<<endl<<"Camion no existente..."<<endl<<endl<<"Ingrese el numero de camion: ";
            cin.getline(camionChar,20);
        }
        camion = u.ConvertToInt(camionChar);
        d.limpiarConsola();
        switch(camion)
        {
        case 23:
            {
                ConfirmarHR(hr23);
                camion = -1;
            }break;
        case 25:
            {
                ConfirmarHR(hr25);
                camion = -1;
            }break;
        case 40:
            {
                ConfirmarHR(hr40);
                camion = -1;
            }break;
        case 41:
            {
                ConfirmarHR(hr41);
                camion = -1;
            }break;
        case 43:
            {
                ConfirmarHR(hr43);
                camion = -1;
            }break;
        case 47:
            {
                ConfirmarHR(hr47);
                camion = -1;
            }break;
        case 51:
            {
                ConfirmarHR(hr51);
                camion = -1;
            }break;
        case 52:
            {
                ConfirmarHR(hr52);
                camion = -1;
            }break;
        case 55:
            {
                ConfirmarHR(hr55);
                camion = -1;
            }break;
        case 56:
            {
                ConfirmarHR(hr56);
                camion = -1;
            }break;
        case 61:
            {
                ConfirmarHR(hr61);
                camion = -1;
            }break;
        case 71:
            {
                ConfirmarHR(hr71);
                camion = -1;            }break;
        case 72:
            {
                ConfirmarHR(hr72);
                camion = -1;
            }break;
        case 73:
            {
                ConfirmarHR(hr73);
                camion = -1;
            }break;
        case 0:
            {
                return;
            }break;
        default:
            {
                cout<<"Camion no existente..."<<endl;
                camion = -1;
                cin.get();
            }break;
        }
    }
}

void Menu::MenuDesconfirmar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    DetallesGraficos d;
    Util u;    int camion = -1;
    char camionChar[20];
    while (camion == -1)
    {
        d.limpiarConsola();        d.escribirSlow(" _______________________________________ ");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|      Desconfirmacion de camiones      |");
        d.escribirSlow("|_______________________________________|");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|        Seleccione el camion:          |");
        d.escribirSlow("|                                       |");
            EscribirCamion(hr23);   EscribirCamion(hr25);
            EscribirCamion(hr40);   EscribirCamion(hr41);
            EscribirCamion(hr43);   EscribirCamion(hr47);
            EscribirCamion(hr51);   EscribirCamion(hr52);
            EscribirCamion(hr55);   EscribirCamion(hr56);
            EscribirCamion(hr61);   EscribirCamion(hr71);
            EscribirCamion(hr72);   EscribirCamion(hr73);
        d.escribirSlow("|_______________________________________|");
        cout<<endl<<"Ingrese el numero de camion: ";
        cin.getline(camionChar,20);
        while (!u.IsNumeric(camionChar))
        {
            d.limpiarConsola();            d.escribirSlow(" _______________________________________ ");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|      Desconfirmacion de camiones      |");
            d.escribirSlow("|_______________________________________|");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|        Seleccione el camion:          |");
            d.escribirSlow("|                                       |");
                EscribirCamion(hr23);   EscribirCamion(hr25);
                EscribirCamion(hr40);   EscribirCamion(hr41);
                EscribirCamion(hr43);   EscribirCamion(hr47);
                EscribirCamion(hr51);   EscribirCamion(hr52);
                EscribirCamion(hr55);   EscribirCamion(hr56);
                EscribirCamion(hr61);   EscribirCamion(hr71);
                EscribirCamion(hr72);   EscribirCamion(hr73);
            d.escribirSlow("|_______________________________________|");
            cout<<endl<<"Camion no existente..."<<endl<<endl<<"Ingrese el numero de camion: ";
            cin.getline(camionChar,20);
        }
        camion = u.ConvertToInt(camionChar);
        d.limpiarConsola();
        switch(camion)
        {
        case 23:
            {
                DesconfirmarHR(hr23);
                camion = -1;
            }break;
        case 25:
            {
                DesconfirmarHR(hr25);
                camion = -1;
            }break;
        case 40:
            {
                DesconfirmarHR(hr40);
                camion = -1;
            }break;
        case 41:
            {
                DesconfirmarHR(hr41);
                camion = -1;
            }break;
        case 43:
            {
                DesconfirmarHR(hr43);
                camion = -1;
            }break;
        case 47:
            {
                DesconfirmarHR(hr47);
                camion = -1;
            }break;
        case 51:
            {
                DesconfirmarHR(hr51);
                camion = -1;
            }break;
        case 52:
            {
                DesconfirmarHR(hr52);
                camion = -1;
            }break;
        case 55:
            {
                DesconfirmarHR(hr55);
                camion = -1;
            }break;
        case 56:
            {
                DesconfirmarHR(hr56);
                camion = -1;
            }break;
        case 61:
            {
                DesconfirmarHR(hr61);
                camion = -1;
            }break;
        case 71:
            {
                DesconfirmarHR(hr71);
                camion = -1;
            }break;
        case 72:
            {
                DesconfirmarHR(hr72);
                camion = -1;
            }break;
        case 73:
            {
                DesconfirmarHR(hr73);
                camion = -1;
            }break;
        case 0:
            {
                return;
            }break;
        default:
            {
                cout<<"Camion no existente..."<<endl;
                camion = -1;
                cin.get();
            }break;
        }
    }
}
void Menu::MenuActivar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                       HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                       HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    DetallesGraficos d;
    Util u;
    int camion = -1;
    char camionChar[20];
    while (camion == -1)
    {
        d.limpiarConsola();
        d.escribirSlow(" _______________________________________ ");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|            Activar camiones           |");
        d.escribirSlow("|_______________________________________|");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|        Seleccione el camion:          |");
        d.escribirSlow("|                                       |");
            EscribirCamionActivar(hr23);   EscribirCamionActivar(hr25);
            EscribirCamionActivar(hr40);   EscribirCamionActivar(hr41);
            EscribirCamionActivar(hr43);   EscribirCamionActivar(hr47);
            EscribirCamionActivar(hr51);   EscribirCamionActivar(hr52);
            EscribirCamionActivar(hr55);   EscribirCamionActivar(hr56);
            EscribirCamionActivar(hr61);   EscribirCamionActivar(hr71);
            EscribirCamionActivar(hr72);   EscribirCamionActivar(hr73);
        d.escribirSlow("|_______________________________________|");
        cout<<endl<<"Ingrese el numero de camion: ";
        cin.getline(camionChar,20);
        while (!u.IsNumeric(camionChar))
        {
            d.limpiarConsola();
            d.escribirSlow(" _______________________________________ ");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|            Activar camiones           |");
            d.escribirSlow("|_______________________________________|");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|        Seleccione el camion:          |");
            d.escribirSlow("|                                       |");
                EscribirCamionActivar(hr23);   EscribirCamionActivar(hr25);
                EscribirCamionActivar(hr40);   EscribirCamionActivar(hr41);
                EscribirCamionActivar(hr43);   EscribirCamionActivar(hr47);
                EscribirCamionActivar(hr51);   EscribirCamionActivar(hr52);
                EscribirCamionActivar(hr55);   EscribirCamionActivar(hr56);
                EscribirCamionActivar(hr61);   EscribirCamionActivar(hr71);
                EscribirCamionActivar(hr72);   EscribirCamionActivar(hr73);
            d.escribirSlow("|_______________________________________|");
            cout<<endl<<"Camion no existente..."<<endl<<endl<<"Ingrese el numero de camion: ";
            cin.getline(camionChar,20);
        }
        camion = u.ConvertToInt(camionChar);
        d.limpiarConsola();
        switch(camion)
        {
        case 23:
            {
                ActivarHR(hr23);
                camion = -1;
            }break;
        case 25:
            {
                ActivarHR(hr25);
                camion = -1;
            }break;
        case 40:
            {
                ActivarHR(hr40);
                camion = -1;
            }break;
        case 41:
            {
                ActivarHR(hr41);
                camion = -1;
            }break;
        case 43:
            {
                ActivarHR(hr43);
                camion = -1;
            }break;
        case 47:
            {
                ActivarHR(hr47);
                camion = -1;
            }break;
        case 51:
            {
                ActivarHR(hr51);
                camion = -1;
            }break;
        case 52:
            {
                ActivarHR(hr52);
                camion = -1;
            }break;
        case 55:
            {
                ActivarHR(hr55);
                camion = -1;
            }break;
        case 56:
            {
                ActivarHR(hr56);
                camion = -1;
            }break;
        case 61:
            {
                ActivarHR(hr61);
                camion = -1;
            }break;
        case 71:
            {
                ActivarHR(hr71);
                camion = -1;
            }break;
        case 72:
            {
                ActivarHR(hr72);
                camion = -1;
            }break;
        case 73:
            {
                ActivarHR(hr73);
                camion = -1;
            }break;
        case 0:
            {
                return;
            }break;
        default:
            {
                cout<<"Camion no existente..."<<endl;
                camion = -1;
                cin.get();
            }break;
        }
    }
}
void Menu::MenuDesactivar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                          HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                          HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    DetallesGraficos d;
    Util u;
    int camion = -1;
    char camionChar[20];
    while (camion == -1)
    {
        d.limpiarConsola();
        d.escribirSlow(" _______________________________________ ");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|          Desactivar camiones          |");
        d.escribirSlow("|_______________________________________|");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|        Seleccione el camion:          |");
        d.escribirSlow("|                                       |");
            EscribirCamionActivar(hr23);   EscribirCamionActivar(hr25);
            EscribirCamionActivar(hr40);   EscribirCamionActivar(hr41);
            EscribirCamionActivar(hr43);   EscribirCamionActivar(hr47);
            EscribirCamionActivar(hr51);   EscribirCamionActivar(hr52);
            EscribirCamionActivar(hr55);   EscribirCamionActivar(hr56);
            EscribirCamionActivar(hr61);   EscribirCamionActivar(hr71);
            EscribirCamionActivar(hr72);   EscribirCamionActivar(hr73);
        d.escribirSlow("|_______________________________________|");
        cout<<endl<<"Ingrese el numero de camion: ";
        cin.getline(camionChar,20);
        while (!u.IsNumeric(camionChar))
        {
            d.limpiarConsola();
            d.escribirSlow(" _______________________________________ ");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|          Desactivar camiones          |");
            d.escribirSlow("|_______________________________________|");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|        Seleccione el camion:          |");
            d.escribirSlow("|                                       |");
                EscribirCamionActivar(hr23);   EscribirCamionActivar(hr25);
                EscribirCamionActivar(hr40);   EscribirCamionActivar(hr41);
                EscribirCamionActivar(hr43);   EscribirCamionActivar(hr47);
                EscribirCamionActivar(hr51);   EscribirCamionActivar(hr52);
                EscribirCamionActivar(hr55);   EscribirCamionActivar(hr56);
                EscribirCamionActivar(hr61);   EscribirCamionActivar(hr71);
                EscribirCamionActivar(hr72);   EscribirCamionActivar(hr73);
            d.escribirSlow("|_______________________________________|");
            cout<<endl<<"Camion no existente..."<<endl<<endl<<"Ingrese el numero de camion: ";
            cin.getline(camionChar,20);
        }
        camion = u.ConvertToInt(camionChar);
        d.limpiarConsola();
        switch(camion)
        {
        case 23:
            {
                DesactivarHR(hr23);
                camion = -1;
            }break;
        case 25:
            {
                DesactivarHR(hr25);
                camion = -1;
            }break;
        case 40:
            {
                DesactivarHR(hr40);
                camion = -1;
            }break;
        case 41:
            {
                DesactivarHR(hr41);
                camion = -1;
            }break;
        case 43:
            {
                DesactivarHR(hr43);
                camion = -1;
            }break;
        case 47:
            {
                DesactivarHR(hr47);
                camion = -1;
            }break;
        case 51:
            {
                DesactivarHR(hr51);
                camion = -1;
            }break;
        case 52:
            {
                DesactivarHR(hr52);
                camion = -1;
            }break;
        case 55:
            {
                DesactivarHR(hr55);
                camion = -1;
            }break;
        case 56:
            {
                DesactivarHR(hr56);
                camion = -1;
            }break;
        case 61:
            {
                DesactivarHR(hr61);
                camion = -1;
            }break;
        case 71:
            {
                DesactivarHR(hr71);
                camion = -1;
            }break;
        case 72:
            {
                DesactivarHR(hr72);
                camion = -1;
            }break;
        case 73:
            {
                DesactivarHR(hr73);
                camion = -1;
            }break;
        case 0:
            {
                return;
            }break;
        default:
            {
                cout<<"Camion no existente..."<<endl;
                camion = -1;
                cin.get();
            }break;
        }
    }
}

bool Menu::ConfirmarHR(HojaDeRuta &estaHR)
{
    if(estaHR.GetDesactivado())
    {
        cout<<"Camion "<<estaHR.GetNumero()<<" desactivado. Por favor, para utilizarlo,"<<endl;
        cout<<"activelo desde el menu \"Activar camion\"."<<endl;
        cin.get();
        return false;
    }
    if(estaHR.GetConfirmado())
    {
        cout<<"Camion "<<estaHR.GetNumero()<<" ya ha sido confirmado previamente."<<endl;
        cin.get();
        return false;
    }
    estaHR.Confirmar();
    return true;
}

bool Menu::DesconfirmarHR(HojaDeRuta &estaHR)
{
    if(estaHR.GetDesactivado())
    {
        cout<<"Camion "<<estaHR.GetNumero()<<" desactivado. Por favor, para utilizarlo,"<<endl;
        cout<<"activelo desde el menu \"Activar camion\"."<<endl;
        cin.get();
        return false;
    }
    if(!estaHR.GetConfirmado())
    {
        cout<<"Camion "<<estaHR.GetNumero()<<" ya ha sido desconfirmado previamente."<<endl;
        cin.get();
        return false;
    }
    estaHR.Desconfirmar();
    return true;
}

void Menu::ActivarHR(HojaDeRuta &estaHR)
{
    if(estaHR.GetDesactivado())
    {
        estaHR.Activar();
        cout<<"Camion "<<estaHR.GetNumero()<<" ha sido activado."<<endl;
        return;
    }
    cout<<"Camion "<<estaHR.GetNumero()<<" ya esta activo."<<endl;
    cin.get();
}

void Menu::DesactivarHR(HojaDeRuta &estaHR)
{
    if(!estaHR.GetDesactivado())
    {
        estaHR.Desactivar();
        return;
    }
    cout<<"Camion "<<estaHR.GetNumero()<<" ya esta inactivo."<<endl;
    cin.get();
}

void Menu::EscribirCamion(HojaDeRuta &estaHR)
{
    if(!estaHR.GetDesactivado())
    {
        cout<<"|      Camion "<<estaHR.GetNumero();
        if(estaHR.GetConfirmado())
            cout<<"    (Confirmado)        |"<<endl;
        else
            cout<<"    (No confirmado)     |"<<endl;
    }
}

void Menu::EscribirCamionLista(HojaDeRuta &estaHR)
{
    if(!estaHR.GetDesactivado())
    {
        cout<<"| Camion "<<estaHR.GetNumero();
        if(estaHR.GetConfirmado())
        {
            if(estaHR.GetMarcado())
                cout<<" (Confirmado)       (Marcado)|"<<endl;
            else
                cout<<" (Confirmado)    (Desmarcado)|"<<endl;

        }
        else
        {
            if(estaHR.GetMarcado())
                cout<<" (No confirmado)    (Marcado)|"<<endl;
            else
                cout<<" (No confirmado) (Desmarcado)|"<<endl;

        }
    }
}

void Menu::EscribirCamionActivar(HojaDeRuta &estaHR)
{
    cout<<"|      Camion "<<estaHR.GetNumero();
    if(estaHR.GetDesactivado())
        cout<<"    (Desactivado)       |"<<endl;
    else
        cout<<"    (Activo)            |"<<endl;
}

void Menu::EscribirMarcado(HojaDeRuta &estaHR)
{
    cout<<"|      Camion "<<estaHR.GetNumero();
    if(estaHR.GetMarcado())
        cout<<"    (Marcado)           |"<<endl;
    else
        cout<<"    (Desmarcado)        |"<<endl;
}

void Menu::ActivarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    hr23.Activar();hr25.Activar();hr40.Activar();hr41.Activar();hr43.Activar();
    hr47.Activar();hr51.Activar();hr52.Activar();hr55.Activar();hr56.Activar();
    hr61.Activar();hr71.Activar();hr72.Activar();hr73.Activar();
}

void Menu::DesactivarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    hr23.Desactivar();hr25.Desactivar();hr40.Desactivar();hr41.Desactivar();hr43.Desactivar();
    hr47.Desactivar();hr51.Desactivar();hr52.Desactivar();hr55.Desactivar();hr56.Desactivar();
    hr61.Desactivar();hr71.Desactivar();hr72.Desactivar();hr73.Desactivar();
}

void Menu::ConfirmarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    hr23.Confirmar();hr25.Confirmar();hr40.Confirmar();hr41.Confirmar();
    hr43.Confirmar();hr47.Confirmar();hr51.Confirmar();hr52.Confirmar();
    hr55.Confirmar();hr56.Confirmar();hr61.Confirmar();hr71.Confirmar();
    hr72.Confirmar();hr73.Confirmar();
}

void Menu::DesconfirmarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    hr23.Desconfirmar();hr25.Desconfirmar();hr40.Desconfirmar();hr41.Desconfirmar();
    hr43.Desconfirmar();hr47.Desconfirmar();hr51.Desconfirmar();hr52.Desconfirmar();
    hr55.Desconfirmar();hr56.Desconfirmar();hr61.Desconfirmar();hr71.Desconfirmar();
    hr72.Desconfirmar();hr73.Desconfirmar();
}

void Menu::MarcarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                    HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                    HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    hr23.Marcar();hr25.Marcar();hr40.Marcar();hr41.Marcar();
    hr43.Marcar();hr47.Marcar();hr51.Marcar();hr52.Marcar();
    hr55.Marcar();hr56.Marcar();hr61.Marcar();hr71.Marcar();
    hr72.Marcar();hr73.Marcar();
}

void Menu::DesmarcarTodo(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                        HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                        HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    hr23.Desmarcar();hr25.Desmarcar();hr40.Desmarcar();hr41.Desmarcar();
    hr43.Desmarcar();hr47.Desmarcar();hr51.Desmarcar();hr52.Desmarcar();
    hr55.Desmarcar();hr56.Desmarcar();hr61.Desmarcar();hr71.Desmarcar();
    hr72.Desmarcar();hr73.Desmarcar();
}

void Menu::VerCamionesDisponibles(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    DetallesGraficos d;
    d.limpiarConsola();
    d.escribirSlow(" _______________________________________ ");
    d.escribirSlow("|                                       |");
    d.escribirSlow("|               Camiones                |");
    d.escribirSlow("|_______________________________________|");
    d.escribirSlow("|                                       |");
    EscribirCamionLista(hr23);   EscribirCamionLista(hr25);
    EscribirCamionLista(hr40);   EscribirCamionLista(hr41);
    EscribirCamionLista(hr43);   EscribirCamionLista(hr47);
    EscribirCamionLista(hr51);   EscribirCamionLista(hr52);
    EscribirCamionLista(hr55);   EscribirCamionLista(hr56);
    EscribirCamionLista(hr61);   EscribirCamionLista(hr71);
    EscribirCamionLista(hr72);   EscribirCamionLista(hr73);
    d.escribirSlow("|_______________________________________|");
    cin.get();
}

void Menu::MenuMarcar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                            HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                            HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    DetallesGraficos d;
    Util u;
    int camion = -1;
    char camionChar[20];
    while (camion == -1)
    {
        d.limpiarConsola();
        d.escribirSlow(" _______________________________________ ");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|          Marcar hoja de ruta          |");
        d.escribirSlow("|_______________________________________|");
        d.escribirSlow("|                                       |");
        d.escribirSlow("|        Seleccione el camion:          |");
        d.escribirSlow("|                                       |");
            EscribirMarcado(hr23);   EscribirMarcado(hr25);
            EscribirMarcado(hr40);   EscribirMarcado(hr41);
            EscribirMarcado(hr43);   EscribirMarcado(hr47);
            EscribirMarcado(hr51);   EscribirMarcado(hr52);
            EscribirMarcado(hr55);   EscribirMarcado(hr56);
            EscribirMarcado(hr61);   EscribirMarcado(hr71);
            EscribirMarcado(hr72);   EscribirMarcado(hr73);
        d.escribirSlow("|_______________________________________|");
        cout<<endl<<"Ingrese el numero de camion: ";
        cin.getline(camionChar,20);
        while (!u.IsNumeric(camionChar))
        {
            d.limpiarConsola();
            d.escribirSlow(" _______________________________________ ");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|          Marcar hoja de ruta          |");
            d.escribirSlow("|_______________________________________|");
            d.escribirSlow("|                                       |");
            d.escribirSlow("|        Seleccione el camion:          |");
            d.escribirSlow("|                                       |");
                EscribirMarcado(hr23);   EscribirMarcado(hr25);
                EscribirMarcado(hr40);   EscribirMarcado(hr41);
                EscribirMarcado(hr43);   EscribirMarcado(hr47);
                EscribirMarcado(hr51);   EscribirMarcado(hr52);
                EscribirMarcado(hr55);   EscribirMarcado(hr56);
                EscribirMarcado(hr61);   EscribirMarcado(hr71);
                EscribirMarcado(hr72);   EscribirMarcado(hr73);
            d.escribirSlow("|_______________________________________|");
            cout<<endl<<"Camion no existente..."<<endl<<endl<<"Ingrese el numero de camion: ";
            cin.getline(camionChar,20);
        }
        camion = u.ConvertToInt(camionChar);
        d.limpiarConsola();
        switch(camion)
        {
        case 23:
            {
                if(hr23.GetMarcado())
                    hr23.Desmarcar();
                else
                    hr23.Marcar();
                camion = -1;
            }break;
        case 25:
            {
                if(hr25.GetMarcado())
                    hr25.Desmarcar();
                else
                    hr25.Marcar();
                camion = -1;
            }break;
        case 40:
            {
                if(hr40.GetMarcado())
                    hr40.Desmarcar();
                else
                    hr40.Marcar();
                camion = -1;
            }break;
        case 41:
            {
                if(hr41.GetMarcado())
                    hr41.Desmarcar();
                else
                    hr41.Marcar();
                camion = -1;            }break;
        case 43:
            {
                if(hr43.GetMarcado())
                    hr43.Desmarcar();
                else
                    hr43.Marcar();
                camion = -1;
            }break;
        case 47:
            {
                if(hr47.GetMarcado())
                    hr47.Desmarcar();
                else
                    hr47.Marcar();
                camion = -1;
            }break;
        case 51:
            {
                if(hr51.GetMarcado())
                    hr51.Desmarcar();
                else
                    hr51.Marcar();
                camion = -1;
            }break;
        case 52:
            {
                if(hr52.GetMarcado())
                    hr52.Desmarcar();
                else
                    hr52.Marcar();
                camion = -1;
            }break;
        case 55:
            {
                if(hr55.GetMarcado())
                    hr55.Desmarcar();
                else
                    hr55.Marcar();
                camion = -1;
            }break;
        case 56:
            {
                if(hr56.GetMarcado())
                    hr56.Desmarcar();
                else
                    hr56.Marcar();
                camion = -1;
            }break;
        case 61:
            {
                if(hr61.GetMarcado())
                    hr61.Desmarcar();
                else
                    hr61.Marcar();
                camion = -1;
            }break;
        case 71:
            {
                if(hr71.GetMarcado())
                    hr71.Desmarcar();
                else
                    hr71.Marcar();
                camion = -1;
            }break;
        case 72:
            {
                if(hr72.GetMarcado())
                    hr72.Desmarcar();
                else
                    hr72.Marcar();
                camion = -1;            }break;
        case 73:
            {
                if(hr73.GetMarcado())
                    hr73.Desmarcar();
                else
                    hr73.Marcar();
                camion = -1;
            }break;
        case 0:
            {
                return;
            }break;
        default:
            {
                cout<<"Camion no existente..."<<endl;
                camion = -1;
                cin.get();
            }break;
        }
    }
}

