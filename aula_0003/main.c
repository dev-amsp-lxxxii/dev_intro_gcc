#include <stdio.h>
#include <stdlib.h>
/*
    Aula: 0003
    Tema: Não use a função system("pause")
    Link: https://www.youtube.com/watch?v=DjbtGqscwcU&list=PLqJK4Oyr5WSjjEQCKkX6oXFORZX7ro3DA&index=4
    Data: 24.10.2024
*/

int main()
{
    printf("\nPressione qualquer tecla para finalizar.");
    getchar(); // função de entrada para ler o caracter
    // system("pause"); -> específico do windows. ou seja não ira funcinaro em outros SO.
    return 0;
}
