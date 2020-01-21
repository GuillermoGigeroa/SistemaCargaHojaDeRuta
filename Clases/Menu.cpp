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
                if(!ConfirmarHR(hr23))
                    return;
            }break;
        case 25:
            {
                if(!ConfirmarHR(hr25))
                    return;
            }break;
        case 40:
            {
                if(!ConfirmarHR(hr40))
                    return;
            }break;
        case 41:
            {
                if(!ConfirmarHR(hr41))
                    return;
            }break;
        case 43:
            {
                if(!ConfirmarHR(hr43))
                    return;
            }break;
        case 47:
            {
                if(!ConfirmarHR(hr47))
                    return;
            }break;
        case 51:
            {
                if(!ConfirmarHR(hr51))
                    return;
            }break;
        case 52:
            {
                if(!ConfirmarHR(hr52))
                    return;
            }break;
        case 55:
            {
                if(!ConfirmarHR(hr55))
                    return;
            }break;
        case 56:
            {
                if(!ConfirmarHR(hr56))
                    return;
            }break;
        case 61:
            {
                if(!ConfirmarHR(hr61))
                    return;
            }break;
        case 71:
            {
                if(!ConfirmarHR(hr71))
                    return;
            }break;
        case 72:
            {
                if(!ConfirmarHR(hr72))
                    return;
            }break;
        case 73:
            {
                if(!ConfirmarHR(hr73))
                    return;
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
                if(!DesconfirmarHR(hr23))
                    return;
            }break;
        case 25:
            {
                if(!DesconfirmarHR(hr25))
                    return;
            }break;
        case 40:
            {
                if(!DesconfirmarHR(hr40))
                    return;
            }break;
        case 41:
            {
                if(!DesconfirmarHR(hr41))
                    return;
            }break;
        case 43:
            {
                if(!DesconfirmarHR(hr43))
                    return;
            }break;
        case 47:
            {
                if(!DesconfirmarHR(hr47))
                    return;
            }break;
        case 51:
            {
                if(!DesconfirmarHR(hr51))
                    return;
            }break;
        case 52:
            {
                if(!DesconfirmarHR(hr52))
                    return;
            }break;
        case 55:
            {
                if(!DesconfirmarHR(hr55))
                    return;
            }break;
        case 56:
            {
                if(!DesconfirmarHR(hr56))
                    return;
            }break;
        case 61:
            {
                if(!DesconfirmarHR(hr61))
                    return;
            }break;
        case 71:
            {
                if(!DesconfirmarHR(hr71))
                    return;
            }break;
        case 72:
            {
                if(!DesconfirmarHR(hr72))
                    return;
            }break;
        case 73:
            {
                if(!DesconfirmarHR(hr73))
                    return;
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
                return;
            }break;
        case 25:
            {
                ActivarHR(hr25);
                    return;
            }break;
        case 40:
            {
                ActivarHR(hr40);
                    return;
            }break;
        case 41:
            {
                ActivarHR(hr41);
                    return;
            }break;
        case 43:
            {
                ActivarHR(hr43);
                    return;
            }break;
        case 47:
            {
                ActivarHR(hr47);
                    return;
            }break;
        case 51:
            {
                ActivarHR(hr51);
                    return;
            }break;
        case 52:
            {
                ActivarHR(hr52);
                    return;
            }break;
        case 55:
            {
                ActivarHR(hr55);
                    return;
            }break;
        case 56:
            {
                ActivarHR(hr56);
                    return;
            }break;
        case 61:
            {
                ActivarHR(hr61);
                    return;
            }break;
        case 71:
            {
                ActivarHR(hr71);
                    return;
            }break;
        case 72:
            {
                ActivarHR(hr72);
                    return;
            }break;
        case 73:
            {
                ActivarHR(hr73);
                    return;
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
                    return;
            }break;
        case 25:
            {
                DesactivarHR(hr25);
                    return;
            }break;
        case 40:
            {
                DesactivarHR(hr40);
                    return;
            }break;
        case 41:
            {
                DesactivarHR(hr41);
                    return;
            }break;
        case 43:
            {
                DesactivarHR(hr43);
                    return;
            }break;
        case 47:
            {
                DesactivarHR(hr47);
                    return;
            }break;
        case 51:
            {
                DesactivarHR(hr51);
                    return;
            }break;
        case 52:
            {
                DesactivarHR(hr52);
                    return;
            }break;
        case 55:
            {
                DesactivarHR(hr55);
                    return;
            }break;
        case 56:
            {
                DesactivarHR(hr56);
                    return;
            }break;
        case 61:
            {
                DesactivarHR(hr61);
                    return;
            }break;
        case 71:
            {
                DesactivarHR(hr71);
                    return;
            }break;
        case 72:
            {
                DesactivarHR(hr72);
                    return;
            }break;
        case 73:
            {
                DesactivarHR(hr73);
                    return;
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
    cout<<"Camion "<<estaHR.GetNumero()<<" ha sido confirmado."<<endl;
    cin.get();
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
    cout<<"Camion "<<estaHR.GetNumero()<<" ha sido desconfirmado."<<endl;
    cin.get();
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
        cout<<"Camion "<<estaHR.GetNumero()<<" ha sido desactivado."<<endl;
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

void Menu::EscribirCamionActivar(HojaDeRuta &estaHR)
{
    cout<<"|      Camion "<<estaHR.GetNumero();
    if(estaHR.GetDesactivado())
        cout<<"    (Desactivado)       |"<<endl;
    else
        cout<<"    (Activo)            |"<<endl;
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
        EscribirCamion(hr23);   EscribirCamion(hr25);
        EscribirCamion(hr40);   EscribirCamion(hr41);
        EscribirCamion(hr43);   EscribirCamion(hr47);
        EscribirCamion(hr51);   EscribirCamion(hr52);
        EscribirCamion(hr55);   EscribirCamion(hr56);
        EscribirCamion(hr61);   EscribirCamion(hr71);
        EscribirCamion(hr72);   EscribirCamion(hr73);
        d.escribirSlow("|_______________________________________|");
        cin.get();
}

