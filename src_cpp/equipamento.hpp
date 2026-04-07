#ifndef EQUIPAMENTO_HPP
#define EQUIPAMENTO_HPP

#include <string>

class Equipamento {
private:
    std::string tag;
    std::string descricao;
    bool ativo;

public:
    Equipamento(const std::string& tagEquipamento, const std::string& descricaoEquipamento, bool ativoInicial);

    void ligar();
    void desligar();
    std::string getTag() const;
    bool estaAtivo() const;
    virtual void exibirResumo() const;
    virtual ~Equipamento() = default;
};

#endif
