//
//  selection sort.cpp
//  sorting
//
//  Created by nimrat bedi on 29/08/18.
//  Copyright © 2018 nimrat bedi. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int i,j,n,loc,temp,min,a[30];
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"\nEnter the elements\n";
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    for(i=0;i<n-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<n;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
        
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    
    cout<<"\nSorted list is \n";
    for(i=0;i<n;i++)
    {
    cout<<a[i]<<" ";
    }
    
    return 0;
}
