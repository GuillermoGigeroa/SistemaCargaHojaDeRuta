#ifndef HOJADERUTA_H
#define HOJADERUTA_H


class HojaDeRuta
{
    public:
        HojaDeRuta(unsigned short int num);
        bool GetConfirmado() { return confirmado; }
        unsigned short int GetNumero() { return numero; }
        void SetNumero(int val) { numero = val; }
        bool GetDesactivado() { return desactivado; }
        void SetDesactivado(bool val) { desactivado = val; }

        void Activar(){desactivado = false;}
        void Desactivar(){desactivado = true;}
        void Confirmar(){confirmado = true;}
        void Desconfirmar(){confirmado = false;}

    private:
        bool confirmado;
        unsigned short int numero;
        bool desactivado;
};

#endif // HOJADERUTA_H
