#include <stdio.h>

int main() {
    int choice;
    int score = 0;

    while (1) {
        // Menu principal
        printf("\n=== Menu Principal ===\n");
        printf("1. Iniciar o Quiz\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
              struct respostas;
                // Pergunta 1
                printf("1. Qual é a capital do Brasil?\n");
                printf("a) Buenos Aires\nb) Brasília\nc) Rio de Janeiro\nd) São Paulo\nEscolha a opção correta: ");
                char resposta1;
                scanf(" %c", &resposta1);
                if (resposta1 == 'b' || resposta1 == 'B') {
                    printf("Correto!\n");
                    score++;
                } else {
                  printf("Errado. A resposta correta é Brasília.\n");
                }
               respostas.alternativa[0] = resposta1;

                //  Pergunta 2
                printf("\n2. Qual é o maior planeta do nosso sistema solar?\n");
                printf("a) Terra\nb) Júpiter\nc) Marte\nd) Vênus\nEscolha a opção correta: ");
                char resposta2;
                scanf(" %c", &resposta2);
                if (resposta2 == 'b' || resposta2 == 'B') {
                    printf("Correto!\n");
                    score++;
                } else {
                    printf("Errado. A resposta correta é Júpiter.\n");
                }
              respostas.alternativa[0] = resposta2;
              
              // Pergunta 3
                printf("3.  Quantos dias são necessários para a Terra orbitar o sol?\n");
                printf("a) 325\nb) 405\nc) 365\nd) 345\nEscolha a opção correta: ");
                char resposta1;
                scanf(" %c", &resposta3);
                if (resposta1 == 'c' || resposta1 == 'C') {
                    printf("Correto!\n");
                    score++;
                } else {
                    printf("Errado. A resposta correta é 365 dias.\n");
                }
              respostas.alternativa[0] = resposta3;

              // Pergunta 4
              printf("4. Qual é o menor país do mundo?\n");
              printf("a) Noruega\nb) Chile\nc) Brasil\nd) Vaticano\nEscolha a opção correta: ");
              char resposta1;
              scanf(" %c", &resposta4);
              if (resposta1 == 'd' || resposta1 == 'D') {
                  printf("Correto!\n");
                  score++;
              } else {
                  printf("Errado. A resposta correta é Vaticano.\n");
              }
              respostas.alternativa[0] = resposta4;

              // Pergunta 5
              printf("5. De qual cidade vieram os Beatles?\n");
              printf("a) Liverpool\nb) Estados Unidos\nc) Canadá\nd) Inglaterra\nEscolha a opção correta: ");
              char resposta1;
              scanf(" %c", &resposta5);
              if (resposta1 == 'a' || resposta1 == 'A') {
                  printf("Correto!\n");
                  score++;
              } else {
                  printf("Errado. A resposta correta é Liverpool.\n");
              }
              respostas.alternativa[0] = resposta5;

              // Pergunta 6
              printf("6.  De quem é a famosa frase “Penso, logo existo”?\n");
              printf("a) Platão\nb) Descartes\nc) Sócrates\nd) Francis Bacon\nEscolha a opção correta: ");
              char resposta1;
              scanf(" %c", &resposta6);
              if (resposta1 == 'b' || resposta1 == 'B') {
                  printf("Correto!\n");
                  score++;
              } else {
                  printf("Errado. A resposta correta é Descardes.\n");
              }
              respostas.alternativa[0] = resposta6;

              // Pergunta 7
              printf("7. De onde é a invenção do chuveiro elétrico?\n");
              printf("a) França\nb) Inglaterra\nc) Suíça\nd) Brasil\nEscolha a opção correta: ");
              char resposta1;
              scanf(" %c", &resposta7);
              if (resposta1 == 'd' || resposta1 == 'D') {
                  printf("Correto!\n");
                  score++;
              } else {
                  printf("Errado. A resposta correta é Brasil.\n");
              }
              respostas.alternativa[0] = resposta7;

              // Pergunta 8
              printf("8. Qual o livro mais vendido no mundo a seguir à Bíblia?\n");
              printf("a) O Senhor dos Anéis\nb) Dom Quixote\nc) O Pequeno Príncipe\nd) Ela, a Feiticeira\nEscolha a opção correta: ");
              char resposta1;
              scanf(" %c", &resposta8);
              if (resposta1 == 'b' || resposta1 == 'B') {
                  printf("Correto!\n");
                  score++;
              } else {
                  printf("Errado. A resposta correta é Dom Quixote.\n");
              }
              respostas.alternativa[0] = resposta8;

              // Pergunta 9
              printf("9. Atualmente, quantos elementos químicos a tabela periódica possui?\n");
              printf("a) 113\nb) 75\nc) 120\nd) 118\nEscolha a opção correta: ");
              char resposta1;
              scanf(" %c", &resposta9);
              if (resposta1 == 'd' || resposta1 == 'D') {
                  printf("Correto!\n");
                  score++;
              } else {
                  printf("Errado. A resposta correta é 118 elementos.\n");
              }
              respostas.alternativa[0] = resposta9;

              // Pergunta 10
              printf("10. Quais os países que têm a maior e a menor expectativa de vida do mundo?\n");
              printf("a) Japão e Serra Leoa\nb) Austrália e Afeganistão\nc) Brasil e Congo\nd) Austrália e Afeganistão\nEscolha a opção correta: ");
              char resposta1;
              scanf(" %c", &resposta10);
              if (resposta1 == 'a' || resposta1 == 'A') {
                  printf("Correto!\n");
                  score++;
              } else {
                  printf("Errado. A resposta correta é Japão e Serra Leoa.\n");
              }
              respostas.alternativa[0] = resposta10;




                  // pontuação parcial
                printf("\nPontuação Atual: %d/10\n", score);
                break;

            case 2:
                // Sair do programa
                printf("\nObrigado por jogar! Pontuação Final: %d/10\n", score);
                return 0;

            default:
                printf("\nOpção inválida. Escolha novamente.\n");
        }
    }
  respostas.score = score;

    return 0;
}