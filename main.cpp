#include <iostream>
#include <cstdio>

//Protótipos das funções
float adcionar(float a, float b);
float subtrair(float a, float b);
float multiplicar(float a, float b);
float dividir(float a, float b);

int main() {
  int opcao;
  float num1 , num2;

  //verifica qual operação o usuário quer fazer
  std::cout << "Bem vindo a calculadora!\n";
  std::cout << "O que você deseja fazer hoje?\n";
  std::cout << "1. Adição\n";
  std::cout << "2. Subtração\n";
  std::cout << "3. Multiplicação\n";
  std::cout << "4. Divisão\n";
  std::cin >> opcao;

  //Pega os inputs do usuário
  std::cout << "Digite o primeiro número: ";
  std::cin >> num1;
  std::cout << "Digite o segundo número: ";
  std::cin >> num2;
  switch(opcao){
    //Realiza a adição
    case 1:
      std::printf("A soma dos números é igual a: %.2f\n", adcionar(num1, num2));
      break;
    //Realiza a subtração
    case 2:
      std::printf("A subtração dos números é igual a: %.2f\n", subtrair(num1, num2));
      break;
    //Realiza a multiplicação
    case 3:
      std::printf("O multiplicação dos números é igual a: %.2f\n", multiplicar(num1, num2));
      break;
    //Realiza a divisão
    case 4:
      //O if verifica se o usuário está tentando dividir por 0
      if (num2 == 0){
        //Mostra uma mensagem de erro se o usuário tentar dividir por 0
        std::cout << "ERRO! NÃO É POSSÍVEL DIVIDIR POR 0\n";
      }
      else{
        std::printf("A divisão dos números é igual a: %.2f\n", dividir(num1, num2));
      }
  }

  return 0;
}

//Adição
float adcionar(float a, float b) {
  return a + b;
}
//Subtração
float subtrair(float a, float b) {
  return a - b;
}
//Multiplicação
float multiplicar(float a, float b) {
  return a * b;
}
//Divisão
float dividir(float a, float b) {
  return a / b;
}