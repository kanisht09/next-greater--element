//
//  main.cpp
//  next_greater
//
//  Created by RAJAT SHARMA on 01/10/20.
//  Copyright © 2020 RAJAT SHARMA. All rights reserved.
//

#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "ENTER THE ARRAY SIZE : ";
    cin >> n;

    int a[n];

    cout << "ENTER THE ARRAY ELEMENTS : ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans[n];

    for (int i = 0; i < n; i++)
    {
        ans[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                ans[i] = a[j];
                break;
            }
        }
    }

    cout << "NEXT GREATER ELEMENT FOR EACH ELEMENT IS : ";

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
}
