#include <iostream>
#include <vector>
#include <algorithm> //sort,
#include <utility> //swap


int main() 
{
  //Vector that holds ints. 
  std::vector<int> highScores;
  //          ^^^ could be pointers

  //how to load
  highScores.push_back(2);
  //The int 5 has been added to the vector.

  //This will print out the 5.
  std::cout<<highScores[0]<<std::endl;
  

  highScores.push_back(7);
  highScores.push_back(15);
  highScores.push_back(12);
  highScores.push_back(8);
  //Now there are several data points in the vector

  //Use the '&' here so that the references are printed and there is no copying elements into the temp object.
  //const can also be used here. 
  //    \/
  for (const int& temp : highScores)
  {
    std::cout<<temp<<std::endl;
  }
  //This range based for loop prints out the elements in
  //the order given

  //this deletes everything in the vecor
  //highScores.clear();

  //This will identify the begining of the vector, add //one, then erase that element. 
  highScores.erase(highScores.begin()+1);

  std::cout<<"We lost one."<<std::endl;
  for (const int& temp : highScores)
  {
    std::cout<<temp<<std::endl;
  }

  //Now to sort the Vector
  //This requires the #include<algorithm>
  sort(highScores.begin(), highScores.end());
  //sort(highScores.front(),highScores.back());
  
  std::cout<<"We sorted things out."<<std::endl;
  for (const int& temp : highScores)
  {
    std::cout<<temp<<std::endl;
  }


  //This will cause a crash\/
  //sort(highScores.end(), highScores.begin());
  /* The sort only works one way
  std::cout<<"We sorted things out again?."<<std::endl;
  for (const int& temp : highScores)
  {
    std::cout<<temp<<std::endl;
  }
  */

  //This will set the order to descending now. 
  std::reverse(highScores.begin(), highScores.end());
  std::cout<<"We sorted things out into descending order."<<std::endl;
  for (const int& temp : highScores)
  {
    std::cout<<temp<<std::endl;
  }
  
  //How about a Kansas City Shuffle?
  std::random_shuffle(highScores.begin(),highScores.end());
  std::cout<<"Randomization!!."<<std::endl;
  for (const int& temp : highScores)
  {
    std::cout<<temp<<std::endl;
  }

  //How about swapping Items
  //#include <utility> needed
  std::swap(highScores[0],highScores[1]);

    std::cout<<"Elements 0 and 1 have been swapped."<<std::endl;
  for (const int& temp : highScores)
  {
    std::cout<<temp<<std::endl;
  }

  //How to replacce certain values in a given range

  std::replace(highScores.begin(),highScores.end(), 12, 99);
  //This searches the vector from beginning to end, replacing all 12s with 99.

    std::cout<<"Goodbye 12, hello 99!"<<std::endl;
  for (const int& temp : highScores)
  {
    std::cout<<temp<<std::endl;
  }

  //This will remove 99 from the vector
  std::remove(highScores.begin(),highScores.end(), 99);

  std::cout<<"Goodbye 99!"<<std::endl;
  for (const int& temp : highScores)
  {
    std::cout<<temp<<std::endl;
  }

  std::cout<<"Hello 8?"<<std::endl;





  



}