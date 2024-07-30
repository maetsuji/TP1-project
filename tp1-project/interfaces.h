using namespace std;

//Declara��o Adiantada

class ISConta;
class ISAuth;
class ISInvestimento;

//Camada de Apresenta��o

//Interface apresenta��o Conta
class IAprConta{
public:
    virtual void criarConta() = 0;
    virtual int executar(CPF*) = 0;
    virtual void setCntrServConta(IServConta*) = 0;
    virtual ~IAprConta(){};
};

//Interface apresenta��o Autentica��o
class IAprAuth{
public:
    virtual bool autenticar(CPF*) = 0;
    virtual void setCntrServAuth(IServAuth*) = 0;
    virtual ~IAprAuth(){};
};

//Interface apresenta��o Investimento
class IAprInvestimento{
public:
    virtual bool executar(CPF) = 0;
    virtual void setCntrServInvestimento(IServInvestimento*) = 0;
    virtual ~IAprInvestimento(){};
};

//Camada de Servi�o


/*class ISConta{
public:
    virtual bool lerConta(CPF*) = 0;
    virtual bool atualizarConta(CPF*) = 0;
    virtual bool deletarConta(CPF) = 0;
    virtual ~ISConta(){};
};
*/
