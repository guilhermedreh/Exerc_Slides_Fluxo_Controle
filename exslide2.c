#include <stdio.h>
int main(){
    int n1, n2, resultado;
    char operador;
    printf("digite dois numeros e um operador(+, -, *, /)");
    scanf("%d %d %c", &n1, &n2, &operador);

    switch (operador){
    case '+':
        resultado = n1+n2;
        printf("resultado: %d\n", resultado);
        break;
    case '-':
        resultado = n1-n2;
        printf("resultado: %d\n", resultado);
        break;
    case '/':
        resultado = n1/n2;
        printf("resultado: %d\n", resultado);
        break;
    case '*':
        resultado = n1*n2;
        printf("resultado: %d\n", resultado);
        break;
    default:
        printf("operador nao valido");
    }
    return 0;
}