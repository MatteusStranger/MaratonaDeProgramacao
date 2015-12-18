#include<iostream>
using namespace std;
int main(){
    char comandos; //Esquerda ou direita
    char pontosCardeais[4]={'N','L','S','O'}; //Vetor com os pontos cardeais
    short n,j; //Quantidade de comandos e variável auxiliar, respectivamente
    while(cin>>n && n!=0){
        j=0;
        //Laço que percorre o vetor de pontos cardeais em função da quantidade de comandos
        for(short i=0;i<n;i++){
            cin>>comandos;
            if(comandos=='D'){
                if(j==3){
                    j=0;
                }else{
                    j++;
                }
            }
            if(comandos=='E'){
                if(j==0){
                    j=3;
                }else{
                    j--;
                }
            }
        }
        cout<<pontosCardeais[j]<<endl; //Resultado final
    }
    return 0;
}
