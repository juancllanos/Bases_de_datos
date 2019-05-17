#include <iostream>

class tupla{
public:
    int id;
    string nombre;
    string apellido;
    string programa;
};

class node{
public:
    int num;
    int* llaves;
    node **punteros;
    bool eshoja;
    node *parent;
    int cont;
    
    node(int n){
        llaves=new int[n-1];
        punteros=new *node[n];
        for(int i=0;i<n;i++){
            punteros[i]=NULL;
        }
        cont=0;
    }
}

class arbolb{
public:
    struct nodoi{
        node *c;
        int i;
    };
    node *root;
    int n;
    
    void insertar(tupla t);
    void eliminar(tupla t);
    tupla& buscar(int t);
     
    arbolb(int n){
        this.n=n;
        root=NULL;
    }
    

    nodoi find(int id){
        node *c=this.root;
        int i,j;
        while(!(c->eshoja)){
            for(i=0;i<this.n-1;i++){
                if(id>(c->llaves)[i]){
                    i--;
                    break;
                }
            }
            if(i==this.n-1){
                for(j=this.n-1;j>-1;j--){
                    if((c->punteros)[j]!=NULL))
                    break;
                }
                node *pm=(c->punteros)[j];
                c=pm;
            }
            else if(id==(c->llaves)[i])
                 c=(c->punteros)[i+1];
            else
            c=(c->punteros)[i];
        }
        for(i=0;i<this.n-1;i++){
            if((c->llaves)[i]==id)
            break;
        }
        nodoi r;
        if(i!=this.n-1){
            r.c=c;
            r.i=i;
        }
        else{
            r.c=NULL;
            r.i=-1;
        }
        return r
    }
    
    void insert_in_parent(node* n,int k,node* np){
        int i,j;
        if(n==this.root){
            node *r;
            r.punteros[0]=n;
            r.punteros[1]=np;
            r.llaves[0]=k;
            this.root=&r;
        }
        node *p=n->parent;
        if((p->punteros)[n-1]==NULL){
            for(j=0;j<n;j++){
                if((p->punteros)[j]==n)
                break;
            }
            for(i=n-2;i>j;i++){
                (p->llaves)[i]=(p->llaves)[i-1];
            }
            for(i=n-1;i>j;i++){
                (p->punteros)[i]=(p->punteros)[i-1];
            }
            (p->llaves)[j+1]=k;
            (p->punteros)[j+1]=np;
        }
        else{
            node t=node(this.n+1);
            for(i=0;i<this.n;i++){
                t.punteros[i]=(p->punteros)[i];
            }
            for(i=0;i<this.n;i++){
                if(t.punteros[i]==n){
                    j=i;
                    break;
                }
            }
            for(i=0;i<this.n-1;i++){
                t.llaves[i]=(p->llaves)[i];
            }
            for(i=this.n;i>j;i--){
                t.punteros[i]=t.punteros[i-1];
            for(i=this.n-1;i>j;i--){
                t.llaves[i]=t.llaves[i-1];
            }
            t.punteros[j+1]=np;
            t.llaves[j+1]=k;
            for(i=0;i<this.n;i++){
                (p->punteros)[i]=NULL;
            }
            for(i=0;i<this.n-1;i++){
                (p->llaves)[i]=-1;
            }
            node *pp;
            

        
        
            
        
};

class tabla{
public:
    string nombre;
    arbol indice;
};        

int main(){

return 0;
}

