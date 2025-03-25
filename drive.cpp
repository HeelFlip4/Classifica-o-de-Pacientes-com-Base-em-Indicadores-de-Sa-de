#include <iostream>
#include <cmath>

using namespace std;

const int MAX_PACIENTES = 11;
const int MIN_INDICADORES = 3;
const int MAX_INDICADORES = 7;

void preencherMatriz(float matriz[MAX_PACIENTES][MAX_INDICADORES + 1], int indicadores) {
    cout << "Digite os dados dos 10 pacientes anteriores:" << endl;
    for (int i = 0; i < MAX_PACIENTES - 1; i++) {
        cout << "Paciente " << i + 1 << ":" << endl;
        for (int j = 0; j < indicadores; j++) {
            cout << "Indicador " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
        cout << "Classificacao (1.0 para saudavel, -1.0 para doente): ";
        cin >> matriz[i][indicadores];
    }
    
    cout << "\nDigite os indicadores do novo paciente:" << endl;
    for (int j = 0; j < indicadores; j++) {
        cout << "Indicador " << j + 1 << ": ";
        cin >> matriz[MAX_PACIENTES - 1][j];
    }
}

float calcularDistancia(float p1[], float p2[], int indicadores) {
    float soma = 0;
    for (int i = 0; i < indicadores; i++) {
        soma += pow(p1[i] - p2[i], 2);
    }
    return sqrt(soma);
}

void classificarPaciente(float matriz[MAX_PACIENTES][MAX_INDICADORES + 1], int indicadores) {
    int indiceMenor = 0;
    float menorDistancia = calcularDistancia(matriz[MAX_PACIENTES - 1], matriz[0], indicadores);
    
    for (int i = 1; i < MAX_PACIENTES - 1; i++) {
        float distancia = calcularDistancia(matriz[MAX_PACIENTES - 1], matriz[i], indicadores);
        if (distancia < menorDistancia) {
            menorDistancia = distancia;
            indiceMenor = i;
        }
    }
    
    matriz[MAX_PACIENTES - 1][indicadores] = matriz[indiceMenor][indicadores];
}

void imprimirMatriz(float matriz[MAX_PACIENTES][MAX_INDICADORES + 1], int indicadores) {
    cout << "\nTabela de Pacientes:\n";
    for (int i = 0; i < MAX_PACIENTES; i++) {
        for (int j = 0; j <= indicadores; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int indicadores;
    
    do {
        cout << "Digite o numero de indicadores clinicos (entre " << MIN_INDICADORES << " e " << MAX_INDICADORES << "): ";
        cin >> indicadores;
    } while (indicadores < MIN_INDICADORES || indicadores > MAX_INDICADORES);
    
    float matriz[MAX_PACIENTES][MAX_INDICADORES + 1];
    
    preencherMatriz(matriz, indicadores);
    
    classificarPaciente(matriz, indicadores);
    
    imprimirMatriz(matriz, indicadores);
    
    return 0;
}
