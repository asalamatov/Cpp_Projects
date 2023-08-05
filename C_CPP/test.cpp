// // #include <iostream>

// // using namespace std;

// // void print_arr(int *ptr){
// //   for (int i=0; i<5; i++){
// //     cout << *(ptr + i)<< endl;
// //   }
// // }


// // void square(int *ptr){
// //   int temp = *ptr;
// //   *ptr = temp * temp;
// // }

// // class Test {
// // private:
// //   int value = 10;
// // public:
// //   void setValue(int n){
// //     value = n;
// //   }
// //   int getValue(){
// //     return value;
// //   }
// // };

// // // int main() {
// // //   // int nums[5] = {1,2,3,4,5};
// // //   // print_arr(nums);
// // //   // int *ptr = nums;
// // //   // int *ptr = &nums[0];
// // //   // for (int i = 0; i < 5; i++){
// // //   //   cout << * (ptr + i) << endl;
// // //   // }

// // //   // int num = 10;
// // //   // square(&num);
// // //   // cout << num;

// // //   // int *ptr = new int(10);
// // //   // cout << ptr<< endl << *ptr;

// // //   Test *ptr = new Test;
// // //   ptr->setValue(34);
// // //   cout << ptr->getValue();
  
// // //   return 0;
// // // }

// // class Car{
// // private:
// //   int weight;
// // public:
// //   void setWeight(int w){
// //     weight = w;
// //   }

// //   int getWeight(){
// //     return weight;
// //   }
// // };

// // class BMW{
// // private:
// //   int topSpeed;
// //   Car *ptr;
// // public:
// //   BMW(int wght = 0, int tSpeed = 0){
// //     ptr = new Car;
// //     ptr->setWeight(wght);
// //     topSpeed = tSpeed;
// //   }
// //   int getWeight(){
// //     return ptr -> getWeight();
// //   }
// //   int getTSpeed(){
// //     return topSpeed;
// //   }

// //   ~BMW(){
// //     delete ptr;
// //   }
// // };

// // int main(){
// //   BMW car(3500, 350);  
// //   cout << car.getWeight();
// //   return 0;
// // }

    
// #include <iostream>
// #include <array>
// using namespace std;

// // int main(){
// //   array<int, 3> testArray1;
// //   array<int, 3> testArray2 = {1,2,3};
// //   //methods
// //   cout<< "AT: " << testArray2.at(2) << endl; //out-of-bound safe
// //   cout<<"[]: "<< testArray2[2] << endl; //unsafe 
// //   cout<<"front(): "<<testArray2.front()<<endl;
// //   cout<<"back(): "<<testArray2.back()<<endl;
// //   // testArray1.fill(0);  // fill array with 0
// //   //testArray1.swap(testArray2); // swap two arrays
// //   cout << "size(): "<< testArray1.size() << endl; // size of array filled
// //   cout << "max_size(): " << testArray1.max_size() << endl; //max size of array 

// //   return 0;
// // }

// // int main(){
// //   array<int, 5> arrayObj;
// //   int sizeOfSTLArray = arrayObj.size();
// //   for (int i=0; i<5; i++){
// //     cout << "Enter a number at index "<<i<<": ";
// //     cin >> arrayObj.at(i);
// //   }

// //   for (int i=0; i<5; i++){
// //     cout<<endl<< arrayObj.at(i);
// //   }

// //   return 0;
// // }

// #include<vector>
// int main(){
//   vector<int> testVector1;
//   // testVector1.pop_back(4);
//   cout << "Size "<< testVector1.size() << endl; //size

//   // init
//   vector<int> testVector2 = {1,2,3};


//   //methods
//   cout << "at: "<<testVector2.at(2) << endl; // safe
//   cout << "[]: "<<testVector2[2]<<endl; // unsafe

//   testVector2.push_back(4);
//   // testVector2.push_back(5);
//   // testVector2.push_back(6);

//   for (int i=0; i<4; i++){
//     cout<< endl<<testVector2.at(i);
//   }
//   cout << testVector2.max_size()<<endl;

//   //iterator
//   for (vector<int>::iterator i = testVector2.begin(); i!=testVector2.end(); i++){
//     cout << *i << " ";
//   }

//   //pop_back
//   testVector2.pop_back();
//   cout<<endl;
//   for(vector<int>::iterator i = testVector2.begin(); i!=testVector2.end(); i++){
//     cout << *i << " ";
//   }

//   //insert:- inserts the element in vector before the position pointed by the iterator
//   cout<<endl;
//   vector<int>::iterator i = testVector2.begin();
//   testVector2.insert(i, 0);
//   for(vector<int>::iterator i = testVector2.begin(); i!=testVector2.end(); i++){
//     cout << *i << " ";
//   }

//   //erase:- removes the element pointed by the iterator
//   cout<<endl; 
//   vector<int>::iterator j = testVector2.begin();
//   j++;
//   testVector2.erase  (j);
//   for(vector<int>::iterator i = testVector2.begin(); i!=testVector2.end(); i++){
//     cout << *i << " ";
//   }

//   //vec.erase(from, to)
//   cout<<endl;
//   testVector1 = {0,0,0,0,3};
//   testVector1.erase(testVector1.begin(), testVector1.end()-1);
//   for(vector<int>::iterator i = testVector1.begin(); i!=testVector1.end(); i++){
//     cout << *i << " ";
//   }

//   //swap
//   // testVector1.swap(testVector2);


//   //capacity: # of elems can be inserted
//   cout<<endl<<"Capacity: " << testVector2.capacity() <<endl;
  
  
  
  

  
//   return 0;
// }

#include<iostream>
#include<list>
using namespace std;
// int main(){
//   //declare
//   list<int> nums1;
//   //init
//   list<int> nums2 = {1,2,3};
//   //methods
//   list<int>::iterator i = nums2.begin();
//   //insert: before the iter
//   nums2.insert(i, 5); // {1,2,3} => {5,1,2,3}

//   for (list<int>::iterator i = nums2.begin(); i != nums2.end(); i++){
//     cout << *i << " ";
//   }

//   // push_back
//   nums2.push_back(4);
//   for (list<int>::iterator i = nums2.begin(); i != nums2.end(); i++){
//     cout << *i << " ";
//   }

//   //push_front
//   cout<<endl;
//   nums2.push_front(6);
//   for (list<int>::iterator i = nums2.begin(); i != nums2.end(); i++){
//     cout << *i << " ";
//   }

//   //pop_back()
//   nums2.pop_back();
//   //pop_front()
//   nums2.pop_front();

//   //reverse()
//   cout<<endl;
//   nums2.reverse();

//   for (list<int>::iterator i = nums2.begin(); i != nums2.end(); i++){
//     cout << *i << " ";
//   }

//   //swap 
//   nums2.swap(nums1);

//   //size
//   nums1.size();

//   // sort
//   nums1.sort();

//   //merge
//   nums1.merge(nums2); // {10,20} + {1,2,3} = {10,20,1,2,3}
  
//   return 0;  
// }
#include<stack>
// int main(){
//   stack<int> stack1;
//   //push
//   stack1.push(10);
//   stack1.push(20);
//   stack1.push(30); //10, 20, 30 (top)

//   //top
//   cout<< "TOP: " << stack1.top();

//   //pop
//   stack1.pop();
  
// }

#include<queue>

#include<string>
// int main(){
//   queue<int> q;
//   q.push(4);
//   q.push(5);
//   q.push(6);

//   cout<<endl<<q.back()<<endl;

//   q.pop();
//   cout<<endl<<q.front();

//   cout<<endl<<q.size();
// }

// int main(){
//   priority_queue<int, vector<int>, less<int>> q;
//   q.push(4);
//   q.push(3);
//   q.push(5);

//   cout<<q.top();
// }

#include<map>

// int main(){
//   //declare
//   map<int, string> map1;
//   //init
//   map<int, string> map2 = {
//   {101, "CS"},
//   {102, "Bio"},
//   {103, "Chem"}
//   };
//   //methods

//   //insert
//   map2[104] = "Math";
//   //check
//   for (map<int, string>::iterator i = map2.begin(); i!=map2.end(); i++){
//     cout<<endl<<i->first;
//     cout<<" "<<i->second;
//   }

//   // at, []
//   cout<< endl << map2.at(101)<<endl;

//   //insert 
//   map2.insert(pair<int, string>(106, "PE"));
//   map2.insert(make_pair(204, "RE"));

//   for (map<int, string>::iterator i = map2.begin(); i!=map2.end(); i++){
//     cout<< endl<<i->first<<":"<<i->second;
//   }

//   //erase by the iter
//   map2.erase(map2.begin());
  
  
// }

// int main(){
//   //declas
//   multimap<int, string> mmap1;
//   //init
//   multimap<int, string> mmap2 = {
//   {1,"one"},
//   {2,"two"},
//   {3,"three"},
//   {3,"Three"}
//   };

//   //check
//   for (multimap<int, string>::iterator i = mmap2.begin(); i!= mmap2.end(); i++){
//     cout<<i->first<<": "<<i->second<<endl;
//   }

//   //alter -- not possible
//   //mmap2[3]="THREE"; // ERROR!!!

//   //insert
//   mmap2.insert(make_pair(5, "five"));
//   mmap2.insert(pair<int, string>(6, "six"));
//   for (multimap<int, string>::iterator i = mmap2.begin(); i!= mmap2.end(); i++){
//     cout<<i->first<<": "<<i->second<<endl;
//   }

//   //erase
//   multimap<int, string>::iterator first_iter = mmap2.begin();
//   mmap2.erase(first_iter);

//   //swap
//   // mmap1.swap(mmap2);


//   // clear
//   // delete every element in the mmap

//   //count
//   //return the number of elements matching the given key
//   cout<< "Count no of 3: "<<mmap2.count(3)<<endl;

//   //size
//   //mmap2.size();
  
  
// }


#include<unordered_map>
int main(){
  unordered_map<int, string> umap1;
  unordered_map<int, string> umap2 = {
  {1,"one"},
  {2,"two"},
  {3,"three"},
  {4,"four"},
  {4,"Four"} //not taken
  };

  //check
  unordered_map<int, string>::iterator i = umap2.begin();
  for(i; i!=umap2.end(); i++){
    cout<<i->first<<": "<<i->second<<endl;
  }

  //alter
  umap2[1] = "One";  // works on the video, but not here
  for(i; i!=umap2.end(); i++){
    cout<<i->first<<": "<<i->second<<endl;
  }

  //insert - pair<int, str>(1,"") or make_pair(1,"")


  //erase by iter

  //swap

  //clear

  // size
  
  
  
}


