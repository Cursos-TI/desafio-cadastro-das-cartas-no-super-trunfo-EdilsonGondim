#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    char estado;
    char cdc[10]; //cdc = código da cidade.
    char ndc[20]; // ndc = nome da cidade;  
    int populacao;
    float ak; // ak = Área em km².
    float PIB;
    int npt; //npt = número de ponto turístico.
    
    printf("=-=-=-=-=- CARTAS SUPER TRUNFO -=-=-=-=-=\n");
    printf("Digite o nome do Estado: ");
    scanf("%c", &estado);

    return 0;
}

/*
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.



O Super Trunfo é um jogo no qual os jogadores comparam as propriedades de suas cartas para determinar quem tem a mais forte. Cada carta representa um objeto com várias propriedades. Nesse desafio, o tema do jogo será Países, e as cartas serão divididas por estados, com cada estado tendo quatro cartas que representam diferentes cidades.

Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

Cada carta de cidade apresentará as seguintes informações:

População : número de habitantes da cidade.
Área : área total da cidade em quilômetros quadrados (km²).
PIB : produto interno bruto da cidade, representando a soma de todos os bens e serviços produzidos no município.
Número de pontos turísticos : quantidade de pontos turísticos famosos na cidade.
Funcionalidades do sistema
O sistema permitirá ao usuário cadastrar cartas de cidades, fornecendo informações detalhadas como estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos. As entradas serão feitas via terminal de comando. Após o cadastro, o sistema exibirá os dados de forma clara e organizada.

Cadastro das cartas
O sistema permitirá ao usuário cadastrar as cartas do jogo, fornecendo informações detalhadas sobre cada cidade representada, de acordo com as seguintes orientações:

Cada carta será identificada pela letra do estado seguida de um número de 01 a 04 (por exemplo, A01, A02, B01, B02).
Para cada carta, o usuário deverá inserir:
Estado (char)
Código da carta (char[])
Nome da cidade (char[])
População (int)
Área em km² (float)
PIB (float)
Número de pontos turísticos (int)
Entrada e saída de dados
Os requisitos para a entrada de dados são:

O sistema será operado inteiramente via terminal ou prompt de comando.
O usuário será solicitado a inserir os dados de cada carta de forma interativa.
Cada entrada será solicitada de maneira clara, indicando o dado específico que está sendo solicitado (por exemplo, "Digite o estado:", "Digite o código da carta:", "Digite o nome da cidade:", "Digite a população:").
Os requisitos para a saída de dados são:

Após o cadastro de cada cidade, o sistema exibirá os dados cadastrados de forma clara e organizada.
Cada propriedade da cidade será apresentada em uma linha separada com a descrição correspondente, por exemplo:
Yaml
content_copy

Requisitos funcionais e não funcionais
Os requisitos funcionais são:

O sistema será operado inteiramente via terminal ou prompt de comando.
O sistema permitirá ao usuário cadastrar as cartas de cidades.
Cada carta será identificada por um código único composto pela letra do estado seguida por um número de 01 a 04.
O usuário será solicitado a inserir os dados de cada carta de forma interativa.
O sistema deve exibir uma confirmação após cada carta ser cadastrada com sucesso.
Cada propriedade da cidade será apresentada em uma linha separada, com a descrição correspondente.
Os requisitos não funcionais são:

Usabilidade : a interface do usuário CLI deve ser simples e fácil de usar, mesmo para pessoas que não têm familiaridade com linhas de comando.
Performance : o sistema deve executar as operações de entrada, cálculo e saída sem atrasos perceptíveis.
Documentação : o código deve ser bem documentado, incluindo comentários sobre a função de cada parte do código e instruções de uso do sistema.
Manutenabilidade : o código deve ser escrito de forma clara, empregando nomes de variáveis que permitam o fácil entendimento por um novo desenvolvedor.
*/