#include "equipamento.hpp"

#include <iostream>

Equipamento::Equipamento(const std::string& tagEquipamento, const std::string& descricaoEquipamento, bool ativoInicial)
    : tag(tagEquipamento), descricao(descricaoEquipamento), ativo(ativoInicial) {}

void Equipamento::ligar() {
    ativo = true;
}

void Equipamento::desligar() {
    ativo = false;
}

std::string Equipamento::getTag() const {
    return tag;
}

bool Equipamento::estaAtivo() const {
    return ativo;
}

void Equipamento::exibirResumo() const {
    std::cout << "[Equipamento] " << tag << " - " << descricao
              << " - ativo=" << (ativo ? "sim" : "nao") << "\n";
}
