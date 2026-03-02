#include<stdio.h>
int main(){

    /*1
    1 2
    1 2 3*/

int n,row,col;
printf("Enter N = ");
scanf("%d",&n);

for(row = 1; row<=n; row++){

for(col = 1; col<=row; col++){

    printf("%d ",col);
}

printf("\n");
}





    /*1
    2 2
    3 3 3*/

int n,row,col;
printf("Enter N = ");
scanf("%d",&n);

for(row = 1; row<=n; row++){

for(col = 1; col<=row; col++){

    printf("%d ",row);
}

printf("\n");
}




    

    /*1
    1 0
    1 0 1*/

int n,row,col;
printf("Enter N = ");
scanf("%d",&n);

for(row = 1; row<=n; row++){

for(col = 1; col<=row; col++){

    printf("%d ",col%2);
}

printf("\n");
}





    /*1
    0 0
    1 1 1*/

int n,row,col;
printf("Enter N = ");
scanf("%d",&n);

for(row = 1; row<=n; row++){

for(col = 1; col<=row; col++){

    printf("%d ",row%2);
}

printf("\n");
}

    
    



    return 0;
}



