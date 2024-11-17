#include <unistd.h>

int main(int argc, char **argv)
{
    // Si no hay exactamente un argumento o si no hay cadena
    if (argc != 2)
    {
        write(1, "a\n", 2);  // Imprime 'a' seguido de un salto de línea
        return (0);
    }

    // Recorre la cadena en busca del primer 'a'
    int i = 0;
    while (argv[1][i] != '\0') 
    {
        if (argv[1][i] == 'a')  // Si encuentra una 'a'
        {
            write(1, "a\n", 2);  // Imprime 'a' seguido de un salto de línea
            return (0);
        }
        i++;
    }

    // Si no encuentra ninguna 'a', solo imprime un salto de línea
    write(1, "\n", 1);

    return (0);
}

