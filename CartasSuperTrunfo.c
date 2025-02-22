#include <stdio.h>

int main() {

    //Iniciando o código.
    char estado;
    char codigo_da_carta[20]; //cdc = código da cidade.
    char nome_da_cidade[20]; // ndc = nome da cidade;  
    int populacao;
    int area_em_km; // ak = Área em km².
    int pib;
    int numero_ponto_turistico; //npt = número de ponto turístico.
    
    //printf("=-=-=-=-=- CARTAS SUPER TRUNFO -=-=-=-=-=\n");
    printf("CADASTRE A CARTA 1: \n");

    printf("ESTADO:(uma letra de 'A' a 'H'): \n");
    scanf("%c", &estado);
    
    printf("CODIGO DA CARTA:(A letra do estado seguida de um numero de 01 a 04): \n");
    scanf("%s", &codigo_da_carta);

    printf("NOME DA CIDADE: \n");
    scanf("%s", &nome_da_cidade);

    printf("POPULACAO: \n");
    scanf("%d", &populacao);  

    printf("AREA EM KM2: \n");
    scanf("%d", &area_em_km);

    printf("PIB: \n");
    scanf("%d", &pib);

    printf("NUMERO DE PONTOS TURISTICOS: \n");
    scanf("%d", &numero_ponto_turistico);
    
    printf("=-=-=-= CARTA 1 CADASTRADA COM SUCESSO =-=-=-=\n");

    printf("ESTADO: %c\nCODIGO DA CARTA: %s\nNOME DA CIDADE: %s\nPOPULACAO: %d\nAREA EM KM2: %d\nPIB: %d\nNUMERO DE PONTOS TURISTICOS: %d\n\n", estado, codigo_da_carta, nome_da_cidade, populacao, area_em_km, pib, numero_ponto_turistico);


    return 0;
}
