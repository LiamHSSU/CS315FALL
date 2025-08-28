Name: Liam Hinson, Student ID:008449409, GitHub Link: https://github.com/LiamHSSU/CS315FALL/tree/main/dictionary-benchmark

Sources: When it came to the SortedLinkedList for 500000 elements, I was, and still am at the time of writing this, having issues with it either taking forever to finish.
I never had an issue like this in the past so I do not know if my implementation is poor, or if it's something else. I checked with both StackOverFlow examples of similar 
algorithms and asked AI if my code had any issues, but neither came up with a definitive problem. The other implementations seem to work fine, with a bit of difference of 
runtime.

Update: I got the following time finally:

Sorted Linked List [N=500000] - Insert: 937874680us, Avg Lookup: 5652257ns, Avg Remove: 4748787ns

I do not know what to make of this, but I think the previously posted times in the assignment page were before the implementations were set.

Incase of it taking to long on blue, here are my times:

Unsorted Vector [N=5000] - Insert: 110us, Avg Lookup: 14865ns, Avg Remove: 680ns
Sorted Vector [N=5000] - Insert: 1511us, Avg Lookup: 103ns, Avg Remove: 355ns
Unsorted Linked List [N=5000] - Insert: 271us, Avg Lookup: 17ns, Avg Remove: 7787ns
Sorted Linked List [N=5000] - Insert: 15918us, Avg Lookup: 7140ns, Avg Remove: 6013ns
Unsorted Vector [N=500000] - Insert: 6372us, Avg Lookup: 1570160ns, Avg Remove: 1009ns
Sorted Vector [N=500000] - Insert: 4138968us, Avg Lookup: 172ns, Avg Remove: 70775ns
Unsorted Linked List [N=500000] - Insert: 16896us, Avg Lookup: 27ns, Avg Remove: 1022681ns
Sorted Linked List [N=500000] - Insert: 937874680us, Avg Lookup: 5652257ns, Avg Remove: 4748787ns



# Dictionary Benchmark

## Structure

- `src/`: Contains `Dictionary` interface and `UnsortedVectorDict` implementation.
- `.github/workflows/test.yml`: GitHub Actions CI setup.

## How It Works

1. UnsortedVectorDict.cpp is complete and the main function contains the necessary code to test it. 
2. The output provides the average run-time for the **insert** and **lookup** function. However, only the average run-time values for the unsorted vector variation is meaningful as the other variations have not been implemented yet.    
3. GitHub Actions runs 

## Run Locally

```bash
mkdir build && cd build
cmake ..
make
ctest --output-on-failure
```
