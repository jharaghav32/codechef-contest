/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

void depthFirst(int v, vector<int> graph[],
                vector<bool>& visited,
                int& sum,
                vector<int> B)
{
    
    visited[v] = true;
 
    
    sum += B[v - 1];
 
    
    for (auto i : graph[v]) {
 
        if (visited[i] == false) {
 
            
            depthFirst(i, graph, visited,
                       sum,B);
        }
    }
}
 
int maximumSumOfValues(vector<int> graph[],
                        int A, vector<int> B)
{
    
    vector<bool> visited(B.size() + 1, false);
 
    
    int maxValueSum = INT_MIN;
     int curr;
    
    for (int i = 1; i <= A; i++) {
        
        if (visited[i] == false) {
 
            
            int sum = 0;
 
            
            depthFirst(i, graph, visited,
                       sum, B);
                       curr = sum-B[i];
        }
        if (curr > maxValueSum) {
                maxValueSum = curr;
            }
    }
 
   return maxValueSum;
}


int main()
{


    vector<int>graph[A+1];
    for(int i=0;i<C.size();i++){

        graph[C[i][0]].push_back(C[i][1]);
        graph[C[i][1]].push_back(C[i][0]);
    }
   return maximumSumOfValues(graph,A,B);

    return 0;
}
