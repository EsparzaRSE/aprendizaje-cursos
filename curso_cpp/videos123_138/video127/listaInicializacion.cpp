class Nombre_clase{
    private:
        const int var1{};
        int var2{};

    public:
                  //parámetros (opcionales)    //lista de inicializadores miembro
        Nombre_clase(int valor1, int valor2) : var1{valor1}, var2{valor2} {
               //Cuerpo del constructor
        }
};