#include "DetallesGraficos.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <iomanip>
using namespace std;
using std::setw;
using std::left;

void DetallesGraficos::limpiarConsola(){
    system("cls || clear");
}

void DetallesGraficos::acomodarConsola(){
    system("color 0E");
}

void DetallesGraficos::hacerEspacio(){
    cout<<endl;
}

void DetallesGraficos::escribirSlow(char *esteTexto){
    int x = 0;
    while (esteTexto[x] != '\0'){
        cout<<esteTexto[x];
        x++;
    }
    Sleep(50);
    cout<<endl;
}

void DetallesGraficos::_escribirSlow(char *esteTexto){
    int x = 0;
    while (esteTexto[x] != '\0'){
        if (esteTexto[x] != ' '){
            Sleep(5);
        }
        cout<<esteTexto[x];
        x++;
    }
}

void DetallesGraficos::presentacion(){
    limpiarConsola();
    escribirSlow("               @@@@@@@@@@@@@@   @@@@@@@@@@@@@@              ");
    escribirSlow("           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ");
    escribirSlow("        @@@@@@@@        @@@@@@@@@@@@@        @@@@@@@@       ");
    escribirSlow("      @@@@@@         @@@@@@@     @@@@@@@         @@@@@@     ");
    escribirSlow("    @@@@@@            @@@           @@@            @@@@@@   ");
    escribirSlow("   @@@@@                                             @@@@@  ");
    escribirSlow("  @@@@@           __________________________          @@@@@ ");
    escribirSlow(" @@@@@           |                          |          @@@@@");
    escribirSlow(" @@@@            | G.I.G.E.R.O.A.B.L.A.C.K. |           @@@@");
    escribirSlow(" @@@@            |__________________________|           @@@@");
    escribirSlow(" @@@@                                                   @@@@");
    escribirSlow(" @@@@             @@@@@@@@@       @@@@@@@@@             @@@@");
    escribirSlow(" @@@@             @@@@@@@@@       @@@@@@@@@             @@@@");
    escribirSlow(" @@@@@             @@@@               @@@@             @@@@@");
    escribirSlow("  @@@@@            @@@@               @@@@            @@@@@ ");
    escribirSlow("   @@@@@            @@@@             @@@@            @@@@@  ");
    escribirSlow("    @@@@@@           @@@@@         @@@@@           @@@@@@   ");
    escribirSlow("      @@@@@@          @@@@@@     @@@@@@          @@@@@@     ");
    escribirSlow("        @@@@@@@@        @@@@@@@@@@@@@        @@@@@@@@       ");
    escribirSlow("           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ");
    hacerEspacio();
    _escribirSlow("                        BIENVENIDO AL");
    hacerEspacio();
    _escribirSlow(" SISTEMA DE REGISTROS DE CONFIRMACIONES - Guillermo Gigeroa");
    Sleep(2300);
    limpiarConsola();
}

void DetallesGraficos::despedida(){
    limpiarConsola();
    escribirSlow("               @@@@@@@@@@@@@@   @@@@@@@@@@@@@@              ");
    escribirSlow("           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ");
    escribirSlow("        @@@@@@@@        @@@@@@@@@@@@@        @@@@@@@@       ");
    escribirSlow("      @@@@@@         @@@@@@@     @@@@@@@         @@@@@@     ");
    escribirSlow("    @@@@@@            @@@           @@@            @@@@@@   ");
    escribirSlow("   @@@@@                                             @@@@@  ");
    escribirSlow("  @@@@@           __________________________          @@@@@ ");
    escribirSlow(" @@@@@           |                          |          @@@@@");
    escribirSlow(" @@@@            | G.I.G.E.R.O.A.B.L.A.C.K. |           @@@@");
    escribirSlow(" @@@@            |__________________________|           @@@@");
    escribirSlow(" @@@@                                                   @@@@");
    escribirSlow(" @@@@             @@@@@@@@@       @@@@@@@@@             @@@@");
    escribirSlow(" @@@@             @@@@@@@@@       @@@@@@@@@             @@@@");
    escribirSlow(" @@@@@             @@@@               @@@@             @@@@@");
    escribirSlow("  @@@@@            @@@@               @@@@            @@@@@ ");
    escribirSlow("   @@@@@            @@@@             @@@@            @@@@@  ");
    escribirSlow("    @@@@@@           @@@@@         @@@@@           @@@@@@   ");
    escribirSlow("      @@@@@@          @@@@@@     @@@@@@          @@@@@@     ");
    escribirSlow("        @@@@@@@@        @@@@@@@@@@@@@        @@@@@@@@       ");
    escribirSlow("           @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ");
    hacerEspacio();
    _escribirSlow("                    GRACIAS POR UTILIZAR EL");
    hacerEspacio();
    _escribirSlow(" SISTEMA DE REGISTROS DE CONFIRMACIONES - Guillermo Gigeroa");
    Sleep(2300);
}

