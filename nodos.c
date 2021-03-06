

#include<stdio.h>
#include<stdlib.h>

struct nodo {
    int info;
    struct nodo *sig;
};


struct nodo *raiz=NULL;

void insertar(int x)
{
    struct nodo *new;
    new = malloc(sizeof(struct nodo));
    new->info = x;
    if (raiz == NULL)
    {
        raiz = new;
        nuevo->sig = NULL;
    }
    else
    {
        new->sig = raiz;
        raiz = new;
    }
}

void imprimir()
{
    struct nodo *reco=raiz;
    printf("toda la lista.\n");
    while (reco!=NULL)
    {
        printf("%i ",reco->info);
        reco=reco->sig;
    }
    printf("\n");
}

int extraer()
{
    if (raiz != NULL)
    {
        int informacion = raiz->info;
        struct nodo *bor = raiz;
        raiz = raiz->sig;
        free(bor);
        return informacion;
    }
    else
    {
        return -1;
    }
}

void liberar()
{
    struct nodo *reco = raiz;
    struct nodo *bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        free(bor);
    }
}



int vacia()
{
    if (raiz == NULL)
        return 1;
    else
        return 0;
}
int cantidad()
{
    struct nodo *reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

int main()
{
    insertar(10);
    insertar(40);
    insertar(3);
    imprimir();
    printf("\dimenciones  de la pila:%i\n",extraer());
    imprimir();
    printf("La cumulacion de nodos de la pila es:%i\n",cantidad());
    while (vacia() == 0)
    {
        printf("Extraemos de la pila:%i\n",extraer());
    }
    liberar();
    
    return 0;
}


