#include <stdio.h>

int main() {

    //Iniciando o código, VARIÁVEIS.
    char estado, estado2;
    char codigo_da_carta[20], codigo_da_carta2[20],  nome_da_cidade[20],  nome_da_cidade2[20]; 
    int populacao, populacao2, numero_ponto_turistico, numero_ponto_turistico2;
    float area_em_km, pib, densidade_populacional, pib_per_capita, area_em_km2, pib2, densidade_populacional2, pib_per_capita2;

   
    printf("\n\n     -CARTA 1- (Cadastramento).\n");

    printf("ESTADO:(uma letra de 'A' à 'H'): ");
    scanf("%c", &estado);
    
    printf("CÓDIGO DA CARTA:(A letra do estado seguida de um número de 01 à 04): ");
    scanf("%s", codigo_da_carta);
    
    printf("NOME DA CIDADE: ");
    scanf(" %20[^\n]", nome_da_cidade); //Fórmula para digitar uma string com espaço sem erro.

    printf("POPULACÃO: ");
    scanf("%d", &populacao);  

    printf("ÁREA EM KM²: ");
    scanf("%f", &area_em_km);

    printf("PIB(em bilhões): ");
    scanf("%f", &pib);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &numero_ponto_turistico);
    
    //Cálculos DENSIDADE POPULACIONAL e PIB PER CAPITA da -CARTA 1-.
    densidade_populacional = (float) populacao / area_em_km;

    pib_per_capita = (float) (pib * 1000000000) / populacao; //convertendo PIB resumido por PIB com números exato.

    //Armazenamento de dados da -CARTA 1-
    printf("\n\n     -CARTA 1- Cadastrada com sucesso!\n");

    printf("ESTADO: %c\nCÓDIGO DA CARTA: %s\nNOME DA CIDADE: %s\nPOPULAÇÃO: %d\nÁREA EM KM²: %.2f KM²\nPIB: %.2f Bilhões de reais\nNÚMERO DE PONTOS TURISTICOS: %d\nDENSIDADE POPULACIONAL %.2f hab/km²\nPIB PER CAPITA %.2f reais", estado, codigo_da_carta, nome_da_cidade, populacao, area_em_km, pib, numero_ponto_turistico, densidade_populacional, pib_per_capita);
    printf("\n________________________________________________________");

    
    printf("\n\n     -CARTA 2- (Cadastramento).\n");

    printf("ESTADO:(uma letra de 'A' à 'H'): ");
    scanf(" %c", &estado2);
    
    printf("CÓDIGO DA CARTA:(A letra do estado seguida de um número de 01 a 04): ");
    scanf("%s", codigo_da_carta2);
    
    printf("NOME DA CIDADE: ");
    scanf(" %20[^\n]", nome_da_cidade2); //Fórmula para digitar uma string com espaço sem erro.

    printf("POPULACÃO: ");
    scanf("%d", &populacao2);  

    printf("ÁREA EM KM²: ");
    scanf("%f", &area_em_km2);

    printf("PIB(em bilhões): ");
    scanf("%f", &pib2);

    printf("NÚMERO DE PONTOS TURÍSTICOS: ");
    scanf("%d", &numero_ponto_turistico2);
                   
    //Cálculos DENSIDADE POPULACIONAL e PIB PER CAPITA da -CARTA 2-.
    densidade_populacional2 = (float) populacao2 / area_em_km2;

    pib_per_capita2 = (float) (pib2 * 1000000000) / populacao2; //convertendo PIB resumido por PIB com números exato.

    //Armazenamento de dados da -CARTA 2-
    printf("\n\n     -CARTA 2- Cadastrada com sucesso!\n");

    printf("ESTADO: %c\nCÓDIGO DA CARTA: %s\nNOME DA CIDADE: %s\nPOPULAÇÃO: %d\nÁREA EM KM²: %.2f KM²\nPIB: %.2f Bilhões de reais\nNÚMERO DE PONTOS TURISTICOS: %d\nDENSIDADE POPULACIONAL %.2f hab/km²\nPIB PER CAPITA %.2f reais", estado2, codigo_da_carta2, nome_da_cidade2, populacao2, area_em_km2, pib2, numero_ponto_turistico2, densidade_populacional2, pib_per_capita2);
    printf("\n________________________________________________________");

    return 0; 
}

/*
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais
*/