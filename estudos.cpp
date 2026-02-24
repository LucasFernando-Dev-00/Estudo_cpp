//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <climits>

//using namespace std;
    //int main() {

        //double salario1, salario2;
        //string nome1, nome2;
        //int idade;
        //char sexo;

        //cout<<"Digite o nome da primeira pessoa:";
        //getline(cin, nome1);
        //cout<<"Digite o salário da primeira pessoa:";
        //cin>>salario1;
        //cout<<"Digite o nome da segunda pessoa:";
        //cin.ignore(INT_MAX, '\n');
        //getline(cin, nome2);
        //cout<<"Digite o salario da segunda pessoa:";
        //cin>>salario2;

        //cout<<"Digite uma idade:";
        //cin>>idade;
        //cout<<"Digite um sexo (F/M):";
        //cin>> sexo;

        //cout<<"Nome, "<< nome1 << endl;

        //return 0;
   //}

   //================================================================================================

//#include <iostream>
//#include <iomanip>
//#include <cmath>

//using namespace std;

//int main() {

    //double base, altura, area, perimetro, diagonal;

    //cout << "Base do Retangulo: ";
    //cin >> base;

   //cout << "Altura do Retangulo: ";
    //cin >> altura;

    // Cálculos corretos
    //area = base * altura;
    //perimetro = 2 * (base + altura);
    //diagonal = sqrt(base * base + altura * altura);

    //cout << fixed << setprecision(4);

    //cout << "AREA = " << area << endl;
    //cout << "PERIMETRO = " << perimetro << endl;
    //cout << "DIAGONAL = " << diagonal << endl;

    //return 0;
//}

//========================================================================================================

//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
    //int main() {

        //int senha;
        //string nome, gmail;

        //cout<<"==SISTEMA DE LOGIN==\n";
        //cout<<"Digite seu nome:";
        //getline(cin, nome);
        //cout<<"Digite seu gmail:";
        //cin.ignore(INT_MAX, '\n');
        //getline(cin, gmail);
        //cout<<"Digite sua senha";
        //cin>>senha;

       //cout<<"\n";

        //cout<<nome<<endl;
        //cout<<gmail<<endl;
        //cout<<senha<<endl;

        //cout<<"==LOGIN CONCLUÍDO COM SUCESSO==";



        //return 0;
    //}

    //=====================================================================================================

//#include <iostream>
//#include <iomanip>
//#include <string>
//#include <cmath>
//using namespace std;

    //int main() {

        //int a, b, c, menor;

        //cout<<"Primeiro Valor: ";
        //cin>>a;
        //cout<<"Segundo Valor: ";
        //cin>>b;
        //cout<<"Terceiro Valor: ";
        //cin>>c;

       //if (a < b && a < c) {
           //menor = a;
        //}
        //else if (b < c) {
           // menor = b;
        //}
       // else {
            //menor = c;
        //}

        //cout<<"Menor: "<<menor<<endl;

        //return 0;
    //}

//=================================================================================================

//#include <iostream>
//using namespace std;
    //int main() {

        //int x, y;

        //cout<<"Digite dois números:"<<endl;
        //cin>>x>>y;

        //while(x != y) {

            //if (x < y) {
                //cout<<"CRESCENTE"<<endl;
            //}
            //else {
                //cout<<"DECRESCENTE"<<endl;
            //}

            //cout<<"Digite dois números:"<<endl;
            //cin>>x>>y;

        //}
        //return 0;
    //}

//=================================================================================================    

//#include <iostream>
//using namespace std;
    //int main() {

        //int x, y, troca;

        //cout<<"Digite dois numeros"<<endl;
        //cin>>x>>y;
        
        ///if (x > y) {

            //troca = x;
            //x = y;
            //y = troca;

        //}

        //int soma = 0;

        //for (int i = x+1; i < y; i++) {

            //if (i % 2 != 0) {
                //soma = soma + i;
            //}
        //}

        //cout<<"SOMA DO IMPARES: "<<soma<<endl;

        //return 0;
    //}

//======================================================================================================

//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;
    //int main() {      
    
        //int cont, n;
        //double porcentagem, soma, media;

        //cout<<"Quantas pessoa serão digitadas: ";
        //cin>>n;

        //string nome[n];
        //nt idade[n];
        //double alturas[n];

        //for (int i = 0; i<n; i++) {

            //cout<<"\nDados da "<<i+1<<"a pessoa:"<<endl;
            //cout<<"Nome: ";
            //cin.ignore(INT_MAX, '\n');
            //getline(cin, nome[i]);
            //cout<<"Idade: ";
            //cin>>idade[i];
            //cout<<"Altura: ";
            //cin>>alturas[i];
        //}

        //soma = 0;

        //for(int i = 0; i <n; i++) {
            //soma = soma + alturas[i];
        //}

        //media = soma / n;

        //cout<<fixed<<setprecision(2);
        //cout<<"\nAltura Média: "<<media<<endl;

        //cont = 0;

        //for(int i = 0; i < n; i++) {
           //if(idade[i] < 16) {
               //cont = cont + 1; 

            //}

        //}

        //porcentagem = (double)cont * 100 / n;

        //cout<<fixed<<setprecision(1);
        //cout<<"Pessoas com menos de 16 anos: "<<porcentagem<<"%"<<endl;

        //for(int i = 0; i < n; i++) {
            //if(idade[i] < 16) { 
                //cout<<nome[i]<<endl;            
            //}

        //}

        //return 0;
    //}

//=======================================================================================================

//#include <iostream>
//#include <iomanip>
//#include <string>
//using namespace std;

    //int main() {

        //int n;

        //cout<<"Qual a ordem da matriz: ";
        //cin>>n;

        //int matriz[n][n];

        //for(int i = 0; i < n; i++) {
            //for(int j = 0; j < n; j++) {
            //cout<<"Elemento "<<"["<<i<<","<<j<<"]: ";
            //cin>>matriz[i][j];
        //}
    //}
        //cout<<"DIAGONAL PRIINICIPAL:"<<endl;

        //for (int i = 0; i < n; i++) {
            //cout<<matriz[i][i]<<" ";
        //}
        //cout<<endl;

        //int cont = 0;

        //for (int i = 0; i < n; i++) {
            //for (int j = 0; j < n; j ++) {
                //if (matriz[i][j] < 0) {
                   //cont = cont + 1; 
                //}
            //}
        //}

        //cout<<"QUANTIDADE DE NEGATIVOS: "<<cont<<endl;

        //return 0;
    //}

//==============================================================================================================
  