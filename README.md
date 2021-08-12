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

Okay, let's fix that red x. In this commit, you will be implementing the functions in the helloworld.cpp and getting a feel for the style and code checkers that I have implemented as actions that trigger every time you push in GitHub. To see all the actions, navigate to the Actions tab in GitHub: 
<img width="920" alt="Snip_Actions" src="https://user-images.githubusercontent.com/3376451/129252670-a6bc0687-8d37-4849-9a1d-1bd99bef765e.PNG">
Notice there are 2 workflows (Test and Code Checker). 

Assuming you have already completed Commit #1, then you should see something like this in the list of Workflow Runs: 
<img width="680" alt="Snip_failedChecks" src="https://user-images.githubusercontent.com/3376451/129253333-a04a113e-0b3e-4af7-8083-c6e5118b2e88.PNG">

Let's start with the Test workflow. What this workflow is doing is performing some unit testing on your code with the Google test suite (gtest). If you open up the helloworld.cpp, you can actually see the testing conditions. Do not edit these. Later on in the semester we will learn more about these and you will implement some yourself.  

Click on the workflow run that says Test underneath it (second one in this picture). 
<img width="680" alt="Snip_failedChecks" src="https://user-images.githubusercontent.com/3376451/129253562-cb9e14e2-a6ab-484d-926d-2bd18d7d9235.PNG">

You should now see something like this: 
<img width="922" alt="Snip_Test_build" src="https://user-images.githubusercontent.com/3376451/129253737-51e57288-a5ac-4dd7-8671-e124e58e78e3.PNG">

Click on the Build. Notice that the only part where your code failed was in the Test tab.  
<img width="693" alt="Snip_Test_build_TestCircled" src="https://user-images.githubusercontent.com/3376451/129253803-d856bb6e-2f62-4314-92af-950b843e3699.PNG">

Click on the Test tab. We are going to walk through these tests in a lot of detail (in future assignments I will not be as verbose). 

The first output that you should see is test1 (there is a little output before that, but the main output for me started on line 14 - see below). This test ran a unit test called HelloTest.correctStringCreated (highlighted in yellow below). This test is testing the output of your genHelloWorld() function. The expected value of this function was "Hello World!" (underlined in blue) but the output of your function was "" (underlined in red). Therefore, you failed that test. To fix this, you will have to change the return statement in the genHelloWorld() function so that it returns was is expected! 
<img width="596" alt="Snip_Test1Fail" src="https://user-images.githubusercontent.com/3376451/129254244-3d3bf7ae-0536-455a-b82c-83a06eb35d9d.PNG">

A little further down you will see the output of another test (HelloTest.iCanAdd). This one is testing the output of your myAdd(int,int) function. The expected output when (1,1) is sent to this function should be 2 (underlined in blue), but your script is returning 0 (underlined in red). Therefore, you failed and need to update the output of the script to return the sum of the two numbers. Note: DO NOT JUST RETURN 2 to get it to pass the test.... return the sum of the two parameters. 
<img width="498" alt="Snip_Test2Fail" src="https://user-images.githubusercontent.com/3376451/129254589-892b488d-440e-404b-b4f4-16b5a59c680f.PNG">

At the bottom of this output, you will also find a summary of all the tests that passed and failed (this will come in handy later when you have a bunch of test cases). 
<img width="584" alt="Snip_AllFailed" src="https://user-images.githubusercontent.com/3376451/129255062-14276dea-4095-444d-9687-e70ca175f11a.PNG">

Now, let's talk about the style checker (back in the Actions tab, workflow runs, first one now that says style checker underneath). 
<img width="680" alt="Snip_failedChecks" src="https://user-images.githubusercontent.com/3376451/129255482-8fb21ab2-4bae-460a-bb48-d6ef4a6fe684.PNG">



Now, to fix the code, do the following:
1. Complete the genHelloWorld() function such that it returns the string "Hello World!" Make sure that it passes test 1 in the Test Action (explained above). 
2. Complete the myAdd(int,int) function such that it returns the sum of the two parameters passed in (num1 and num2). Make sure it passes test 2 in the the Test Action. 
3. Lastly, make sure that your code follows the google style guide and passes the Style Checker Action (explained above).

To retest your code, you can just follow the git commands that you did for commit #1 (remember, every time you push these workflows will be triggered). 

OR...

You can do it all manually on your own end before pushing your code (please note that you will still need to push your code when you are finished to get a grade).


---
Other considerations:
- 
- 
