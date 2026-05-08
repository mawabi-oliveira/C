#include <stdio.h>
#include <string.h>

struct Personagem {
    char nome[50];
    char regiaoSpawn[50];
    char classe[50];
    int missoes_concluidas;
    int acertos;
};

int main() {
    struct Personagem p1;
    p1.acertos = 0;
    p1.missoes_concluidas = 0;
    int escolha; 

    printf("Bem vindo(a/e) a Zohen, Desbravador! Qual seu nome? ");
    scanf("%s", p1.nome);

    printf("\nEscolha sua regiao (Vyria, Mendor ou Soldir): ");
    scanf("%s", p1.regiaoSpawn);

    printf("\nEscolha sua classe (Guerreiro, Mago ou Assassino): ");
    scanf("%s", p1.classe);

   // --- MISSÃO 1 ---
    printf("\n[Missao 1] %s, corte madeira!", p1.nome);
    printf("\n(1 para Sim / 0 para Nao): ");
    scanf("%d", &escolha);
    if (escolha == 1) { 
        p1.missoes_concluidas++;
        printf("Madeira cortada!\n");
    }

    // --- MISSÃO 2 ---
    printf("\n[Missao 2] Entre em uma guilda que te levara a vitoria!");
    printf("\n1 - Abrasadores / 0 - Pontadores: ");
    scanf("%d", &escolha);
     if (escolha == 1) { 
        p1.missoes_concluidas++;
	}
  
    printf("Voce agora faz parte de uma guilda!\n");

    // --- MISSÃO 3 ---
    printf("\n[Missao 3] Entre na Dungeon para chegar ao fim!");
    printf("\n1 - Entrar / 0 - Fugir: ");
    scanf("%d", &escolha);
    
    if (escolha == 1) {
        p1.missoes_concluidas++;
        printf("Voce entrou na Dungeon...\n");
    } else {
        printf("Voce teve medo e nao entrou.\n");
    }

    // --- CHECAGEM DE FIM DE JOGO (Após as 3 missões) ---
    if (p1.missoes_concluidas < 2) {
        printf("\n--- GAME OVER ---\n");
        printf("Voce concluiu apenas %d de 3 missões. Nao eh forte o suficiente!\n", p1.missoes_conclduidas);
        system("start derrota.mp4");
        return 0; 
    }

    printf("\nParabens! %s, %s de %s Voce concluiu %d missoes e chegou ao andar final.\n", p1.nome, p1.classe, p1.regiaoSpawn, p1.missoes_concluidas);
    system("start vitoria.mp4");

    return 0;
}
