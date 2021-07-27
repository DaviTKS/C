#include <stdio.h>
#include <time.h> 

int main()
{
    
  //Seta Qual Tempo Usar No Random
  // Seta Variáveis
   
   int numeroescolhido;
   int chutejogador;
   int vitoria = 0;
   int tentativas = 1;
   int nivel;
   int maximo;
   int ntentativas;
   int displaynumero;
   short score = 1000;
   
   printf("Escolha a Dificuldade Do Jogo\n");
   printf("\n\n\n(1- Super Facil) (2- Facil) (3- Medio) (4- Dificil)");
   printf("\nEscolha: ");

  inicio: 
   scanf("%d" , &nivel);
 
   
   switch(nivel)
   {
     
     case 1: 
        srand(time(NULL)); 
        numeroescolhido = rand() % 20;
        displaynumero = 20;
        ntentativas = 8;
        maximo = 20;
        break;

     case 2:
        srand(time(NULL)); 
        numeroescolhido = rand() % 20;
        displaynumero = 20;
        ntentativas = 5;
        maximo = 20;
        break;

      case 3:

         srand(time(NULL)); 
         numeroescolhido = rand() % 30;
         displaynumero = 30;
         ntentativas = 6;
         maximo = 30;
         break;

      case 4:
         srand(time(NULL)); 
         numeroescolhido = rand() % 50;
         displaynumero = 50;
         ntentativas = 8;
         maximo = 50;
         break;

      default:
       printf("Escolha Uma Das 4 Alternativas Acima!\n");
       goto inicio;
       
   }
   

  // Descreve o Jogo Para o Usuário
   printf("Eu Escolhi Um Numero Entre 1 e %d, Tente Advinha-lo!\n", displaynumero, numeroescolhido);
   

// Seta Numero De Tentativas Do Usuário
for (int i = 1; i <= ntentativas; i++)
{
  





  // Escaneia Teclado e Muda Valor da Variável
   scanf("%d", &chutejogador);

 
   


  // Seta Variáveis
   int igual = (numeroescolhido == chutejogador);
   int menor = (numeroescolhido < chutejogador);
   int maior = (numeroescolhido > chutejogador); 
   
    

  // Verifica Se o Input Do Usuário é Menor Que 1
   if (chutejogador < 1)
    {
      printf("Nao Coloque Numeros Menores Que 1!");
      tentativas--;
      continue;
    }
     
    
  // Verifica Se o Input Foi Maior Ou Menor Que o Numero Escolhido
   if (menor)
    {
      printf("Meu Numero e Menor que %d\n", chutejogador);
    }

   if (maior)
    {
      printf("Meu Numero e maior que %d\n", chutejogador);
    }
   
  
  // Se Não For Maior Nem Menor é Igual - Imprime Mensagem De Vitória
   if(igual)
    {
      printf("\n----------Acertou!!----------\nMeu Numero Era %d\n", numeroescolhido);
      printf("\nVoce Venceu Em %d Tentativas", tentativas);
      vitoria = 1;
      break;
    }

  // Adiciona +1 Ao Contador De Tentativas   
   tentativas++;

    // Seta Pontuação Do Jogador
   short pontosperdidos = (chutejogador - numeroescolhido);
   

   if(pontosperdidos < 0)
    {
      pontosperdidos = pontosperdidos * -1;
    }

   score = (score - pontosperdidos);
   score = (score / tentativas);

 

}  
  
 // Declara o Fim De Jogo
  printf("                    ---%d Pontos---", score);
  printf("\n\n----------Fim De Jogo!----------\n");

} 