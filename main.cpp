#include <bits/stdc++.h>

using namespace std;

int main()
{
    double rsalario, rservicos, rcapital, gmedicos, geducacionais, impsalario, impservicos, impcapital;
    cout << fixed << setprecision(2);

    cout << "Renda anual com salario: ";
    cin >> rsalario;
    cout << "Renda anual com prestacao de servico: ";
    cin >> rservicos;
    cout << "Renda anual com ganho de capital: ";
    cin >> rcapital;
    cout << "Gastos medicos: ";
    cin >> gmedicos;
    cout << "Gastos educacionais: ";
    cin >> geducacionais;

    if (rsalario/12 < 3000.0) {
        impsalario = 0.0;
    }
    else if (rsalario/12 >= 3000.0 && rsalario/12 < 5000.0) {
        impsalario = rsalario * 0.1;
    }
    else {
        impsalario = rsalario * 0.2;
    }

    if (rservicos != 0.0) {
        impservicos = rservicos * 0.15;
    }
    else {
        impservicos = 0.0;
    }

    if (rcapital != 0.0) {
        impcapital = rcapital * 0.2;
    }
    else {
        impcapital = 0.0;
    }

    cout << endl << "RELATORIO DE IMPOSTO DE RENDA" << endl << endl;
    cout << "CONSOLIDADO DE RENDA:" << endl;
    cout << "Imposto sobre salario: " << impsalario << endl;
    cout << "Imposto sobre servicos: " << impservicos << endl;
    cout << "Imposto sobre ganho de capital: " << impcapital << endl;

    cout << endl << "DEDUCOES:" << endl;
    cout << "Maximo dedutivel: " << (impsalario + impservicos + impcapital) * 0.3  << endl;
    cout << "Gastos dedutiveis: " << gmedicos + geducacionais << endl;

    return 0;
}
