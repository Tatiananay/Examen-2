#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<windows.h>
#define color SetConsoleTextAttribute       

using namespace std;

const string NLNOMBRE_COMPLETO = "Nayeli Tatiana Leiva Chafla";
const string NLCEDULA = "1721042172";
const string NLSECCARGA = "1 7 2 1 0 4 ";


struct coordenadas{
    //int nlcapacidad_belica;
    int nlcap;
    string nltipoAe;
    string nlgeo; 
}a;

void nllectura();
int main(){

    nllectura();
    return 0;
}

void nllectura(){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  //Función propia de la librería windows.h 
    ifstream nlarchivo;
    string texto;
    nlarchivo.open("nlcoordenadas.txt",ios::in);
    if(nlarchivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    cout << "[+]Coordenadas leidas.....: " << endl;
    color(hConsole, 4);       
    cout << "ERROR : cap,       Geo,   Tipo Arcenal -->stoi" << endl;
    color(hConsole, 5);

    while(!nlarchivo.eof()){
        getline(nlarchivo,texto);
        color(hConsole, 5); 
        int nl =0;
            string n= "-"; 
            for(int i=0; i<= 100; i++)
            {   
                if(i % 4 ==0)
                nl =0;
                    cout    << "\r" << n[nl++]   
                    << " " << i << "%     ";
            Sleep(15);
            }
        cout << texto << endl;
    }nlarchivo.close();

    system("cls");
    color(hConsole, 2); 
    cout<<"\n\n";
    cout<<"[+]InformaciOn Arbol Binario de capacidad belica Ucraniana"<<endl;
     color(hConsole, 8);
    cout<<"\n";
    cout<<  "\tDeveloper-Nombre : "<<NLNOMBRE_COMPLETO<<endl;
    cout<<  "\tDeveloper-Cedula : "<<NLCEDULA<<endl;
    cout<<  "\tCapacidad Bélica : "<<"15"<<endl; 
    cout<<  "\tCoordenada-Total : "<<" 6 "<<endl;
    cout<<  "\tCoordenada-SecCarga : "<<NLSECCARGA;

}