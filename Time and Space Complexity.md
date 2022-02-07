# Time and Space Complexity.md

**Time complexity**, in a crude sense, is the number of steps/operations your algorithm takes to finish executing a given input. **Space complexity** is the amount of space your algorithm can occupy when it runs on a given input.

![image](https://user-images.githubusercontent.com/59710234/152857131-748a47b7-413b-4f87-9b69-9be61d4cf075.png)

The Big-O notation is used to describe how an algorithm scales with the size of the input.Time and space complexity depends on lots of things like hardware, operating system, processors, etc. But we will only consider the execution time of an algorithm.

**Simple solution to this problem is traverse the whole array A and check if the any element is equal x to .**

![image](https://user-images.githubusercontent.com/59710234/152857085-ff9e8bcf-a686-4c61-b26b-c3900be53279.png)

Each of the operation in computer take approximately constant time, takes **c** time. The number of lines of code executed is actually depends on the value of **x**. we will consider **worst case** scenario  i.e., when  is not present in the array **A**. the if condition will run **N** times where **A** is the length of the array **A**. So in the worst case, total execution time will be **(N * c ) + c.**  **N*c** for the if condition and **c** for the return statement. As we can see that the total time depends on the length of the array **A**. If the length of the array will increase the time of execution will also increase.

**We use different notation to describe limiting behavior of a function.**
**O-notation:** To denote asymptotic upper bound. O(f(n)); (pronounced “big-oh of f of n”)
**Ω-notation:** To denote asymptotic lower bound. Ω(f(n)); (pronounced “big-omega of f of n”)
**Θ-notation:** To denote asymptotic tight bound. Θ(f(n)); (pronounced “big-theta of f of n”)

We mostly consider O-notation because it will give us an upper limit of the execution time.  we mostly consider O-notation because it will give us an upper limit of the execution time.
**
f(N) = 2*N<sup>2</sup> + 3*N + 5 ; 
O(f(N)) = O(2*N<sup>2</sup> + 3*N + 5) = O(N<sup>2</sup>)
**

**Lets consider some example:**
1.
```
int count = 0;
for (int i = 0; i < N; i++) 
    for (int j = 0; j < i; j++) 
        count++;
```
Lets see how many times **count++** will run.
When i = 0, it will run 0 times.
When i = 1, it will run 1 times.
When i = 2, it will run 2 times and so on.

![image](https://user-images.githubusercontent.com/59710234/152861562-69d0de8e-2388-43c3-812c-be81936a2de6.png)

        
        
