**Lista de Revisão POO**

**Questão 1. Classe, objeto, estado e comportamento**

1. Classe é uma forma abstrata de reunir características e funcionalidades que descrevem objetos. Através da classe podemos criar objetos que representam instâncias desse modelo. Além disso, as classes permitem aplicar os conceitos como herança, encapsulamento e polimorfismo.

2. Objeto é uma instância de uma classe, criado a partir dela para representar uma entidade. Possui características e comportamentos definidos pela classe, e pode ser inicializado através de construtores para assumir valores específicos.

3. Estado é o conjuntos de atributos de um objeto, representando os valores que ele possui em um determinado momento.

4. Comportamento são as ações definidas em uma classe que podem ser executadas pelos objetos ao longo do funcionamento do programa.

5. Porque dizer isso é algo vago e não define seu propósito. Ao afirmar que ela concentra responsabilidade, deixamos evidente que cada classe tem uma função específica dentro do sistema, tornando o código mais organizado, coerente e fácil de manter.

**Questão 2. Construtor e coerência do objeto**

1. Criar objetos vazios pode gerar problemas, pois eles podem ser utilizados antes de estarem completamente definidos, ficando em estado inválido. Aumentando a chance de gerar erros e bugs no programa, sendo necessário lembrar de configurar todos os atributos depois da criação, tornando o código menos confiável.

2. Características como faixa mínima e máxima de operação são obrigatórios, pois definem os limites de atuação válidos do sensor. O valor atual é essencial para demonstrar o estado atual do sensor. A área de atuação do sensor, dependendo do contexto, também pode ter sua importância, como por exemplo, para localizar o sensor em uma planta industrial.

3. Porque instanciar objetos com valores definidos desde o início garante que eles representem um estado válido no mundo real, evitando estados impossíveis, deixando o sistema confiável e previsível. Ou seja, não é apenas organização, mas mostrar representação correta do domínio.

**Questão 3. C++ e Python na inicialização de objetos**

1. Em c++ a sobrecarga de construtores permite definir múltiplos construtores dentro de uma mesma classe, cada um com parâmetros diferentes. Isso permite criar objetos de diferentes formas, dependendo das informações disponíveis no momento da criação, tornando a inicialização mais flexível.

2. Em Python, não é possível ter múltiplos métodos __init__ como em C++. A linguagem permite apenas um construtor por classe, então a inicialização é feita utilizando parâmetros opicionais, valores padrão ou argumentos variáveis, tratando diferentes formas de criação dentro do mesmo método.

3. Em Python, uma estratégia viável é utilizar parâmetros opicionais e valores padrão no método __init__, permitindo diferentes formas de inicialização. Além disso, também é possível utilizar métodos de classe para criar diferentes formas de instanciar objetos.

4. Conceitos estável de POO são aqueles que independem da linguagem, como a ideia de classes, objetos e a necessidade de garantir que eles estejam em um estado válido e coerente. Já os detalhes sintáticos variam entre linguagens, como no caso do C++, que permite a sobrecarga de construtores, diferente de Python que utiliza de outras estratégias para alcançar o mesmo resultado.

**Questão 4. Encapsulamento além de getter e setter**

Encapsulamento não deve ser reduzido a apenas colocar atributos como private e criar getter e setters, pois isso não garante a proteção das regras do objeto. O objetivo do encapsulamento é garantir como os dados são acessados e modificados, garantindo que o objeto permaneça em um estado válido.

1. O objetivo do encapsulamento é garantir que os atributos do objeto sejam acessados e modificados de forma controlada, preservando sua consistência e evitando estados inválidos. Para isso são utilizados os modificadores de acesso, como private, public e protected, definindo como esses dados podem ser manipulados.

2. Porque utilizar apenas getters e setters expõe diretamente os atributos do objeto, permitindo modificações sem respeitar as regras do sistema. Isso torna a API fraca, pois o objeto perde o controle sobre seu próprio estado, podendo entrar em situações inválidas e deixando de representar corretamente a lógica do domínio.

3. Em situações como controle de uma válvula, utilizar um método como definirAbertura(%) comunica melhor com o domínio, representa uma ação específica e permite validar limites, como valores entre 0 e 100%. Diferente de um simples setAbertura(valor), que apenas altera o atributo sem expressar a intenção ou garantir regras.

**Questão 5. Herança, composição e relação is-a**

1. O modelo da equipe B faz mais sentido, pois uma sala de controle possui sensores, e não é um tipo de sensor. Além disso, a sala continua existindo sem os sensores, e os sensores continuam existindo independentemente da sala de controle, ou seja, a sala de controle tem sensores (has-a).

2. O risco é de tornar o código incoerente com o objetivo real, criando relações de herança que não fazem sentido, como uma relação is-a incorreta. Utilizar herança apenas para reaproveitar atributos pode gerar um acoplamento desnecessário e dificultar a manutenção, já que a herança deve representar uma especialização real e não apenas reutilizar o código.

3. Outro exemplo seria um aquário, que possui peixes e decorações. Nesse caso, não faria sentido dizer que um aquário é um peixe, mas sim que ele tem peixes, caracterizando uma composição. Isso mostra que, nesse contexto, composição é mais adequada do que herança.

**Questão 6. Revisão de código em C++: estado inválido e contrato fraco**

1. Essa estrutura apresenta vários erros conceituais. Um deles de encapsulamento, já que todos os atributos são públicos, podedo ser manipulados por qualquer código. Estado inválido por padrão: valorAtual = -999.0, não representa um estado válido claro.  Não foi estabelecido a faixa de operação correta do sensor, nem ligação entre valorAtual e LimiteAlarme. Possui um construtor que inicializa o objeto em estado inválido.

2. O código é ruim pois mesmo que compilando, não garante que os objetos estejam em estado válido. Os atributos públicos podem ser manipulados livremente, sem qualquer validação, que pode levar a estados inconsistentes. Além disso o construtor iniciliza o objeto com valores inválidos, comprometendo a coerencia do sistema.

3. Tornar os atributos como privados para garantir o encapsulamento; Utilizar de construtor que inicialize o objeto com valores válidos e obrigatórios; Definir métodos que controlem os atributos de forma coerente com o domínio, como por exemplo, ajuste de faixa de operação e  ajuste do limite de alarme. Além disso, a classe pode ser estruturada de forma a permitir extensões futuras.

**Questão 7. Revisão de código em Python: falsa sobrecarga de construtor**

1. O erro conceitual foi definir dois __init__ na mesma classe, tentando aplicar sobrecarga de construtores como em C++. Em Python o conceito de sobrecarga não é aplicado dessa maneira, pois o segundo __init__ sobrescreve o primeiro. Portanto, apenas o ultimo construtor definido será considerado.

2. Como mencionado na resposta anterior, o segundo __init__ vai sobrescrever o primeiro, fazendo com que apenas ele exista em tempo de execução. Dessa forma o primeiro construtor é ignorado, e a classe só pode ser instanciada utilizando os parâmetros do segundo __init__, caso contrário ocorrerá erros.

3. O perigo está em assumir que Python se comporta como C++ nesse aspecto, levando a pessoa a acreditar que existem múltiplos construtores, o que pode gerar erros inesperados na construção de objetos ou comportamentos diferentes do esperado, comprometendo o funcionamento do sistema.

4. Uma forma de resenhar a criação de objetos em Python seria utilizar apenas um méwtodo __init__, com parâmetros opcionais e valores padrão, permitindo diferentes formas de inicialização. Além disso, também é possível métodos de classe para criar diferentes formas de instanciar o objeto, simulando a sobrecarga de construtores.

**Questão 8. Revisão de código em C++: herança mal justificada**

1. É fraca pois utiliza o conceito de herança apenas para reaproveitar atributo, que no caso não é coerente e torna a manutenção do código mais complexa. Além de que, herança implica em uma relação do tipo is-a, e nesse caso, a Sala de Controle não é um Sensor.

2. Está no fato de que a classe SalaControle herda de Sensor sem apresentar comportamento ou características que justifiquem essa relação. Indica que herança foi utilizada apenas para reaproveitar atributos.

3. Faria mais sentido uma relação do tipo has-a, onde a SalaControle possui sensores. Nesse caso, não há necessidade de herança, pos a sala não é um sensor, apenas tem relação com eles.

4. O modelo pode ser reestruturado removendo a relação de herança e utilizando associação, onde a Sala de Controle possui uma coleção de sensores. Dessa forma, ela pode interagir com os sensores através de seus métodos, sem precisar herdar diretamente da classe Sensor. 

**Questão 9. Revisão de código em C++: polimorfismo incompleto**

1. Pode-se esperar intuitivamente que a saída seja a abertura da válvula em 50%. No entanto, isso está incorreto, pois o método da classe base não foi declarado como virtual. Dessa forma, a chamada é resolvida em tempo de compilação, fazendo com que o método da classe base seja executado.

2. Falta declarar o método aplicarReferencia como virtual na classe base, para que o C++ utilize polimorfismo dinâmico e resolva a chamada em tempo de execução, chamando o método da classe derivada.

3. Porque a herança sozinha não garante o polimorfismo dinâmico. Para que isso ocorra, é necessário que os métodos sejam declarados como virtuais, permitindo que a chamada correta seja resolvida em tempo de execução. Sem isso, mesmo com herança, o comportamento será definido em tempo de compilação.

4. O virtual permite que o método seja resolvido em tempo de execução, garantindo que a versão correta do método seja chamada mesmo quando usamos ponteiros ou referências para a classe base. Já o override indica que um método da classe derivada está sobrescrevendo um método virtual da classe base, ajudando a garantir que essa sobrescrita seja feita corretamente.

**Questão 10. Revisão de código em Python: contrato implícito e legibilidade**

1. Sim, há polimorfismo, mas do tipo dinâmico implícito. Os objetos são tratados da mesma forma porque possuem o mesmo método, mesmo sem herança.

2. Em C++, o polimorfismo exige herança e métodos virtual. Já em Python, ele ocorre de forma mais simples, apenas pela presença de métodos com o mesmo nome. Isso ajuda a entender a diferença entre conceito (polimorfismo) e implementação na linguagem.

3. Garantir que todas as classes implementem certos métodos; Evitar erros por métodos ausentes; Tornar o contrato mais explícito.

4. Pode gerar erros em tempo de execução caso algum objeto não implemente o método esperado. Além disso, o código fica menos claro e menos seguro, pois não há garantia formal do comportamento.

**Questão 13. Sobrecarga de construtores e ambiguidade de projeto**

1. Porque os construtores usam os mesmos tipos (int e double) para significados diferentes, então não fica claro o que cada chamada representa. Só olhando a chamada, o usuário não sabe se está definindo valor inicial, limite ou faixa.

2. O problema não é só de sintaxe, é principalmente de modelagem. A classe mistura diferentes formas de inicialização que representam conceitos diferentes, o que gera ambiguidade na própria ideia do objeto.

3. Quando há várias formas de criar o objeto com significados diferentes, mas parâmetros parecidos. Métodos com nome deixam claro o propósito de cada criação, como “criarComFaixa” ou “criarComValorInicial”, evitando confusão.

4. Uma boa solução é substituir os construtores sobrecarregados por métodos de fábrica nomeados, como: 
criarComValorInicial(tag, valor); 
criarComFaixa(tag, min, max). 
Outra alternativa é usar tipos mais explícitos, como uma struct de faixa (Faixa) ou uma struct de configuração, para deixar a intenção clara e evitar ambiguidades.

**Questão 14. Identificação de inconsistências conceituais em um mini-caso**

1. A modelagem está incorreta em vários pontos. Primeiro, Casa não deveria herdar de SensorTemperatura, pois isso viola o conceito de herança — o correto seria composição. Também há um problema de responsabilidade, já que SensorTemperatura não deveria ter o método abrirPortao(), pois isso mistura funções de classes diferentes.
Além disso, o atributo estado do Portao está público, quebrando o encapsulamento. Outro erro é usar Relatorio como subclasse de Portao só para acessar dados, o que indica uso indevido de herança. Por fim, o uso de if com strings para decidir comportamento mostra falta de polimorfismo.

2. O ideal é reorganizar o sistema usando composição no lugar de herança indevida, aplicar encapsulamento no Portao, separar corretamente as responsabilidades das classes e substituir os ifs por polimorfismo com uma classe ou interface comum.

3. A UML ajudaria a identificar esses problemas antes do código, pois deixaria visíveis heranças incoerentes, falta de encapsulamento e ausência de uma estrutura polimórfica, facilitando perceber erros de modelagem logo no design.

**Questão 15. Questão-síntese: revisão arquitetural com foco em prova escrita**

O sistema apresenta diversos problemas de modelagem e organização. O principal deles é o uso de uma única função com muitos if baseados no tipo do equipamento, o que indica ausência de polimorfismo e um design pouco extensível. Além disso, o fato de atributos estarem públicos para facilitar testes mostra uma quebra de encapsulamento, o que compromete a segurança e a integridade dos objetos. A ausência de UML e o desenvolvimento das classes por pessoas diferentes em momentos distintos também sugere falta de padronização arquitetural e inconsistência no modelo do domínio.

Em relação aos conceitos de POO, o encapsulamento deveria ser reforçado, tornando os atributos privados e expondo apenas comportamentos necessários por métodos. O polimorfismo eliminaria a necessidade dos ifs, permitindo que cada equipamento (Válvula, Esteira e Dosador) implemente seu próprio comportamento através de uma interface comum. Já a herança ou interfaces poderiam ser usadas para criar um tipo base como “Equipamento”, garantindo uma estrutura unificada. A UML ajudaria a padronizar o sistema, tornando explícitas as relações entre classes e evitando inconsistências estruturais antes da implementação.

Sobre a estrutura atual, a lógica geral do sistema pode ser mantida, pois a ideia de controlar diferentes equipamentos é válida. No entanto, a função central com múltiplos condicionais precisa ser completamente redesenhada. Também é necessário revisar as classes que expõem atributos públicos, mantendo suas responsabilidades, mas corrigindo o acesso aos dados.

Um plano de refatoração poderia seguir estas etapas: primeiro, identificar e centralizar os comportamentos comuns dos equipamentos; depois, criar uma abstração (interface ou classe base) para unificá-los; em seguida, substituir os condicionais por chamadas polimórficas; depois, corrigir o encapsulamento das classes, tornando atributos privados e criando métodos adequados; por fim, documentar o novo modelo com UML para garantir consistência e facilitar futuras manutenções.