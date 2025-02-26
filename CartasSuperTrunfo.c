#include <stdio.h>

int main() {

    //Iniciando o código.
    char estado;
    char codigo_da_carta[20]; 
    char nome_da_cidade[20];  
    int populacao;
    float area_em_km, pib, densidade_populacional, pib_per_capita;
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
    
    densidade_populacional = populacao / area_em_km;

    pib_per_capita = pib / populacao;

    printf("\n\n======CARTA 1 CADASTRADA COM SUCESSO======\n");

    printf("ESTADO: %c\nCÓDIGO DA CARTA: %s\nNOME DA CIDADE: %s\nPOPULAÇÃO: %d\nÁREA EM KM²: %.2f KM²\nPIB: %.2f Bilhões de reais\nNÚMERO DE PONTOS TURISTICOS: %d\nDENSIDADE POPULACIONAL %.2f hab/km²\nPIB PER CAPITA %.2f reais", estado, codigo_da_carta, nome_da_cidade, populacao, area_em_km, pib, numero_ponto_turistico, densidade_populacional, pib_per_capita);

    return 0; 
}
/*fortaleza
pib: 12.874.175.00
população: 2.574.412
km²: 312.353 km²
nº pontos turisticos: 150
*/
