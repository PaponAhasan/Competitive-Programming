#include "bits/stdc++.h"
using namespace std;

struct Point{ 
    int x, y; 
} p1; 

struct address 
{ 
   char name[50]; 
   char street[100]; 
   char city[50]; 
   char state[20]; 
   int pin; 
};

struct Point {
    int x, y; 
}; 

int main() 
{
    struct Point p1;
    struct Point p1 = {0, 1};
    p1.x = 20;
    cout << "x = " << p1.x << ", y = " << p1.y; //x = 20, y = 1
    
    struct Point arr[10];
    arr[0].x = 10; 
    arr[0].y = 20; 
    cout << arr[0].x << " " << arr[0].y; //10 20
    
    struct Point* p2 = &p1;
    cout << p2->x << " " << p2->y; //1 2
}


