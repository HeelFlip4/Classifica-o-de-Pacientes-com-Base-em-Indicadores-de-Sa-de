# Escopo do Trabalho - Classificação de Pacientes com Base em Indicadores de Saúde

## 1. Introdução
Este projeto tem como objetivo desenvolver um sistema em C++ para classificar pacientes entre saudáveis e doentes, utilizando a distância euclidiana entre indicadores clínicos. O sistema será implementado de forma modular, sem uso de containers da STL, garantindo uma abordagem eficiente e estruturada.

## 2. Requisitos
### 2.1 Requisitos Gerais
- Implementação em C++ puro, sem o uso de containers como `vector`, `queue`, `list`, etc.
- Uso apenas da biblioteca padrão do C++.
- Código modularizado, utilizando funções para organização do código.
- Entrada de dados validada conforme especificação do problema.
- Exibição da matriz formatada no console.

### 2.2 Requisitos da Matriz de Pacientes
- A matriz será alocada estaticamente.
- Dimensões da matriz:
  - 11 linhas (10 pacientes históricos + 1 novo paciente)
  - Entre 3 e 7 colunas de indicadores clínicos (definido pelo usuário no início da execução).
- A última coluna representa a classificação:
  - `1.0` para pacientes saudáveis.
  - `-1.0` para pacientes doentes.
  - O novo paciente (linha 11) não possui classificação definida a princípio.

## 3. Estrutura do Programa
### 3.1 Declaração de Variáveis
- Uma matriz `pacientes[11][N]` (com `N` entre 3 e 7) para armazenar os dados dos pacientes.
- Uma variável `N` para armazenar o número de colunas.
- Um vetor auxiliar para armazenar as distâncias calculadas.

### 3.2 Funções Principais
1. **`void solicitarDimensao(int &N);`**
   - Solicita ao usuário o número de indicadores clínicos.
   - Valida se `N` está no intervalo permitido (3 a 7).

2. **`void preencherMatriz(float matriz[11][7], int N);`**
   - Preenche a matriz com dados de entrada.
   - Garante que a última coluna contenha apenas `1.0` ou `-1.0` para as 10 primeiras linhas.
   - Permite entrada manual dos dados ou leitura de um arquivo de entrada.

3. **`void exibirMatriz(float matriz[11][7], int N);`**
   - Exibe a matriz formatada na tela.

4. **`float calcularDistancia(float paciente1[], float paciente2[], int N);`**
   - Calcula a distância euclidiana entre dois pacientes, considerando apenas as colunas de indicadores.

5. **`void classificarPaciente(float matriz[11][7], int N);`**
   - Calcula a distância do novo paciente (linha 11) para cada paciente histórico.
   - Identifica o paciente histórico mais próximo.
   - Define a classificação do novo paciente baseada na classificação do vizinho mais próximo.
   - Exibe o resultado no console.

## 4. Fluxo de Execução
1. O programa solicita o número de indicadores clínicos (entre 3 e 7).
2. A matriz é preenchida com os dados de 10 pacientes e do novo paciente.
3. A matriz é exibida no console.
4. A distância do novo paciente para os demais é calculada.
5. O paciente histórico mais próximo é identificado.
6. O novo paciente é classificado como saudável ou doente.
7. A matriz é novamente exibida, agora com a classificação do novo paciente.

## 5. Saída Esperada
O programa exibirá no console a matriz de pacientes antes e depois da classificação do novo paciente. Exemplo:

```
Tabela de Pacientes (antes da classificação):
0.5  0.3  0.2  0.5  1.0
2.0  0.8  3.0  5.2  -1.0
1.8  2.1  0.7  0.9  1.0
...
2.1  0.7  3.1  5.1  ???

O novo paciente foi classificado como: DOENTE

Tabela de Pacientes (após a classificação):
0.5  0.3  0.2  0.5  1.0
2.0  0.8  3.0  5.2  -1.0
1.8  2.1  0.7  0.9  1.0
...
2.1  0.7  3.1  5.1  -1.0
```

## 6. Conclusão
Este escopo detalha a implementação de um classificador de pacientes usando distância euclidiana em C++, atendendo rigorosamente aos requisitos do trabalho. A modularização facilita a manutenção e compreensão do código, garantindo clareza e eficiência no processamento dos dados clínicos.

