#include <iostream>
using namespace std;

int main() {
    int cases=0;
    int jumps=0;
    cin>>cases;
    for(int i=0; i < cases; i++){
        int high = 0;
        int low = 0;

        cin>>jumps;
        int heights[jumps];

        for(int j=0; j<jumps; j++){
            cin>>heights[j];
        }

        for(int j=0; j<jumps; j++){
            if(j!=jumps-1){
                if(heights[j]<heights[j+1]){
                    high+=1;
                }
                else if(heights[j]>heights[j+1]){
                    low+=1;
                }
            }
        }

        cout<<"Case "<< i+1<< ": "<<high<<" "<<low<<'\n';
    }

    return 0;
}
