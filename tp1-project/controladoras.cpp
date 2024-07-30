using namespace std;

void CntrAprConta::criarConta{

    //Inst�ncias de classes dom�nios
    Nome nome;
    CPF cpf;
    Senha senha;

    //Vari�vel tempor�ria para inser��o de dados
    string temp;
    bool resultado;

    //Loop para inser��o e defini��o dos dados

    while (true){
        try{
            cout << " Informar Nome:" << endl;
            cin >> temp;
            nome.setNome(temp);
            cout << " Informar CPF:" <<endl;
            cin >> temp;
            cpf.setCPF(temp);
            cout << " Informar Senha:"<<endl;
            cin >> temp;
            senha.setSenha(temp);
            break;
        }
        catch (invalid_argument &e) {
            cout << "Dado Inv�lido."
            return;
        }
    }

    //Instanciar classe de entidade

    Conta conta;
    conta.setCPF(cpf);
    conta.setNome(nome);
    conta.setSenha(senha);

    //Registrar no banco de dados e verificar l�gica de neg�cio (� fazer)

    resultado=CntrServConta::criarConta(conta);
    if !resultado
        return;

};
