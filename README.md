[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/OXL0OhnE)
# Cenario 04 - Modelagem UML com GitHub Classroom
# Cenario 4 - UML a partir de codigo

## Objetivos de aprendizagem

- Ler um pequeno codigo em `C++` e derivar um diagrama de classes UML.
- Ler um pequeno codigo em `Python` e derivar um segundo diagrama de classes UML.
- Registrar a entrega com `issue`, `branch`, `commit` e `pull request`.

**Tempo estimado:** 2h

---

## 1. Contexto

Este repositorio contem duas implementacoes do mesmo dominio:

- uma em `C++`;
- outra em `Python`.

Sua tarefa e **modelar** o que ja existe no codigo.

Voce nao precisa implementar novas classes.
Voce nao precisa alterar os arquivos em `src_cpp/` e `src_python/`.

Configuracao de assignment, autograding e rubrica do professor ficam fora deste repositorio.

---

## 2. O que deve ser entregue

- `docs/diagrama_cpp.md` preenchido com o UML derivado do codigo em `src_cpp/`;
- `docs/diagrama_python.md` preenchido com o UML derivado do codigo em `src_python/`;
- `pull request` final com evidencias.

---

## 3. Estrutura do repositorio

- `docs/requisito_laboratorio.md`: contexto curto do dominio.
- `docs/diagrama_cpp.md`: entrega do UML derivado do codigo em `C++`.
- `docs/diagrama_python.md`: entrega do UML derivado do codigo em `Python`.
- `src_cpp/`: codigo base para leitura e modelagem.
- `src_python/`: codigo base para leitura e modelagem.

### Regra importante

Os arquivos em `src_cpp/` e `src_python/` sao base de leitura.

Nao altere esses arquivos.
O foco da atividade e transformar codigo existente em UML.

---

## 4. Cards de issue

| Card | Foco | Evidencia |
|---|---|---|
| Issue 1 - Modelar o C++ | classes, heranca e operacoes do codigo em `src_cpp/` | `docs/diagrama_cpp.md` atualizado |
| Issue 2 - Modelar o Python | classes, relacoes e operacoes do codigo em `src_python/` | `docs/diagrama_python.md` atualizado |
| Issue 3 - Validar no Mermaid Live | sintaxe e renderizacao dos dois diagramas | links ou prints |
| Issue 4 - Fechar a entrega | evidencias e justificativas no PR final | `pull request` |

---

## 5. Como trabalhar

1. Leia `docs/requisito_laboratorio.md`.
2. Execute o codigo em `src_cpp/` e observe as classes usadas.
3. Monte o UML do `C++` em `docs/diagrama_cpp.md`.
4. Execute o codigo em `src_python/` e observe as classes usadas.
5. Monte o UML do `Python` em `docs/diagrama_python.md`.
6. Valide os diagramas no Mermaid Live.
7. Abra o `pull request` final com evidencias.

---

## 6. Como executar

### Codigo C++

```bash
g++ -std=c++17 -Wall -Wextra -O2 src_cpp/main.cpp src_cpp/equipamento.cpp src_cpp/sensor_temperatura.cpp -o laboratorio
./laboratorio
```

### Codigo Python

```bash
python3 src_python/main.py
```

---

## 7. Criterios de aceite

- O UML do `C++` representa corretamente classes, operacoes e heranca do codigo fornecido.
- O UML do `Python` representa corretamente classes e relacoes do codigo fornecido.
- Os dois diagramas foram validados no Mermaid Live ou em ferramenta equivalente.
- As justificativas tecnicas estao claras no material entregue.
- O `pull request` final apresenta evidencias tecnicas.

---

## 8. Mini-caso pratico

Uma equipe recebeu dois codigos pequenos que representam um sensor de temperatura e um equipamento base, um em `C++` e outro em `Python`. Antes de alterar qualquer linha, o time precisa documentar a estrutura orientada a objetos dos dois artefatos em UML.

---

## 9. Perguntas de revisao rapida

1. O que um diagrama UML consegue mostrar sobre um codigo orientado a objetos?
2. Como identificar heranca a partir da leitura do codigo?
3. O que muda entre sintaxe da linguagem e conceito de modelagem?

---

## 10. Referencias

- https://mermaid.live/
- https://mermaid.js.org/syntax/classDiagram.html
- https://docs.github.com/en/pull-requests
- https://en.cppreference.com/w/cpp/language/classes
- https://docs.python.org/3/tutorial/classes.html
