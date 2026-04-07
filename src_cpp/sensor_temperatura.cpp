#include "sensor_temperatura.hpp"

#include <iostream>

SensorTemperatura::SensorTemperatura(
    const std::string& tagSensor,
    const std::string& descricaoSensor,
    bool ativoInicial,
    double valorInicial)
    : Equipamento(tagSensor, descricaoSensor, ativoInicial), valorAtual(valorInicial) {}

void SensorTemperatura::atualizarLeitura(double novoValor) {
    valorAtual = novoValor;
}

double SensorTemperatura::getValorAtual() const {
    return valorAtual;
}

void SensorTemperatura::exibirResumo() const {
    std::cout << "[SensorTemperatura] " << getTag()
              << " - valorAtual=" << valorAtual << "\n";
}
