#include <stdio.h>

//transformar em farenhait
  void Fahrenheit(float A[],float B[]){
 for(int i=0;i<10;i++){
   B[i] = (A[i] * 1.8) + 32;
 }
  }


//Media das tempperaturas A
 float calcularmed(float A[]){
  float soma=0;
   for(int i=0;i<10;i++){
    soma = soma + A[i];
  }
     return soma/10;
   }

//temperaturas do veto A abaixo da media
  void abaixoMedia(float A[],float media){
    printf("\n Temperaturas do vetor A que estao abaixo da media: ");
    for(int i=0;i<10;i++){
      if(A[i]<media){
        printf("\n%.2f",A[i]);
      }
    }
  }

int main(void) {
  float A[10], B[10],maiorA,menorA,posicaoA;
  float media;
  int soma=0;
  int i;

  for(i=0;i<10;i++){
    printf("\nEnter the temperature in degrees Celsius: ");
    scanf("%f",&A[i]);
  }
  //chamdar funções
    Fahrenheit(A,B);
    media = calcularmed(A);
    abaixoMedia(A,media);

    menorA = A[0];
    maiorA = A[0];
  
    for (i = 0; i < 10; i++) {
        if (A[i] > maiorA) {
            maiorA = A[i];
            posicaoA = i;
        }else if(A[i] < menorA){
            menorA = A[i];
        }
    }

  //mostrar resultados
      for(i=0;i<10;i++){
    printf("\nTemperaturas em Fahrenheit: %.2f",B[i]);
      }
      printf("\nMedia das temperaturas: %.2f",media);
      printf("\nMaior temperatura: %.2f",maiorA);
      printf("\nMenor temperatura: %.2f",menorA);
      printf("\nPosicao da maior temperatura no vetor A: %.1f",posicaoA);

  return 0;
  }
