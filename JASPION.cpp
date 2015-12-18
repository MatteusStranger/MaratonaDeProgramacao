#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main(){
    int t,m,n;
    typedef map<string,string,less<string> > dicionario;
    dicionario dic;
    dicionario::const_iterator iter;
    string japa, br,letra,aux;
    cin>>t;
    while(t-->0){
        cin>>m>>n;
        dic.clear();
        getline(cin,japa);
        for(int i=0;i<m;i++){
            getline(cin,japa);
            getline(cin,br);
            dic.insert(dicionario::value_type(japa,br));
        }
        for(int i=0;i<n;i++){
            getline(cin,letra);
            int j=0;
            while(j<letra.size()){
                aux.clear();
                while(letra[j]!=' ' && j<letra.size()){
                    aux += letra[j];
                    j++;
                }
                iter = dic.find(aux);
                if(iter==dic.end()){
                    cout<<aux<<' ';
                }else{
                    cout<<iter->second<<' ';
                }
                if(letra[i]==' '){
                    cout<<' ';
                }
                j++;
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}

