#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[100];
    int estado;
    int codigo;
    unsigned long int populacao;
    unsigned long int area;
    unsigned long int pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

void calcularDensidade(Carta* carta) {
    carta->densidadePopulacional = (float)carta->populacao / carta->area;
}

void calcularPibPerCapita(Carta* carta) {
    carta->pibPerCapita = (float)carta->pib / carta->populacao;
}

void calcularSuperPoder(Carta* carta) {
    carta->superPoder = (float)(carta->populacao + carta->area + carta->pib + carta->pontosTuristicos + 
                               (1.0 / carta->densidadePopulacional));
}

int compararAtributos(int atributo1, int atributo2) {
    return (atributo1 > atributo2) ? 1 : 0;
}

int compararDensidade(float densidade1, float densidade2) {
    return (densidade1 < densidade2) ? 1 : 0;  // Menor densidade vence
}

int compararSuperPoder(float superPoder1, float superPoder2) {
    return (superPoder1 > superPoder2) ? 1 : 0;
}

void compararCartas(Carta carta1, Carta carta2) {
    printf("Comparacao de Cartas:\n");

    printf("Populacao: %s venceu (%d)\n", compararAtributos(carta1.populacao, carta2.populacao) ? carta1.nome : carta2.nome, 
           compararAtributos(carta1.populacao, carta2.populacao));
    printf("Area: %s venceu (%d)\n", compararAtributos(carta1.area, carta2.area) ? carta1.nome : carta2.nome, 
           compararAtributos(carta1.area, carta2.area));
    printf("PIB: %s venceu (%d)\n", compararAtributos(carta1.pib, carta2.pib) ? carta1.nome : carta2.nome, 
           compararAtributos(carta1.pib, carta2.pib));
    printf("Pontos Turisticos: %s venceu (%d)\n", compararAtributos(carta1.pontosTuristicos, carta2.pontosTuristicos) ? carta1.nome : carta2.nome, 
           compararAtributos(carta1.pontosTuristicos, carta2.pontosTuristicos));
    printf("Densidade Populacional: %s venceu (%d)\n", compararDensidade(carta1.densidadePopulacional, carta2.densidadePopulacional) ? carta1.nome : carta2.nome, 
           compararDensidade(carta1.densidadePopulacional, carta2.densidadePopulacional));
    printf("PIB per Capita: %s venceu (%d)\n", compararAtributos(carta1.pibPerCapita, carta2.pibPerCapita) ? carta1.nome : carta2.nome, 
           compararAtributos(carta1.pibPerCapita, carta2.pibPerCapita));
    printf("Super Poder: %s venceu (%d)\n", compararSuperPoder(carta1.superPoder, carta2.superPoder) ? carta1.nome : carta2.nome, 
           compararSuperPoder(carta1.superPoder, carta2.superPoder));
}

int main() {
    Carta carta1, carta2;

    // Leitura dos dados para a Carta 1
    printf("Digite os dados para a Carta 1:\n");
    printf("Nome: ");
    fgets(carta1.nome, sizeof(carta1.nome), stdin);
    carta1.nome[strcspn(carta1.nome, "\n")] = 0;  // Remover o '\n' do nome
    printf("Estado (0 ou 1): ");
    scanf("%d", &carta1.estado);
    printf("Codigo: ");
    scanf("%d", &carta1.codigo);
    printf("Populacao: ");
    scanf("%lu", &carta1.populacao);
    printf("Area: ");
    scanf("%lu", &carta1.area);
    printf("PIB: ");
    scanf("%lu", &carta1.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Limpar o buffer após scanf
    getchar();

    // Leitura dos dados para a Carta 2
    printf("Digite os dados para a Carta 2:\n");
    printf("Nome: ");
    fgets(carta2.nome, sizeof(carta2.nome), stdin);
    carta2.nome[strcspn(carta2.nome, "\n")] = 0;  // Remover o '\n' do nome
    printf("Estado (0 ou 1): ");
    scanf("%d", &carta2.estado);
    printf("Codigo: ");
    scanf("%d", &carta2.codigo);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area: ");
    scanf("%lu", &carta2.area);
    printf("PIB: ");
    scanf("%lu", &carta2.pib);
    printf("Pontos Turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Limpar o buffer após scanf
    getchar();

    // Calculos
    calcularDensidade(&carta1);
    calcularDensidade(&carta2);
    calcularPibPerCapita(&carta1);
    calcularPibPerCapita(&carta2);
    calcularSuperPoder(&carta1);
    calcularSuperPoder(&carta2);

    // Comparacao das Cartas
    compararCartas(carta1, carta2);

    // Manter o console aberto
    printf("\nPressione Enter para finalizar...");
    getchar();

    return 0;
}
