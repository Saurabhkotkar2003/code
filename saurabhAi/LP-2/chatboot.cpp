#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

string getChatboot(const string& userInput)
{
  if(userInput=="hi")
  {
    return "hello";
  }
  else if(userInput=="hello")
{
  return "hi";
}
else if(userInput=="how are you?")
{
  return "I'm fine and you";
}
else if(userInput=="I am also fine")
{
  return "Do you have a more quetion ";
}
else{
  return "sorry I didn't understan you and ";
}
}
int main()
{
   string userInput;
   cout<<"Welcome TO our ChatBot!";
   cout<<"Hey I am assist you you can ask any quetion to me i will give you answer";
   cout<<"Enter bye to exit from the chat boot";
   while (true)
   {
    cout<<"\nyou:"<<endl;
      getline(cin,userInput);

    transform(userInput.begin(),userInput.end(),userInput.end(),::tolower);

    if(userInput == "bye")
    {
      cout<<"Goodbye Have a great day";
      break;
    }
    cout<<"bot:"<<endl<<getChatboot(userInput)<<endl;

    
   }
   

  



}
