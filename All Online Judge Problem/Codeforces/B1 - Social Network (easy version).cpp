/***
**     Author: Rakibul Ahasan Papon
**     Bangladesh University of Business and Technology,
**     Dept. of CSE.
***/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k ;
    cin >> n >> k ;
    int ar[n] ;

    for(int i = 0 ; i < n ; i++)
        cin >> ar[i] ;

    set <int> st ;
    set <int> :: iterator it1 ;
    deque <int> dq ;
    deque <int> :: iterator it ;

    for(int i = 0 ; i < n ; i++)
    {
        it1 = st.find(ar[i]) ;

        if(it1 != st.end())
            continue ;

        if(st.size() != k )
        {
            st.insert(ar[i]) ;
            dq.push_front(ar[i]) ;
        }
        else
        {
            st.erase(st.find(dq.back())) ;
            st.insert(ar[i]) ;
            dq.pop_back() ;
            dq.push_front(ar[i]) ;
        }
    }

    cout << dq.size() << "\n" ;
    for(it = dq.begin() ; it != dq.end() ; it++)
    {
        cout << *it << " " ;
    }
    cout << "\n" ;
    return 0 ;
}
