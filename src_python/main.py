from equipamento import Equipamento
from sensor_temperatura import SensorTemperatura


def main():
    agitador = Equipamento("EQ-01", "Agitador principal", True)
    sensor = SensorTemperatura("TT-01", "Sensor do tanque", True, 23.5)

    agitador.exibir_resumo()
    sensor.exibir_resumo()
    sensor.atualizar_leitura(24.2)
    sensor.exibir_resumo()


if __name__ == "__main__":
    main()
