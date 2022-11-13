#include <iostream>

// Tamaño problema
constexpr const int SIZE_ASIGNATURAS = 4;

// Funcion para introducir los datos
void introducirDatos(int escuela[])
{
 for (int i = 0; i < SIZE_ASIGNATURAS; i++)
    {
        std::cout << "Introduzca la nota de la asignatura "+std::to_string(1+i)+": ";
        std::cin >> escuela[i];
    }
}

// Calcular la media
float media(int escuela[])
{
    float result = 0;

    // Recorremos todo el array
    
    for (int i = 0; i < SIZE_ASIGNATURAS; i++)
    {
        result = result + escuela[i];
    }
    

    return result;
}

int main()
{
    int A[SIZE_ASIGNATURAS];
    int B[SIZE_ASIGNATURAS];
    int C[SIZE_ASIGNATURAS];
    int D[SIZE_ASIGNATURAS];

    // Introducimos los datos

    std::cout << "Clase A\n";
    introducirDatos(A);

    std::cout << "Clase B\n";
    introducirDatos(B);

    std::cout << "Clase C\n";
    introducirDatos(C);

    std::cout << "Clase D\n";
    introducirDatos(D);

    // Calculamos la media de cada clase
    std::cout << "Media Clase A " << media(A) << "\n";
    std::cout << "Media Clase B " << media(B) << "\n";
    std::cout << "Media Clase C " << media(C) << "\n";
    std::cout << "Media Clase D " << media(D) << "\n";

    // Calculamo
    
    return 0;
}
