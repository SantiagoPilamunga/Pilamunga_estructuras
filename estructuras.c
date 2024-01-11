#include <stdio.h>
int main(int argc, char const *argv[])
{
    struct alumno
    {
        int matricula;
        char nombre[50];
        char direccion[50];
        char materia[50];
        float nota;
    };
    struct alumno a1 = {100, "Juan Perez", "Quito", "Programcion", 8.8};

    return 0;
}
