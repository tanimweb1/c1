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

    
    



 /*A
    A B
    A B C*/

int n,row,col;
printf("Enter N = ");
scanf("%d",&n);

for(row = 1; row<=n; row++){

for(col = 1; col<=row; col++){

    printf("%c ",col+64);
}

printf("\n");
}







 /*A
    B B
    C C C*/

int n,row,col;
printf("Enter N = ");
scanf("%d",&n);

for(row = 1; row<=n; row++){

for(col = 1; col<=row; col++){

    printf("%c ",row+64);
}

printf("\n");
}





// check prime number or not

    int num, count = 0;

    printf("Enter the number : ");
    scanf("%d", &num);

    if (num <= 1)
    {
        count++;
    }

    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            count++;
            break;
        }
    }

    if (count == 0)
    {
        printf("%d is a prime number\n", num);
    }

    else
    {
        printf("%d is not a prime number\n", num);
    }




//1. Square Pattern    
int n,row,col;
scanf("%d",&n);

for(row = 1; row<=n;row++){

for(col= 1; col<=n;col++){
    printf("*");
}
printf("\n");

}









//2. Right Triangle 
int n,row,col;
scanf("%d",&n);

for(row = 1; row<=n;row++){

for(col= 1; col<=row;col++){
    printf("*");
}
printf("\n");

}







   //3. Reverse Triangle
int n,row,col;
scanf("%d",&n);

for(row = n; row>=1;row--){

for(col= 1; col<=row;col++){
    printf("*");
}
printf("\n");

}
 



//4. Number Triangle
int n,row,col;
scanf("%d",&n);

for(row = 1; row<=n;row++){

for(col= 1; col<=row;col++){
    printf("%d",col);
}
printf("\n");

}

  


//5. Floyd’s Triangle
int n,row,col,num=0;
scanf("%d",&n);

for(row = 1; row<=n;row++){

for(col= 1; col<=row;col++){
    num++;
    printf("%d ",num);
}
printf("\n");

}
    

    
    
    


    return 0;
}






