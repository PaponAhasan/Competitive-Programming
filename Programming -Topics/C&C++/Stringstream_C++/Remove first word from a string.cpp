string sentence="Hello how are you.";
cout<<"Before:"<<sentence<<endl;
sentence=sentence.substr(sentence.find_first_of(" \t")+1);
cout<<"After:"<<sentence<<endl;

Output:
Before:Hello how are you.
After:how are you.