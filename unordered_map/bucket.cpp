/*
-   locate_element
-   return the bucket number where the element with key k is located.
-   a bucket is a slot in the container's internal hash table to which element are assigned based on the hash value of their key.
buckets are numbered from  0 to (bucket_count - 1).
-   Individual elements in a bucket can be accessed by means of the range iterators returned by unordered_map::begin and unordered_map::end.
*/

// unordered_map::bucket
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<string, string> mymap = {
        {"us", "United States"},
        {"uk", "United Kingdom"},
        {"fr", "France"},
        {"de", "Germany"}};

    for (auto &x : mymap)
    {
        cout << "Element [" << x.first << ":" << x.second << "]";
        cout << " is in bucket #" << mymap.bucket(x.first) << endl;
    }

    return 0;
}

/*
NOTE:
Why is bucket sort used?
Bucket sort is a useful technique that is commonly used when inputs are uniformly distributed. In computer science, 
it is a very simple way for comparison, which is based on the algorithm of sorting. 
Bucket sort can also be used for partitioning an array into buckets where each bucket is individually sorted

What is bucket sort with example?
Bucket Sort is a sorting algorithm that divides the unsorted array elements into several groups called buckets. 
Each bucket is then sorted by using any of the suitable sorting algorithms or recursively applying the same bucket algorithm. 
Finally, the sorted buckets are combined to form a final sorted array.

What is bucket in data structure?
A bucket data structure is a data structure that uses the key values as the indices of the buckets, 
and store items of the same key value in the corresponding bucket. 
Naturally it makes the most sense to use the bucket data structure with integer key values.

What is Bucket Unordered_set?
The unordered_set::bucket() method is a builtin function in C++ STL which returns the bucket number of a specific element. 
That is, this function returns the bucket number where a specific element is stored in the unordered_set container.