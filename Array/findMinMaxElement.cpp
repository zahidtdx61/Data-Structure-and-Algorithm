// in the returned vector 1st element is max element and 2nd one is min element

vector<int> maxmin(vector<int> arr)
{
    // if arr size is odd then we will consider 1st element as min and max
    // if size id even then greater value from 1st two element will be max and rest one is min
    // then we will compare them wirh orher elements of the array and find max and min value
    
    int length = arr.size(),min,max,i;
    if(length%2 == 0){
        if(arr[0]>arr[1]){
            max = arr[0];
            min = arr[1];
        }
        else{
            max = arr[1];
            min = arr[0];
        }
        i=2;
    }
    else{
        max = min = arr[0];
        i=1;
    }

    // now we will compare min and max with rest of the element of the array and find final max and min
    while(i<length-1){
        if(arr[i]>arr[i+1]){
            if(arr[i]>max){
                max = arr[i];
            }
            if(arr[i+1]<min){
                min = arr[i+1];
            }
        }
        else{
            if(arr[i]<min){
                min = arr[i];
            }
            if(arr[i+1]>max){
                max = arr[i+1];
            }
        }
        i += 2;
    }

    vector<int> res;
    res.push_back(max);
    res.push_back(min);

    return res;
} 
