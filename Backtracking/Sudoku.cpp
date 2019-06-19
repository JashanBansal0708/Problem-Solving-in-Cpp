// Some error that i don't able to resolve

#include<bits/stdc++.h>
using namespace std;

int arr[9][9];

/*
bool isSafe(int r, int c, int v){
    for(int i=0; i< 9; i++){
        if(arr[r][i] == v){
            return false;
        }
        if(arr[i][c] == v){
            return false;
        }
    }

    r = r- r%3;
    c = c- c%3;

    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (arr[row + r][col + r] == v)
                return false;
    return true;
}

bool res(){
    int r, c;

    for(int i=0; i< 9; i++){
        for(int j=0; j< 9; j++){
            if(arr[i][j]==0){
                r = i;
                c = j;
                i = 9;
                break;
            }
        }
    }

    if(r == 8 && c == 8&& arr[r][c] != 0)
        return true;

    for(int v=1; v<=9; v++){
        if(isSafe(r, c, v)){
            arr[r][c] = v;
            if(res())
                return true;
            arr[r][c] = 0;
        }
    }
    return false;
}

*/

#define N 9

#define UNASSIGNED 0;

bool UsedInCol(int col, int num)
{
    for (int row = 0; row < N; row++)
        if (arr[row][col] == num)
            return true;
    return false;
}

bool UsedInBox(int boxStartRow,
               int boxStartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (arr[row + boxStartRow]
                    [col + boxStartCol] == num)
                return true;
    return false;
}


bool UsedInRow(int row, int num)
{
    for (int col = 0; col < N; col++)
        if (arr[row][col] == num)
            return true;
    return false;
}

bool isSafe(int row,
                   int col, int num)
{

    return !UsedInRow(row, num) &&
           !UsedInCol(col, num) &&
           !UsedInBox(row - row % 3 ,
                      col - col % 3, num) &&
            arr[row][col] == UNASSIGNED;
}


bool FindUnassignedLocation(int &row, int &col)
{
    for (row = 0; row < 9; row++)
        for (col = 0; col < 9; col++)
            if (arr[row][col] == 0)
                return true;
    return false;
}

bool res()
{
    int row, col;
    if (!FindUnassignedLocation(row, col))
    return true;

    for (int num = 1; num <= 9; num++)
    {
        if (isSafe(row, col, num))
        {
            arr[row][col] = num;
            if (res())
                return true;
            arr[row][col] = 0;
        }
    }
    return false;
}


int main()
{
     int t;
     cin >> t;
     while(t--){
        for(int i=0; i< 9; i++){
            for(int j=0; j< 9; j++){
                cin >> arr[i][j];
            }
        }

        if(res()){
            for(int r=0; r< 9; r++){
                for(int c=0; c< 9; c++){
                    cout << arr[r][c] << " ";
                }
            }
        }
     }
	 return 0;
}
