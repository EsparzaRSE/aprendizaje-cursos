struct Alumno{

    int id{};
    int edad{};
    int tutorID{};

};

Alumno juan = {1, 17, 3}; // Por copia-lista con igual y llaves
//Alumno marta (2, 17, 2); // Directa usando lista entre paréntesis (C++ 20)
Alumno pepe {3, 18, 1}; // Lista o uniforme entre llaves (preferida)