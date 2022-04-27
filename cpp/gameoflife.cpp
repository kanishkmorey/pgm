    #include <iostream>

    using namespace std;
    
    const int size = 25;
    
    void checkAlive();
    void printGame();
    void clearScreen(void);

    int main(){
        bool game[size+1][size+1] = {};
        int count = 0,n,i,j,neighbours;
        clearScreen();
        cout << "Rules" << endl;
        cout << "The universe of the Game of life is an infinite two-dimensional orthogonal grid of square cells," << endl;
        cout << "each of which is in one of two possible states, life or dead. Every" << endl;
        cout << "cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent." << endl;
        cout << "At each step in time, the following transitions occur:" << endl;
        cout << "1. Any live cell with fewer than two live neighbours dies, as if caused by under-population." << endl;
        cout << "2. Any live cell with two or three live neighbours lives on to the next generation." << endl;
        cout << "3. Any live cell with more than three live neighbours dies, as if by over-population." << endl;
        cout << "4. Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction." << endl;
        
        cout<<"Enter the number of cells to be alive: ";
        cin>>n;
        clearScreen();
        while(count <= n)
        {
            cout<<"Enter the coordinates of cell to be alive: ";
            cin>>i>>j;
            game[i-1][j-1] = 1;
            count++;
        }
        for(i = 0; i < size+1; ++i)
        {
            for(j = 0; j < size+1; ++j)
            {
                if(game[i][j] == 1)
                {
                    cout<<" o ";
                }
                else
                {
                    cout<<" . ";
                }
            }
            cout<<endl;
        }
        for(i = 0; i < 10; ++i)
        {
            for(j = 0; j < 10; ++j)
            {
                
            }
        }
        return 0;
    }
void clearScreen(void)
{
    cout << "\033[2J\033[1;1H";
}