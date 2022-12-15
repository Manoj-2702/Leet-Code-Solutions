int countNegatives(int** grid, int gridSize, int* gridColSize){
    int m=gridSize;
    int n=*gridColSize;
    int x=0,y=n-1,ans=0;
    while(x<m){
        while((y >= 0) && (grid[x][y] < 0)){
            y--;
        }
        ans += n-1-y;
        x++;
    }
    return ans;
}
