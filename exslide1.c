#include <stdio.h>;
int main(){
    int idade;
    printf("digite sua idade");
    scanf("%d", &idade);
    if(idade<=12)
        printf("crianca");
    else if(idade>=13 && idade<=17)
        printf("adolescente");
    else if(idade>=18 && idade<=59)
        printf("adolescente");
    else
    printf("idoso");
    return 0;
}