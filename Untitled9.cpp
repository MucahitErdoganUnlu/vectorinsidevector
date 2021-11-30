#include <iostream>
#include <vector>

using namespace std;

 template <class T>
vector<vector<T>> create_matrix(T x, int rows, int columns) {
	vector<T> vector_name (columns, x);
	vector<vector<T>> vec2 (rows, vector_name);
 return vec2;
}

int main()
{	
    vector<vector<char>> a = create_matrix("m", 2, 3);
    for(int i=0; i<2; i++){
    	for(int m=0; m<3; m++){
			cout << a[i][m]<< " ";
		}
		cout << "\n";
	}
    
    
}

