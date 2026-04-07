#include "equipamento.hpp"
#include "sensor_temperatura.hpp"

int main() {
    Equipamento agitador("EQ-01", "Agitador principal", true);
    SensorTemperatura sensor("TT-01", "Sensor do tanque", true, 23.5);

    agitador.exibirResumo();
    sensor.exibirResumo();
    sensor.atualizarLeitura(24.2);
    sensor.exibirResumo();

    return 0;
}
