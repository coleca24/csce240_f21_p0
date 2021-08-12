# CSCE 240 Fall 2021 Project 0
---
Repo Name: csce240_f21_p0

Due Dates: 
- Commit 1: 8/25/21 at Midnight
- Final Commit: 8/30/21 at Midnight
---

## Welcome to CSCE 240! 
In this first assignment we will aim to get some practice in the mechanics of this class. One good programming technique that we will practice is iterative processing. The basic concept here is that a good programmer should not code everything all at once, but instead break a task into smaller tasks and tackle those individually. The danger of coding everything at once is that if it fails a build then it can be a pain to debug. However, if you practice iterative programming then the amount of code to debug is more managable. To enforce this iterative process, each assignment will be broken up into several deadlines (or commits). Each commit will build on all of the previous commits and have thier own associated test cases. 

Main outcomes:
- Become familiar with using Git/Github/Github Classroom
- Become familiar with Google's C++ style guide (https://google.github.io/styleguide/cppguide.html)
- Become familiar with interpreting Google Test output
- Write basic C++ code

Commit #1 (Due 8/25/21 at Midnight) Tasks: 
1. Clone the repository
2. Edit the helloworld.cpp file 
3. Change the header so that it includes your name, section, email and a short message. Do not modify anything inside of the DO NOT MODIFY START and END sections. For example, mine would look something like:
```
// Author: Casey Cole
// Email: coleca@cse.sc.edu
// Section #: 001
// Copyright 2021 Casey Cole
// Modified from template code @coleca24 GitHub
```
4. Push your changes
```
cd /directory/your/code/is/in
git pull 
```
Should say "Already up to date." If not then:
```
git pull
```
In general, it is not a bad idea to just get in the habit of pulling before every push, but in instances where you see the "Already up to date." you do not technically need to push. Next, we are going to add the files that we want to push. 
```
git add helloworld.cpp
```
If you ever forget which files you modified, use: 
```
git status
```
This will tell you which were modified and not staged yet for commit. 

Now that we have added the helloworld.cpp file, we will now commit the file. This step will not actually push up the changes, but instead just move them to the staged version of our code that we want to send up. Every commit should have a message associated with it to give other developers (or ourselves) an idea of what is contained in a push (be brief). This is done most effciently by the -m option in the git command. See example below:
```
git commit -m "Changed helloworld.cpp file for commit 1"
```
After running this command, you will see a summary of the changes that you made (1 file changed, ... ). Now, we want to push. 
```
git push
```
GitHub will ask for your user name and password (this is the one that you set up when you made your GitHub account - NOT your USCID). Now your code should be pushed up to GitHub and you should be able to see your message on the GitHub website. 
![image](https://user-images.githubusercontent.com/3376451/129236668-8f98a580-dad6-47e5-92d4-e21bbdbd9aec.png)

That's it! For those of you freightened by red 'x''s - yes you will see this:
![image](https://user-images.githubusercontent.com/3376451/129236931-dca6f72e-2ed8-403e-bf62-533531acea2f.png)
And that is FINE for now, you will fix those in the second commit (below). 

---

Final Commit (Due 8/30/21 at Midnight) Tasks: 

*(Remember this should also include all of the tasks from Commit #1)*

Okay, let's fix that red x. In this commit, you will be implementing the functions in the helloworld.cpp and getting a feel for the style and code checkers that I have implemented as actions in GitHub. 
1. Do something
2. Do something else

---
Other considerations:
- Your code must conform to the style guide at every commit (see Checking for Style PDF on Dropbox). 
- 
