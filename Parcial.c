#include <stdio.h>

int main() {
    char jugador1, jugador2;
    int victorias1 = 0, victorias2 = 0, ronda = 1;
    printf("Juego: Piedra (R), Papel (P) o Tijeras (S), Usar mayusculas de prefrencia\n");
    while (ronda <= 3) {
        printf("\nRonda %d:\n", ronda);
        printf("Jugador 1 elige (R, P, S): ");
        scanf(" %c", &jugador1);
        printf("Jugador 2 elige (R, P, S): ");
        scanf(" %c", &jugador2);

        if (jugador1 == jugador2) {
            printf("Empate en esta ronda.\n");
        } else if ((jugador1 == 'P' && jugador2 == 'R') ||
                   (jugador1 == 'R' && jugador2 == 'S') ||
                   (jugador1 == 'S' && jugador2 == 'P')) {
            printf("Jugador 1 gana la ronda.\n");
            victorias1++;
        } else {
            printf("Jugador 2 gana la ronda.\n");
            victorias2++;
        }
        if (victorias1 == 2 || victorias2 == 2) {
            break;
        }

        ronda++;
    }


    if (victorias1 > victorias2) {
        printf("¡Jugador 1 gana la partida\n");
    } else if (victorias2 > victorias1) {
        printf("Jugador 2 gana la partida\n");
    } else {
        printf("La partida termina en empate.\n");
    }

    return 0;
}