#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>nums1, int m, vector<int>nums2, int n)
{
    if(m==0)
    {
        for(int k=0; k<nums2.size(); k++)
        {
            cout<<nums2[k]<<" ";
        }
    }
    else if(n==0)
    {
        for(int k=0; k<nums1.size(); k++)
        {
            cout<<nums1[k]<<" ";
        }
    }
    else
    {
        int p=m+n;
        int c=(m+n)-1,i=m-1,j=n-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i] > nums2[j])
            {
                nums1[c--]= nums1[i--];
            }
            else
            {
                nums1[c--]=nums2[j--];
            }
        }
        while(i>=0)
        {
            nums1[c--]=nums1[i--];
        }
        while(j>=0)
        {
            nums1[c--]=nums2[j--];
        }
        for(int k=0; k<p; k++)
        {
            cout<<nums1[k]<<" ";
        }
    }
}

int main()
{
    int a,b,m,n;
    cout<<"enter array size:";
    cin>>m>>n;
    int p=m+n;
    vector<int>v1(p,0);
    vector<int>v2;

    cout<<"enter 1st array elements: "<<endl;
    for(int i=0; i<m; i++)
    {
        cin>>a;
        v1[i]=a;
    }
    cout<<"enter 2nd array elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        v2.push_back(a);
    }
    merge(v1,m,v2,n);
    return 0;
}

