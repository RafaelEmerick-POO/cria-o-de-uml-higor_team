class Equipamento:
    def __init__(self, tag, descricao, ativo):
        self._tag = tag
        self._descricao = descricao
        self._ativo = ativo

    def ligar(self):
        self._ativo = True

    def desligar(self):
        self._ativo = False

    @property
    def tag(self):
        return self._tag

    def exibir_resumo(self):
        print(f"[Equipamento] {self._tag} - {self._descricao} - ativo={self._ativo}")
