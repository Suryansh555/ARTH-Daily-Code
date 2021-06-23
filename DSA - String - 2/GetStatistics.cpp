#include<bits/stdc++.h>
using namespace std ;

void GetStatistics(vector<int> arr){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    float mean = arr[0], median , mode , sample_variance  = 0 , sample_standard_deviation , mean_confidence_interval[2];
    int count = 1 ;
    int maxcount = -1 ;
    int currmax = arr[0] ;
    for(int i = 1 ; i < n ; i++){
        mean = mean + arr[i];
        if(arr[i-1] == arr[i]){
            count++;
        }
        else{
            if(count > maxcount){
                maxcount = count ;
                currmax = arr[i-1];
            }
            count = 1 ; 
        }
    }
    mean = mean / n ; 
    cout << "Mean -> " << mean << endl ;
        for(int i = 0 ; i < n ; i++){
        sample_variance += pow(arr[i] - mean, 2)  ;
        sample_variance = sample_variance  ;
    }
    cout << "Median -> " << arr[n/2] << endl ;
    cout << "Mode -> " << currmax << endl ; 
    sample_variance = sample_variance / (n-1);
    cout << "Sample_variance -> " << sample_variance  << endl ;
    sample_standard_deviation = sqrt(sample_variance);
    cout << "sample_standard_deviation -> " << sample_standard_deviation << endl;
    mean_confidence_interval[0] = mean - (1.96 * (sample_standard_deviation/sqrt(n)));
    mean_confidence_interval[1] = mean + (1.96 * (sample_standard_deviation/sqrt(n)));
    cout << "mean_confidence_interval -> " << "[" << mean_confidence_interval[0] << ", " << mean_confidence_interval[1] << "]";

    
}


int main(){
    vector<int> arr {2,1,3,4,4,5,6,7};
     GetStatistics(arr);
}