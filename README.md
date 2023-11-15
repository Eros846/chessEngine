
# Chess Game
 
 Authors: \[Martin De Guzman](https://github.com/KuYuh02),  \[David Aispuro](https://github.com/DavidA346),  \[Michael Mihalovich](https://github.com/michaelm015),  \[Sarik Raj Karki](https://github.com/Eros846)

## Phase I
## Project Description
 * One of the reasons this project is interesting is it exposes us to working with back end development. It also deals with security via account information and is an exciting challenge. We also love the fact that despite chess being a simple game, there is a lot of features we can implement features to make it more convenenient, entertaining, etc. Features that are not possible to implement in real life chess. 
 * We plan to code our backend/the main game in C++ and the game will run two local players in the console.
 * The project will take many different inputs. For example, when in the create profile menu option, it will take user login inforomation such as username and password. As for the game itself, the user will type the piece they want to move and where on the board to move it.  
 * The project an in console main menu which has options to make an account, learn the rules of chess, and host the main game. The main chess game will have the same rules of chess.
 * The backend of the project will take care of the logic of the chess game. This includes setting up and displaying the pieces and board, creating both a black and white player and determining the legal moves for each piece and whether or not the move can be completed. Finally, it will display the outcome of the game and ask the user to play again or exit to main menu.
 * The input for this project will be accomplished through the user keyboard. The user will also need to input for every turn they wish to complete and the output will be that move displayed on the screen. (see diagram below for more details)


 ## Phase II
## User Interface Specification

### Navigation Diagram
![image](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/57105334/ce02b2b2-6e1e-413f-971a-e8707f7c6376)

# Screen Layouts

## Main Menu
![image](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/57105334/c412f5b8-75ba-4602-9312-e846b35e1133)

Key Features:
- The whole program will run from the console.
- The menu will keep running until the user specifies to exit.
- All inputs will validated.

## Create profile
![image](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/57105334/cb3d4037-2504-483e-8a28-edcd59ac2f14)
- Here the user can make a profile. 
- The console will validate to make sure the passwords match, the username does not already exist, etc.
- Before a match, the console will also ask for the users to login using an existing profile. 

## Game page
![image](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/57105334/d96b4937-5120-4036-be20-99957058056d)
- After both players successfully login to their profile, they can begin playing a match. 
- User can make moves by typing it, the console will validate if it is a valid move. 
- The board is labeled on all sides to help the user make the correct move. 
- At the end, the console will as to play another game or go back to main menu. 

## Class Diagram
 Include a **class diagram(s)** for your project and a **description** of the diagram(s). Your class diagram(s) should include all the main classes you plan for the project. This should be in sufficient detail that another group could pick up the project this point and successfully complete it. Use proper UML notation (as discussed in the course slides).
![IMG_0117](https://github.com/cs100/final-project-mdeg011-skark010-daisp002-mmiha004/assets/88258745/718ebf95-f786-4772-aeab-d52006fc5d8c)


 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on Zoom and should be conducted by Wednesday of week 8.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
