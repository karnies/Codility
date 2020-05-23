// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    // calculate sum of left one, and sum of the others
    int N = A.size();
    int sumLeft = A[0];
    int sumRight = 0;
    int i;
    
    for(i=1; i<N; i++)
    {
        sumRight += A[i];
    }
    
    // Find the minimum diff value by increasing and decreasing by one element on both sides
    int ret = abs(sumLeft - sumRight);
    for(i=1; i<N-1; i++)
    {
        sumLeft += A[i];
        sumRight -= A[i];
        ret = min(ret, abs(sumLeft-sumRight));
    }
    
    return ret;
}