#include <stdio.h> // Biblioteca para entrada e saída de dados
#include <string.h> // Biblioteca para manipulação de strings



// --- Função para limpar o buffer de entrada ---
    void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    }

    int main () {
   
    int Carta;
    char Estado1 [20], Estado2 [20]; // Optei por utilizar string em Estado, pois o especificador de formato %c imprime apenas um caractere, enquanto o %s é utilizado para imprimir uma string (sequência de caracteres).
    char Código1 [20], Código2 [20]; 
    char Cidade1 [20], Cidade2 [20];
    int População_Carta1, População_Carta2; // (em milhões de habitantes);
    float Área_Carta1, Área_Carta2; // (em km²);
    double PIB_Carta1, PIB_Carta2; //(em bilhões de reais);
    int Pontos_Turísticos_Carta1, Pontos_Turísticos_Carta2;
    float Densidade_Populacional_Carta1, Densidade_Populacional_Carta2; // (em habitantes por km²);
    float PIB_per_capita_Carta1, PIB_per_capita_Carta2; // (em reais);
    float Inverso_Densidade_Populacional_Carta1, Inverso_Densidade_Populacional_Carta2; // Variáveis para armazenar o valor do inverso da densidade populacional, que é um dos atributos para calcular o Super Poder.
    double Super_Poder_Carta1, Super_Poder_Carta2; // Variáveis para armazenar o valor do Super Poder, que é a soma de todos os atributos.
   
    printf("============================================\n");
    printf("Bem-vindo ao jogo de cartas Super Trunfo!\n");
    printf("============================================\n");

    //Carta 1
    printf("===============\n");
    printf("Carta 1: \n"); 
    printf("===============\n");
        
    printf("Digite o estado (sem acento): \n"); // A Biblioteca não lê acentos, por isso a instrução para digitar sem acentos!
    fgets(Estado1, sizeof(Estado1), stdin);
    Estado1[strcspn(Estado1, "\n")] = '\0'; // Remover o caractere de nova linha lido pelo fgets
     
    printf("Digite a cidade: \n");
    fgets(Cidade1, sizeof(Cidade1), stdin);
    Cidade1[strcspn(Cidade1, "\n")] = '\0'; // Remover o caractere de nova linha lido pelo fgets

    printf("Digite o código da carta: \n");
    scanf(" %s", Código1);

    printf("Digite a população (sem os pontos): \n"); // A Variável é do tipo inteiro, por isso a instrução para digitar sem os pontos!
    scanf(" %d", &População_Carta1);
   
    printf("Digite a área: \n");
    scanf(" %f", &Área_Carta1);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets
   
    printf("Digite o PIB: \n");
    scanf(" %lf", &PIB_Carta1);
    
    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos_Carta1);
    limparBufferEntrada();

    Densidade_Populacional_Carta1 = População_Carta1 / Área_Carta1;
    PIB_per_capita_Carta1 = PIB_Carta1 / População_Carta1;
    Inverso_Densidade_Populacional_Carta1 = 1 / Densidade_Populacional_Carta1; // Cálculo do inverso da densidade populacional, que é um dos atributos para calcular o Super Poder.
    Super_Poder_Carta1 = (float)Inverso_Densidade_Populacional_Carta1 + (float)População_Carta1 + Área_Carta1 + PIB_Carta1 + (float)Pontos_Turísticos_Carta1 + PIB_per_capita_Carta1; // Cálculo do Super Poder como a soma de todos os atributos.
      
    //Carta 2
    printf("===============\n");
    printf("Carta 2: \n");
    printf("===============\n");
    
    printf("Digite o estado (sem acento): \n"); // A Biblioteca não lê acentos, por isso a instrução para digitar sem acentos!
    fgets(Estado2, sizeof(Estado2), stdin);
    Estado2[strcspn(Estado2, "\n")] = '\0'; // Remover o caractere de nova linha lido pelo fgets
       
    printf("Digite a cidade: \n");
    fgets(Cidade2, sizeof(Cidade2), stdin);
    Cidade2[strcspn(Cidade2, "\n")] = '\0'; // Remover o caractere de nova linha lido pelo fgets

    printf("Digite o código da carta: \n");
    scanf(" %s", Código2);

    printf("Digite a população (sem os pontos): \n"); // A Variável é do tipo inteiro, por isso a instrução para digitar sem os pontos!
    scanf(" %d", &População_Carta2);

    printf("Digite a área: \n");
    scanf(" %f", &Área_Carta2);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets
   
    printf("Digite o PIB: \n");
    scanf(" %lf", &PIB_Carta2);

    printf("Digite os Pontos Turísticos: \n");
    scanf(" %d", &Pontos_Turísticos_Carta2);

    Densidade_Populacional_Carta2 = População_Carta2 / Área_Carta2;
    PIB_per_capita_Carta2 = PIB_Carta2 / População_Carta2;
    Inverso_Densidade_Populacional_Carta2 = 1 / Densidade_Populacional_Carta2; // Cálculo do inverso da densidade populacional, que é um dos atributos para calcular o Super Poder.
    Super_Poder_Carta2 = (float)Inverso_Densidade_Populacional_Carta2 + (float)População_Carta2 + Área_Carta2 + PIB_Carta2 + (float)Pontos_Turísticos_Carta2 + PIB_per_capita_Carta2; // Cálculo do Super Poder como a soma de todos os atributos.
       
    printf("===============\n");
    printf("Carta 1: \n");
    printf("===============\n");
    printf("Estado: %s \n", Estado1);
    printf("Cidade: %s \n", Cidade1);
    printf("Código da carta: %s \n", Código1);
    printf("População: %d \n", População_Carta1);
    printf("Área: %.2f km² \n", Área_Carta1);
    printf("PIB: %.2lf bilhões de reais \n", PIB_Carta1); // Será exibido o valor por completo, para calcular de forma exata o PIB per capita.
    printf("Pontos Turísticos: %d \n", Pontos_Turísticos_Carta1);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional_Carta1);
    printf("PIB per capita: %.2f reais \n", PIB_per_capita_Carta1);
    printf("Inverso da Densidade Populacional: %.6f \n", Inverso_Densidade_Populacional_Carta1); // Exibir o valor do inverso da densidade populacional com mais casas decimais para melhor visualização.
    printf("Super Poder Carta 1: %.2f \n", Super_Poder_Carta1);
    limparBufferEntrada(); // Limpar o buffer de entrada para evitar problemas com fgets

    printf("===============\n");
    printf("Carta 2: \n");
    printf("===============\n");
    printf("Estado: %s \n", Estado2);
    printf("Cidade: %s \n", Cidade2);
    printf("Código da carta: %s \n", Código2);
    printf("População: %d \n", População_Carta2);
    printf("Área: %.2f km² \n", Área_Carta2);
    printf("PIB: %.2lf bilhões de reais \n", PIB_Carta2); // Será exibido o valor por completo, para calcular de forma exata o PIB per capita.
    printf("Pontos Turísticos: %d \n", Pontos_Turísticos_Carta2);
    printf("Densidade Populacional: %.2f hab/km² \n", Densidade_Populacional_Carta2);
    printf("PIB per capita: %.2f reais \n", PIB_per_capita_Carta2);
    printf("Inverso da Densidade Populacional: %.6f \n", Inverso_Densidade_Populacional_Carta2); // Exibir o valor do inverso da densidade populacional com mais casas decimais para melhor visualização.
    printf("Super Poder Carta 2: %.2f \n", Super_Poder_Carta2);
    
    printf("===================================\n");
    printf("Comparação de cartas (Atributo: População):\n");
    printf("===================================\n");
    printf("Carta 1 - %s: %d\n", Estado1, População_Carta1);
    printf("Carta 2 - %s: %d\n", Estado2, População_Carta2);

    if(População_Carta1 > População_Carta2){
        printf("Resultado: Carta 1 (%s) Venceu!\n", Estado1);
    } else {
        printf("Resultado: Carta 2 (%s) Venceu!\n", Estado2);
    }

    return 0;
}

