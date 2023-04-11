#include <stdio.h>
#include <stdlib.h>

/* Define Ok e Sair são Declaração de constante para facilitar na leitura do codigo quando for necessário
sair ou continuar em uma possivel função ou parte do código.. */
#define ok 1
#define sair 0

// Enumerado para Ligar ou desligar Led
typedef enum
{
    led_on = 1,
    led_off = 0,
} led;

// Enumerado para ligar ou desligar motor
typedef enum
{
    motor_on = 2,
    motor_off = 3,
} motor;

// Menu para interação com o usuário, para saber o que ele pretende executar.
void menu()
{

    int opcaoMenu;
    printf("    *** MENU ***\n");
    printf("Digite 1 para entrar no menu ou 0 para sair\n");
    scanf("%d", &opcaoMenu);

    if (opcaoMenu == ok)
    {

        printf("Digite 1 para ligar LED 0 para desligar LED\n\n");
        printf("Digite 2 para ligar o motor e 3 para desligar o motor\n\n");
        
        switch (opcaoMenu)
        {
        case led_on:
            // Código para ligar o led
            break;

        case led_off:
            // Código para desligar o led
            break;

        case motor_on:
            // Código para ligar o motor
            break;

        case motor_off:
            // Código para desligar o motor
            break;

        default:
            break;
        }
    }
    else
    {
        // incluir aqui um comando para fechar o programa que ainda não sei como fazer.. (JR)
    }
}

//Função main, a função principal onde será executado o código do programa.
int main()
{
    menu();

}