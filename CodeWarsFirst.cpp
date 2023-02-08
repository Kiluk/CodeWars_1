float find_uniq(const std::vector<float> &v)
{
  
  for (int i=2; i <= v.size() ;i++)
  {
    if ((v[i-1]!=v[i])&&(v[i-1]!=v[i-2]))
    {
      return v[i-1];
    }
  }
  if(v.front()!=v.back() && v.front()!=v[1])
    {
    return v.front();
  }
  if(v.back()!=v.front() && v.back()!=v[1])
    {
    return v.back();
  }
}