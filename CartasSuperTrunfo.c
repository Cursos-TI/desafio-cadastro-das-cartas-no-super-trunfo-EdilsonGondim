#include <stdio.h>

int main() {

    //Iniciando o código.
    char estado;
    char codigo_da_carta[20]; 
    char nome_da_cidade[20];  
    int populacao;
    float area_em_km;
    float pib;
    int numero_ponto_turistico;
    
    //printf("=-=-=-=-=- CARTAS SUPER TRUNFO -=-=-=-=-=\n");
    printf("CADASTRE A CARTA 1: \n");

    printf("ESTADO:(uma letra de 'A' a 'H'): \n");
    scanf("%c", &estado);
    
    printf("CÓDIGO DA CARTA:(A letra do estado seguida de um numero de 01 a 04): \n");
    scanf("%s", &codigo_da_carta);

    printf("NOME DA CIDADE:(sem espaco e sem caracteres especiais)  \n"); // Com espaco da erro no programa
    scanf("%s", &nome_da_cidade);

    printf("POPULACÃO: \n");
    scanf("%d", &populacao);  

    printf("AREA EM KM²: ");
    scanf("%f km²", &area_em_km);

    printf("PIB: ");
    scanf("%f bilhões de pessoas", &pib);

    printf("\nNUMERO DE PONTOS TURÍSTICOS: \n");
    scanf("%d", &numero_ponto_turistico);
    
    printf("\n======CARTA 1 CADASTRADA COM SUCESSO======\n");

    printf("ESTADO: %c\nCODIGO DA CARTA: %s\nNOME DA CIDADE: %s\nPOPULACAO: %d\nAREA EM KM²: %f\nPIB: %f\nNUMERO DE PONTOS TURISTICOS: %d\n\n", estado, codigo_da_carta, nome_da_cidade, populacao, area_em_km, pib, numero_ponto_turistico);


    return 0;
}
