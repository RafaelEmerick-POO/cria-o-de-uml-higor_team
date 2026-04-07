#ifndef SENSOR_TEMPERATURA_HPP
#define SENSOR_TEMPERATURA_HPP

#include "equipamento.hpp"

class SensorTemperatura : public Equipamento {
private:
    double valorAtual;

public:
    SensorTemperatura(const std::string& tagSensor, const std::string& descricaoSensor, bool ativoInicial, double valorInicial);

    void atualizarLeitura(double novoValor);
    double getValorAtual() const;
    void exibirResumo() const override;
};

#endif
