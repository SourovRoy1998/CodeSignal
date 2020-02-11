int magicalWell(int a, int b, int n) {
    int ans=0;
    for(int i=0;i<n;i++)
        ans+=(a+i)*(b+i);
    return ans;
}
