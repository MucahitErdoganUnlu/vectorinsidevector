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
    return 0;
    
    
}
