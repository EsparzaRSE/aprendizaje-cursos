#include <iostream>

#if 0
int main(){

    int arrayBidi[][3]{ // se pueden omitir las filas si se inicializa, las columnas no
        {1, 3, 5},
        {2, 4, 6},
        {8}      // lo que falta lo rellena con 8, 0, 0
    };

    int arrayTri[2][3][2]{

        { {0,1}, {2,3}, {4,5}  },
        { {6,7}, {8,9}, {10,11}}
    };

    return 0;
}
#endif