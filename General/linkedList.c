#include<stdio.h>
#include<stdlib.h>
typedef struct no{
    int value;
    struct no *next;
    struct no *ant;
}NO;
NO *end = NULL;
NO *start = NULL;
int size = 0;

void addNewElement(int value, int pos){
        NO *new =(NO*) malloc(sizeof(NO));
        new->value = value;
        new->next = NULL;
        new->ant = NULL;
        if(start == NULL){
            start = new;
            end = new;
        }else if (pos == size){
            new->ant = end;
            end->next = new;
            end = new;
        }else if(pos == 0){
            new->next = start;
            start->ant = new;
            start = new;
        }else{
            NO *aux = start;
            int i;
            for(i = 0; i<pos-1; i++){
                aux = aux->next;
            }
           new -> next = aux->next;
           new ->ant = aux;
           aux->next->ant = new;
           aux->next = new;
        }

        size++;
    }

void printWithOutRecursion(){
    int i;
    NO *aux = start;
    for(i=0; i<size;i++){
        printf("%d\t", aux->value);
        aux = aux->next;
    }
}


void printWithRecursion(NO *aux){
    if(aux != NULL){
        printWithRecursion(aux->next);
        printf("%d\t", aux->value);
    }

}

void rmvElement (int pos){
    NO *trash = start;
    if(pos>=0 && size>0 && pos<=size){
        if(pos==0 && size == 1){
            trash = start;
            start = NULL;
            end = NULL;
            size--;
            free (trash);
        }else if(pos==size-1){
            trash = end;
            end = end -> ant;
            end->next = NULL;
            free(trash);
        }else if( pos == 0){
            trash = start;
            start = start->next;
            start->ant = NULL;
            free(trash);
        }else if(pos>0 && pos <size-1){
            NO *aux = start;
            int i;
            for(i=0; i<pos; i++){
                aux = aux->next;
            }
            aux->ant->next = aux -> next;
            aux ->next->ant = aux->ant;
            free(aux);
        }
        size--;
    }
}
int main(){
    addNewElement(10,0);

    addNewElement(20,0);
    
    addNewElement(30,1);
    
    addNewElement(40,3);
    
    addNewElement(50,0);
    
    addNewElement(100,0);
    
    printWithOutRecursion();
    puts("");
    
    printWithRecursion(start);
    puts("");
    
    rmvElement(4);
    puts("");
    
    printWithOutRecursion();
return 0;
}

