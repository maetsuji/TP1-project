#include <iostream>
#include <string>
#include "dominios.h"
#include "entidades.h"

using namespace std;

int main(){
    INCLUIR EM ENTIDADES AS CHAVES ESTRANGEIRAS (CPF->PAGAMENTO e CODIGODEPAGAMENTO->TITULO)
        página 1 (TELA DE LOGIN):
                "0.Criar conta"
                "1.Autenticar"
                "2.Sair."
        pagina 2 (MEU PAINEL):
                "1.Dados de Conta-Conta::EXECUTAR()"
                "2.Investimentos"
                "3.Voltar"
        pagina 3 (Dados de Conta-Conta::EXECUTAR())
                "1.Alterar"
                "2.Ler"
                "3.Excluir"
                "4.Voltar"
        pagina 4 (Investimetnos)
                "1.Pagamentos"
                "2.Titulos"
                "3.Voltar"
        pagina 4.1 (Pagamentos)
                "0.Criar"
                "1.Alterar"
                "2.Ler"
                "3.Excluir"
                "4.Voltar"
        pagina 4.2 (Titulos)
                "0.Criar"
                "1.Alterar"
                "2.Ler"
                "3.Excluir"
                "4.Voltar"
}
