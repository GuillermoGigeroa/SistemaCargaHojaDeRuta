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
        bool GetMarcado() { return marcado; }

        void Activar(){desactivado = false;}
        void Desactivar(){desactivado = true;}
        void Confirmar(){confirmado = true;}
        void Desconfirmar(){confirmado = false;}
        void Marcar(){marcado = true;}
        void Desmarcar(){marcado = false;}

    private:
        bool confirmado, desactivado, marcado;
        unsigned short int numero;
};

#endif // HOJADERUTA_H
