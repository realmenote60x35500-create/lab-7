# include <stdio.h>
int main(){
    char maze[5][5] = {
{'S', 'O', 'O', 'W', 'W'},
{'O', 'W', 'O', 'O', 'W'},
{'O', 'O', 'O', 'W', 'O'},
{'W', 'W', 'O', 'W', 'O'},
{'W', 'W', 'O', 'E', 'W'}};

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        if(maze[i][j]=='S'){
            printf("%d %d",i,j);
        }
        else if(i==1&&j==0)
        printf("(%d %d)",i,j);
        else if(i==2&&j==1)
        printf("(%d %d)",i,j);
        else if(i==2&&j==1)
        printf("(%d %d)",i,j);
        else if(i==2&&j==2)
        printf("(%d %d)",i,j);
        else if(i==3&&j==2)
        printf("(%d %d)",i,j);
    else if(i==4&&j==2)
    printf("(%d %d)",i,j);
else{
    if(i==4&&j==3){
            printf("(%d %d)",i,j);

        }
    }

    }
}


    return 0;
}