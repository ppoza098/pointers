#include <iostream>
using namespace std;

struct vox{
    char nombre;
    char apellido;
    String fecha;
    int Expediente;
    vox *sgt;
};

vox *peek = NULL;
void push(char nombre, char apellido, String fecha, int Expediente){
    vox *nvox = new vox;
    nvox->nombre=nombre;
    nvox->apellido=apellido;
    nvox->fecha=fecha;
    nvox->Expediente=Expediente;
    peek=nvox;
}
void pop(){
    if(peek==NULL)
        cout<<"Nada que imprimir, Stack vacia \n";
    else 
        peek=peek->sgt;
}
void prt(){
    vox *aux = peek;
    if(aux==NULL)
    cout<<"Nada que imprimir, Stack vacia \n";
    else
        while(aux!=NULL){
            cout<<aux->nombre;
            cout<<aux->apellido;
            cout<<aux->fecha;
            cout<<aux->Expediente
            aux=aux->sgt;
        }
}
int main (){
    int op, x;  // op -> opcion y x -> valor
    do{
        cout<<"\n(1) Push  (2) Pop  (3)Print  (4)Salir \n";
        cout<<"\n Elija opcion ?; ", cin>>op;
        switch (op){
            case 1:
                char n;
                <<cout<<"Nombre: ?  ",cin>>n;
                char a;
                <<cout<<"Apellido: ?  ",cin>>a;
                String f;
                <<cout<<"Fecha: ?  ",cin>>f;
                char e;
                <<cout<<"Expediente: ?  ",cin>>e;
                push(n,a,f,e);
                break;

            case 2:
                cout<<"Eliminado .... : ";
                pop();
                break;
            
            case 3:
                cout<<"Imprimiendo .... : ";
                prt();
                break;

            case 4:
            cout<<"----FIN----"
        }
    }while(op!=4);
}