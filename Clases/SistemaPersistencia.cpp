#include "SistemaPersistencia.h"
#include "HojaDeRuta.h"
#include "DetallesGraficos.h"
#include <cstdio>

const char ARCHIVO[] = "DatosHR.gigeroa";

bool SistemaPersistencia::Cargar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                                 HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                                 HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    DetallesGraficos d;
    d.animacionCargando();
    FILE *p;
    p = fopen(ARCHIVO,"rb");
    if(p == NULL) return false;
    fread(&hr23,sizeof(HojaDeRuta),1,p);fread(&hr25,sizeof(HojaDeRuta),1,p);
    fread(&hr40,sizeof(HojaDeRuta),1,p);fread(&hr41,sizeof(HojaDeRuta),1,p);
    fread(&hr43,sizeof(HojaDeRuta),1,p);fread(&hr47,sizeof(HojaDeRuta),1,p);
    fread(&hr51,sizeof(HojaDeRuta),1,p);fread(&hr52,sizeof(HojaDeRuta),1,p);
    fread(&hr55,sizeof(HojaDeRuta),1,p);fread(&hr56,sizeof(HojaDeRuta),1,p);
    fread(&hr61,sizeof(HojaDeRuta),1,p);fread(&hr71,sizeof(HojaDeRuta),1,p);
    fread(&hr72,sizeof(HojaDeRuta),1,p);fread(&hr73,sizeof(HojaDeRuta),1,p);
    fclose(p);
    return true;
}

bool SistemaPersistencia::Guardar(HojaDeRuta &hr23, HojaDeRuta &hr25, HojaDeRuta &hr40, HojaDeRuta &hr41, HojaDeRuta &hr43, HojaDeRuta &hr47,
                                  HojaDeRuta &hr51, HojaDeRuta &hr52, HojaDeRuta &hr55, HojaDeRuta &hr56, HojaDeRuta &hr61, HojaDeRuta &hr71,
                                  HojaDeRuta &hr72, HojaDeRuta &hr73)
{
    DetallesGraficos d;
    d.animacionGuardando();
    FILE *p;
    p = fopen(ARCHIVO,"wb");
    if(p == NULL) return false;
    fclose(p);
    p = fopen(ARCHIVO,"ab");
    fwrite(&hr23,sizeof(HojaDeRuta),1,p);fwrite(&hr25,sizeof(HojaDeRuta),1,p);
    fwrite(&hr40,sizeof(HojaDeRuta),1,p);fwrite(&hr41,sizeof(HojaDeRuta),1,p);
    fwrite(&hr43,sizeof(HojaDeRuta),1,p);fwrite(&hr47,sizeof(HojaDeRuta),1,p);
    fwrite(&hr51,sizeof(HojaDeRuta),1,p);fwrite(&hr52,sizeof(HojaDeRuta),1,p);
    fwrite(&hr55,sizeof(HojaDeRuta),1,p);fwrite(&hr56,sizeof(HojaDeRuta),1,p);
    fwrite(&hr61,sizeof(HojaDeRuta),1,p);fwrite(&hr71,sizeof(HojaDeRuta),1,p);
    fwrite(&hr72,sizeof(HojaDeRuta),1,p);fwrite(&hr73,sizeof(HojaDeRuta),1,p);
    fclose(p);
    return true;
}
