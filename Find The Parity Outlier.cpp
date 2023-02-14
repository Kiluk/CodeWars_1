int FindOutlier(std::vector<int> arr)
{
    int result;
    for(int i = 1; i < arr.size()-1 ; i++)
    {
      if(abs(arr[i]%2)!=abs(arr[i-1]%2) && abs(arr[i]%2)!=abs(arr[i+1]%2) )
      {
        result = arr[i]; 
      }  
    }
    if(abs(arr.back()%2)!=abs(arr.front()%2))
    {
      if(abs(arr.front()%2)!=abs(arr[1]%2))
      {
        result = arr.front();  
      }
      else
      {
        result = arr.back();
      }
    }
    return result;
}