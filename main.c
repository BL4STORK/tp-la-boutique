#include <stdio.h>

int main() {
    int appleprice = 10 ;
    int sodaprice =20 ;
    int cakeprice = 30 ;
    int selectedprice ;
    char product ;
    printf("quel produit souhaitez-vous acheter\n" "si vous voulez une pomme utilisez p, si vous voulez un soda utilisez s, si vous voulez un gateau utilisez g\n");
    scanf("%c", &product);
    printf("\n") ;
    if(product == 'p') {
        selectedprice = appleprice ;
    }else if (product == 's'){
        selectedprice = sodaprice ;
    }else if (product = 'g'){
        selectedprice = cakeprice ;
    }
    selectedprice = selectedprice*1.2 ;
    printf("Veuillez payez : %d \n",selectedprice);
    return 0;
}
