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
    printf("\n\nCADASTRE A CARTA 1: \n");

    printf("ESTADO:(uma letra de 'A' a 'H'): ");
    scanf("%c", &estado);
    
    printf("CÓDIGO DA CARTA:(A letra do estado seguida de um numero de 01 a 04): ");
    scanf("%s", &codigo_da_carta);

    printf("NOME DA CIDADE: ");
    scanf("%s", &nome_da_cidade);

    printf("POPULACÃO: ");
    scanf("%d", &populacao);  

    printf("ÁREA EM KM²: ");
    scanf("%f", &area_em_km);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &numero_ponto_turistico);
    
    printf("\n======CARTA 1 CADASTRADA COM SUCESSO======\n");

    printf("ESTADO: %c\nCÓDIGO DA CARTA: %s\nNOME DA CIDADE: %s\nPOPULAÇÃO: %d\nÁREA EM KM²: %.2f KM²\nPIB: %.2f Bilhões de reais\nNÚMERO DE PONTOS TURISTICOS: %d\n\n", estado, codigo_da_carta, nome_da_cidade, populacao, area_em_km, pib, numero_ponto_turistico);

    return 0; 
}
