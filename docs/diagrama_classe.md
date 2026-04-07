# Diagrama de Classe - Entrega do Aluno

## 1. Requisito resumido

Escreva aqui um resumo curto do problema em `5` a `8` linhas.

## 2. Link do Mermaid Live

Cole aqui o link do diagrama validado no editor online.

## 3. Diagrama final em Mermaid

```mermaid
classDiagram
    class Equipamento {
        -tag: string
        -descricao: string
        -ativo: bool
        +ligar() void
        +desligar() void
        +exibirResumo() void
    }

    class SensorTemperatura {
        -valorAtual: double
        +atualizarLeitura(valor: double) void
    }

    class OrdemCalibracao {
        -codigo: string
        -status: string
        +abrir() void
        +fechar() void
    }

    class Tecnico {
        -nome: string
        -matricula: string
        +assinarOrdem() void
    }

    Equipamento <|-- SensorTemperatura
    Equipamento "1" o-- "0..*" OrdemCalibracao : possui
    OrdemCalibracao --> "1" Tecnico : atribuida
```

## 4. Justificativa das relacoes

Explique, em frases curtas:

- por que houve generalizacao ou realizacao;
- por que houve agregacao ou composicao;
- por que a cardinalidade foi escolhida;
- por que as classes fazem sentido no dominio.

## 5. Linguagem escolhida

Marque a trilha usada:

- [ ] C++
- [ ] Python

## 6. Evidencias de execucao

Cole aqui a saida do terminal, prints ou observacoes da execucao.
