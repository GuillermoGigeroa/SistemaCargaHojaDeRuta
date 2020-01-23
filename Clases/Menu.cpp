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
        cout<<" _______________________________________ "<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"| Sistema de registro de confirmaciones |"<<endl;
        cout<<"|_______________________________________|"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|        Seleccione una opcion:         |"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|      1) Confirmacion de camiones      |"<<endl;
        cout<<"|      2) Activar camiones              |"<<endl;
        cout<<"|      3) Marcar hojas de ruta          |"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|      4) Confirmar todos               |"<<endl;
        cout<<"|      5) Desconfirmar todos            |"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|      6) Activar todos                 |"<<endl;
        cout<<"|      7) Desactivar todos              |"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|      8) Marcar todo                   |"<<endl;
        cout<<"|      9) Desmarcar todo                |"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|      0) Ver camiones disponibles      |"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|      S) Salir                         |"<<endl;
        cout<<"|_______________________________________|"<<endl;
        cout<<endl<<"Ingrese la opcion: ";
        cin>>opc;
        cin.ignore();
        d.limpiarConsola();
        switch (opc[0])
        {
        case '1':
            {
                MenuConfirmar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case '2':
            {
                MenuActivar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case '3':
            {
                MenuMarcar(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case '4':
            {
                ConfirmarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case '5':
            {
                DesconfirmarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case '6':
            {
                ActivarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case '7':
            {
                DesactivarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case '8':
            {
                MarcarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case '9':
            {
                DesmarcarTodo(hr23, hr25, hr40, hr41, hr43, hr47, hr51, hr52, hr55, hr56, hr61, hr71, hr72, hr73);
            }break;
        case '0':
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
        cout<<" _______________________________________ "<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|        Confirmacion de camiones       |"<<endl;
        cout<<"|_______________________________________|"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|        Seleccione el camion:          |"<<endl;
        cout<<"|                                       |"<<endl;
            EscribirCamion(hr23);   EscribirCamion(hr25);
            EscribirCamion(hr40);   EscribirCamion(hr41);
            EscribirCamion(hr43);   EscribirCamion(hr47);
            EscribirCamion(hr51);   EscribirCamion(hr52);
            EscribirCamion(hr55);   EscribirCamion(hr56);
            EscribirCamion(hr61);   EscribirCamion(hr71);
            EscribirCamion(hr72);   EscribirCamion(hr73);
        cout<<"|_______________________________________|"<<endl;
        cout<<endl<<"Ingrese el numero de camion: ";
        cin.getline(camionChar,20);
        while (!u.IsNumeric(camionChar))
        {
            d.limpiarConsola();
            cout<<" _______________________________________ "<<endl;
            cout<<"|                                       |"<<endl;
            cout<<"|        Confirmacion de camiones       |"<<endl;
            cout<<"|_______________________________________|"<<endl;
            cout<<"|                                       |"<<endl;
            cout<<"|        Seleccione el camion:          |"<<endl;
            cout<<"|                                       |"<<endl;
                EscribirCamion(hr23);   EscribirCamion(hr25);
                EscribirCamion(hr40);   EscribirCamion(hr41);
                EscribirCamion(hr43);   EscribirCamion(hr47);
                EscribirCamion(hr51);   EscribirCamion(hr52);
                EscribirCamion(hr55);   EscribirCamion(hr56);
                EscribirCamion(hr61);   EscribirCamion(hr71);
                EscribirCamion(hr72);   EscribirCamion(hr73);
            cout<<"|_______________________________________|"<<endl;
            cout<<endl<<"Camion no existente..."<<endl<<endl<<"Ingrese el numero de camion: ";
            cin.getline(camionChar,20);
        }
        camion = u.ConvertToInt(camionChar);
        d.limpiarConsola();
        switch(camion)
        {
        case 23:
            {
                if(hr23.GetConfirmado())
                    DesconfirmarHR(hr23);
                else
                    ConfirmarHR(hr23);
                camion = -1;
            }break;
        case 25:
            {
                if(hr25.GetConfirmado())
                    DesconfirmarHR(hr25);
                else
                    ConfirmarHR(hr25);
                camion = -1;
            }break;
        case 40:
            {
                if(hr40.GetConfirmado())
                    DesconfirmarHR(hr40);
                else
                    ConfirmarHR(hr40);
                camion = -1;
            }break;
        case 41:
            {
                if(hr41.GetConfirmado())
                    DesconfirmarHR(hr41);
                else
                    ConfirmarHR(hr41);
                camion = -1;
            }break;
        case 43:
            {
                if(hr43.GetConfirmado())
                    DesconfirmarHR(hr43);
                else
                    ConfirmarHR(hr43);
                camion = -1;
            }break;
        case 47:
            {
                if(hr47.GetConfirmado())
                    DesconfirmarHR(hr47);
                else
                    ConfirmarHR(hr47);
                camion = -1;
            }break;
        case 51:
            {
                if(hr51.GetConfirmado())
                    DesconfirmarHR(hr51);
                else
                    ConfirmarHR(hr51);
                camion = -1;
            }break;
        case 52:
            {
                if(hr52.GetConfirmado())
                    DesconfirmarHR(hr52);
                else
                    ConfirmarHR(hr52);
                camion = -1;
            }break;
        case 55:
            {
                if(hr55.GetConfirmado())
                    DesconfirmarHR(hr55);
                else
                    ConfirmarHR(hr55);
                camion = -1;
            }break;
        case 56:
            {
                if(hr56.GetConfirmado())
                    DesconfirmarHR(hr56);
                else
                    ConfirmarHR(hr56);
                camion = -1;
            }break;
        case 61:
            {
                if(hr61.GetConfirmado())
                    DesconfirmarHR(hr61);
                else
                    ConfirmarHR(hr61);
                camion = -1;
            }break;
        case 71:
            {
                if(hr71.GetConfirmado())
                    DesconfirmarHR(hr71);
                else
                    ConfirmarHR(hr71);
                camion = -1;            }break;
        case 72:
            {
                if(hr72.GetConfirmado())
                    DesconfirmarHR(hr72);
                else
                    ConfirmarHR(hr72);
                camion = -1;
            }break;
        case 73:
            {
                if(hr73.GetConfirmado())
                    DesconfirmarHR(hr73);
                else
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
        cout<<" _______________________________________ "<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|            Activar camiones           |"<<endl;
        cout<<"|_______________________________________|"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|        Seleccione el camion:          |"<<endl;
        cout<<"|                                       |"<<endl;
            EscribirCamionActivar(hr23);   EscribirCamionActivar(hr25);
            EscribirCamionActivar(hr40);   EscribirCamionActivar(hr41);
            EscribirCamionActivar(hr43);   EscribirCamionActivar(hr47);
            EscribirCamionActivar(hr51);   EscribirCamionActivar(hr52);
            EscribirCamionActivar(hr55);   EscribirCamionActivar(hr56);
            EscribirCamionActivar(hr61);   EscribirCamionActivar(hr71);
            EscribirCamionActivar(hr72);   EscribirCamionActivar(hr73);
        cout<<"|_______________________________________|"<<endl;
        cout<<endl<<"Ingrese el numero de camion: ";
        cin.getline(camionChar,20);
        while (!u.IsNumeric(camionChar))
        {
            d.limpiarConsola();
            cout<<" _______________________________________ "<<endl;
            cout<<"|                                       |"<<endl;
            cout<<"|            Activar camiones           |"<<endl;
            cout<<"|_______________________________________|"<<endl;
            cout<<"|                                       |"<<endl;
            cout<<"|        Seleccione el camion:          |"<<endl;
            cout<<"|                                       |"<<endl;
                EscribirCamionActivar(hr23);   EscribirCamionActivar(hr25);
                EscribirCamionActivar(hr40);   EscribirCamionActivar(hr41);
                EscribirCamionActivar(hr43);   EscribirCamionActivar(hr47);
                EscribirCamionActivar(hr51);   EscribirCamionActivar(hr52);
                EscribirCamionActivar(hr55);   EscribirCamionActivar(hr56);
                EscribirCamionActivar(hr61);   EscribirCamionActivar(hr71);
                EscribirCamionActivar(hr72);   EscribirCamionActivar(hr73);
            cout<<"|_______________________________________|"<<endl;
            cout<<endl<<"Camion no existente..."<<endl<<endl<<"Ingrese el numero de camion: ";
            cin.getline(camionChar,20);
        }
        camion = u.ConvertToInt(camionChar);
        d.limpiarConsola();
        switch(camion)
        {
        case 23:
            {
                if(!hr23.GetDesactivado())
                    DesactivarHR(hr23);
                else
                    ActivarHR(hr23);
                camion = -1;
            }break;
        case 25:
            {
                if(!hr25.GetDesactivado())
                    DesactivarHR(hr25);
                else
                    ActivarHR(hr25);
                camion = -1;
            }break;
        case 40:
            {
                if(!hr40.GetDesactivado())
                    DesactivarHR(hr40);
                else
                    ActivarHR(hr40);
                camion = -1;
            }break;
        case 41:
            {
                if(!hr41.GetDesactivado())
                    DesactivarHR(hr41);
                else
                    ActivarHR(hr41);
                camion = -1;
            }break;
        case 43:
            {
                if(!hr43.GetDesactivado())
                    DesactivarHR(hr43);
                else
                    ActivarHR(hr43);
                camion = -1;
            }break;
        case 47:
            {
                if(!hr47.GetDesactivado())
                    DesactivarHR(hr47);
                else
                    ActivarHR(hr47);
                camion = -1;
            }break;
        case 51:
            {
                if(!hr51.GetDesactivado())
                    DesactivarHR(hr51);
                else
                    ActivarHR(hr51);
                camion = -1;
            }break;
        case 52:
            {
                if(!hr52.GetDesactivado())
                    DesactivarHR(hr52);
                else
                    ActivarHR(hr52);
                camion = -1;
            }break;
        case 55:
            {
                if(!hr55.GetDesactivado())
                    DesactivarHR(hr55);
                else
                    ActivarHR(hr55);
                camion = -1;
            }break;
        case 56:
            {
                if(!hr56.GetDesactivado())
                    DesactivarHR(hr56);
                else
                    ActivarHR(hr56);
                camion = -1;
            }break;
        case 61:
            {
                if(!hr61.GetDesactivado())
                    DesactivarHR(hr61);
                else
                    ActivarHR(hr61);
                camion = -1;
            }break;
        case 71:
            {
                if(!hr71.GetDesactivado())
                    DesactivarHR(hr71);
                else
                    ActivarHR(hr71);
                camion = -1;
            }break;
        case 72:
            {
                if(!hr72.GetDesactivado())
                    DesactivarHR(hr72);
                else
                    ActivarHR(hr72);
                camion = -1;
            }break;
        case 73:
            {
                if(!hr73.GetDesactivado())
                    DesactivarHR(hr73);
                else
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
    cout<<" _______________________________________ "<<endl;
    cout<<"|                                       |"<<endl;
    cout<<"|               Camiones                |"<<endl;
    cout<<"|_______________________________________|"<<endl;
    cout<<"|                                       |"<<endl;
    EscribirCamionLista(hr23);   EscribirCamionLista(hr25);
    EscribirCamionLista(hr40);   EscribirCamionLista(hr41);
    EscribirCamionLista(hr43);   EscribirCamionLista(hr47);
    EscribirCamionLista(hr51);   EscribirCamionLista(hr52);
    EscribirCamionLista(hr55);   EscribirCamionLista(hr56);
    EscribirCamionLista(hr61);   EscribirCamionLista(hr71);
    EscribirCamionLista(hr72);   EscribirCamionLista(hr73);
    cout<<"|_______________________________________|"<<endl;
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
        cout<<" _______________________________________ "<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|          Marcar hoja de ruta          |"<<endl;
        cout<<"|_______________________________________|"<<endl;
        cout<<"|                                       |"<<endl;
        cout<<"|        Seleccione el camion:          |"<<endl;
        cout<<"|                                       |"<<endl;
            EscribirMarcado(hr23);   EscribirMarcado(hr25);
            EscribirMarcado(hr40);   EscribirMarcado(hr41);
            EscribirMarcado(hr43);   EscribirMarcado(hr47);
            EscribirMarcado(hr51);   EscribirMarcado(hr52);
            EscribirMarcado(hr55);   EscribirMarcado(hr56);
            EscribirMarcado(hr61);   EscribirMarcado(hr71);
            EscribirMarcado(hr72);   EscribirMarcado(hr73);
        cout<<"|_______________________________________|"<<endl;
        cout<<endl<<"Ingrese el numero de camion: ";
        cin.getline(camionChar,20);
        while (!u.IsNumeric(camionChar))
        {
            d.limpiarConsola();
            cout<<" _______________________________________ "<<endl;
            cout<<"|                                       |"<<endl;
            cout<<"|          Marcar hoja de ruta          |"<<endl;
            cout<<"|_______________________________________|"<<endl;
            cout<<"|                                       |"<<endl;
            cout<<"|        Seleccione el camion:          |"<<endl;
            cout<<"|                                       |"<<endl;
                EscribirMarcado(hr23);   EscribirMarcado(hr25);
                EscribirMarcado(hr40);   EscribirMarcado(hr41);
                EscribirMarcado(hr43);   EscribirMarcado(hr47);
                EscribirMarcado(hr51);   EscribirMarcado(hr52);
                EscribirMarcado(hr55);   EscribirMarcado(hr56);
                EscribirMarcado(hr61);   EscribirMarcado(hr71);
                EscribirMarcado(hr72);   EscribirMarcado(hr73);
            cout<<"|_______________________________________|"<<endl;
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

