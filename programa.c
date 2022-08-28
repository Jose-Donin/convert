#include <stdio.h>
/*Resources usados no processo de criação das funções:
    decimal --> binario{
        https://www.scaler.com/topics/decimal-to-binary-in-c/
        https://www.educba.com/arithmetic-operators-in-c/?source=leftnav
        https://byjus.com/maths/decimal-to-binary/
    }
    Livro: 
    Ferramenta para conferir os valores: https://www.rapidtables.com/convert/number/decimal-to-octal.html


*/
int binConverter(){
/*
    Steps:
    1- Usuario entra um número
    2- Número é dividido por dois
    3- Sobra do número (remainder) é guardado
    4- (S-2)
    5- binario é a sobra (remainder) multiplicado por 10
*/

    int num, bin=0, rem = 0, place = 1;
    printf("Enter number: ");
    scanf("%d", &num);


    while (num){
        rem = num %2;
        num = num /2;
        bin = bin + (rem * place);
        place = place * 10;  
    } 
    printf("%d\n", bin);
}

int octalConvert(){
    /*Função que converte de decimal para Octal*/
    int num, oct=0, rem = 0, place = 1;
    printf("Enter number: ");
    scanf("%d", &num);


    while (num){
        rem = num %8;
        num = num /8;
        oct = oct + (rem * place);
        place = place * 10;  
    } 
    printf("%d\n", oct);

}


int main(){
    binConverter(); //chama a função que converte de decimal pra binário
    octalConvert(); // função para converção de decimal para octal
}
