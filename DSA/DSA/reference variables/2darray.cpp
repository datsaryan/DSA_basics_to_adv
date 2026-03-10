#include<iostream>
using namespace std;

int main(){
    int row, col;
    cin>>row>>col;

    int **array = new int*[row];
    for(int i=0;i<row;i++){
        array[i] = new int[col];
    }

    
    //creation done

    // INPUT
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>array[i][j];
        }
    }
    // OUTPUT
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    //releasing memory
    for(int i=0;i<row;i++){
        delete [] array[i];
    }
    delete [] array;
    return 0;
}