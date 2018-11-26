#include <stdio.h>
#include <stdlib.h>
void menuprincipal();

void main(){
  system("clear");
  menuprincipal();
}


void menuprincipal(){
  int escolha=1;
  while(escolha != 0){
    printf("%s\n","-----------------------------HangMan-----------------------------");
    printf("%s\n","- Escolha uma Opção !                                           -");
    printf("%s\n","- 1 - Novo Jogo                                                 -");
    printf("%s\n","- 0 - Sair                                                      -");
    printf("%s\n","-                                                               -");
    printf("%s\n","-                                                               -");
    printf("%s\n","-                                                               -");
    printf("%s\n","-                                                               -");
    printf("%s\n","-                                                               -");
    printf("%s\n","-                                                               -");
    printf("%s\n","-----------------------------------------------------------------");
    scanf("%d",&escolha);
    system("clear");
  }
}
