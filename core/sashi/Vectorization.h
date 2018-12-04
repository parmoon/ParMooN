 

 
   sort(arr, arr+n, greater<int>()); //desending
   sort(arr, arr+n); //assending
   reverse(vect.begin(), vect.end()); // Reversing the Vector 
   cout << *max_element(vect.begin(), vect.end()); 
   cout << *min_element(vect.begin(), vect.end()); 
   cout << accumulate(vect.begin(), vect.end(), 0); //Starting the summation from 0 
   cout << count(vect.begin(), vect.end(), 20); // Counts the occurrences of 20 from 1st to last element 
   find(vect.begin(), vect.end(),5) != vect.end()? 
                         cout << "\nElement found": // true if 5 is in the array 
                     cout << "\nElement not found"; // elase if not
                     
   // finding an index of value (20) in an array
    sort(vect.begin(), vect.end());                     
    auto q = lower_bound(vect.begin(), vect.end(), 20); // cout << q - vect.begin() << endl; ==> vect[q]
    auto p = upper_bound(vect.begin(), vect.end(), 20);  // cout << p - vect.begin() << endl; ==> vect[p-1], C++ numbering
    cout << distance(vect.begin(), max_element(vect.begin(), vect.end())); //Return distance of first to maximum element
    
   //search an element 2 in an array 'a"
   sort(a, a +n); 
  if (binary_search(a, a+n, 2)) 
        cout << "\nElement found in the array"; 
    else
        cout << "\nElement not found in the array"; 
    
  // ============================================================
// force the compiler to vectorize this loop 
//  !!! use only when there is no dependency in the data
 #pragma clang loop vectorize(assume_safety)
  for (int i = 0; i < count; i++)
      
      
 // force the compiler DISABLE vectorize this loop  
  #pragma clang loop vectorize(disable)
  for ( int i = 0; i < count; i++ )
// ============================================================
// Unrolling a scalar loop
for (int i = 0; i < 64; i++) {
  data[i] = input[i] * other[i];
}

by a factor of two, gives:

for (int i = 0; i < 32; i +=2) {
  data[i] = input[i] * other[i];
  data[i+1] = input[i+1] * other[i+1];
}
#pragma clang loop unroll(enable)

To unroll to a user-defined UF, instead insert:

#pragma clang loop unroll_count(_value_)      

#pragma clang loop unroll(enable)
for (int i = 0; i < 64; i++) {
  data[i] = input[i] * other[i];
}
// ============================================================

use < conditions rather than <= or != when constructing loops. This helps the compiler to prove that a loop terminates before the index variable wraps


// ============================================================
template<class TYPE>

template<typename TYPE>

// ============================================================
Iterators

    begin() – Returns an iterator pointing to the first element in the vector
    end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
    rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    cbegin() – Returns a constant iterator pointing to the first element in the vector.
    cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)


for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Output of begin and end: "; 
    for (auto i = g1.begin(); i != g1.end(); ++i) 
        cout << *i << " "; 
    
  // ============================================================
    
    
    size() – Returns the number of elements in the vector.
    max_size() – Returns the maximum number of elements that the vector can hold.
    capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
    resize() – Resizes the container so that it contains ‘g’ elements.
    empty() – Returns whether the container is empty.
    shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
    reserve() – Requests that the vector capacity be at least enough to contain n element
    
Modifiers:

    assign() – It assigns new value to the vector elements by replacing old ones
    push_back() – It push the elements into a vector from the back
    pop_back() – It is used to pop or remove elements from a vector from the back.
    insert() – It inserts new elements before the element at the specified position
    erase() – It is used to remove elements from a container from the specified position or range.
    swap() – It is used to swap the contents of one vector with another vector of same type and size.
    clear() – It is used to remove all the elements of the vector container
    emplace() – It extends the container by inserting new element at position
    emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector
    
       
  // ============================================================ 
    
    int main() 
{ 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Size : " << g1.size(); 
    cout << "\nCapacity : " << g1.capacity(); 
    cout << "\nMax_Size : " << g1.max_size(); 
  
    // resizes the vector size to 4 
    g1.resize(4); 
  
    // prints the vector size after resize() 
    cout << "\nSize : " << g1.size(); 
  
    // checks if the vector is empty or not 
    if (g1.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 
  
    // Shrinks the vector 
    g1.shrink_to_fit(); 
    cout << "\nVector elements are: "; 
    for (auto it = g1.begin(); it != g1.end(); it++) 
        cout << *it << " "; 
  
    return 0; 
} 
Size : 5
Capacity : 8
Max_Size : 4611686018427387903
Size : 4
Vector is not empty
Vector elements are: 1 2 3 4
    
  // ============================================================
  / C++ program to illustrate the 
// Modifiers in vector 
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // Assign vector 
    vector<int> v; 
  
    // fill the array with 10 five times 
    v.assign(5, 10); 
  
    cout << "The vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 15 to the last position 
    v.push_back(15); 
    int n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // removes last element 
    v.pop_back(); 
  
    // prints the vector 
    cout << "\nThe vector elements are: "; 
    for (int i = 0; i < v.size(); i++) 
        cout << v[i] << " "; 
  
    // inserts 5 at the beginning 
    v.insert(v.begin(), 5); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // removes the first element 
    v.erase(v.begin()); 
  
    cout << "\nThe first element is: " << v[0]; 
  
    // inserts at the beginning 
    v.emplace(v.begin(), 5); 
    cout << "\nThe first element is: " << v[0]; 
  
    // Inserts 20 at the end 
    v.emplace_back(20); 
    n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // erases the vector 
    v.clear(); 
    cout << "\nVector size after erase(): " << v.size(); 
  
    // two vector to perform swap 
    vector<int> v1, v2; 
    v1.push_back(1); 
    v1.push_back(2); 
    v2.push_back(3); 
    v2.push_back(4); 
  
    cout << "\n\nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
  
    // Swaps v1 and v2 
    v1.swap(v2); 
  
    cout << "\nAfter Swap \nVector 1: "; 
    for (int i = 0; i < v1.size(); i++) 
        cout << v1[i] << " "; 
  
    cout << "\nVector 2: "; 
    for (int i = 0; i < v2.size(); i++) 
        cout << v2[i] << " "; 
} 
Output:

The vector elements are: 10 10 10 10 10 
The last element is: 15
The vector elements are: 10 10 10 10 10 
The first element is: 5
The first element is: 10
The first element is: 5
The last element is: 20
Vector size after erase(): 0

Vector 1: 1 2 
Vector 2: 3 4 
After Swap 
Vector 1: 3 4 
Vector 2: 1 2

