#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> &array, int key)
{
    int index;
    int low = 0;
    int high = array.size()-1;
    
    while(low<=high)
    {
        int mid = low + (high - low)/ 2;
        
        if(array[mid]==key)
        return mid;
        
        if(array[mid]<key)
        low = mid+1;
        
        else
        high = mid-1;
    }
    
    return -1 ;
}

int main()
{
    int n;
    cout<<"Enter the no of elements of the array:\n";
    cin>>n;
    
    vector<int> array(n);
    
    cout<<"Enter the elements of the array:\n";
    
    for(int i=0;i<n;i++)
    cin >> array[i];
    
    int k;
    cout<<"Enter the Element you want to search:\n";
    cin>>k;
    
    if(binarysearch(array,k)==-1)
    cout<<"Element not found.";
    else
    cout<<"Element found at Position "<<binarysearch(array,k)+1<<endl;
    
    
    

    return 0;
}
