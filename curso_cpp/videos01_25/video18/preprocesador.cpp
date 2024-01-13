#include <iostream>

#define PRUEBA

int main(){

   #ifdef PRUEBA
      std::cout << "Esto es un bloque de código que el preprocesador tendrá en cuenta\n";
   #endif

   #ifdef NO_DEFINIDO
      //este trozo de código, aunque no hay nada el preprocesador lo ignorará por no estar definido con la directiva #define previamente
   #endif

   #if 0
      /*este código será ignorado
       *bastante además
      */
   #endif
}